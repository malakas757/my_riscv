// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_ATTR_COLD void Vcommon___024root___settle__TOP__2(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->rob__DOT__disp_num = (((IData)(vlSelf->instr0_valid) 
                                   & (IData)(vlSelf->instr1_valid))
                                   ? 2U : (((IData)(vlSelf->instr0_valid) 
                                            | (IData)(vlSelf->instr1_valid))
                                            ? 1U : 0U));
    vlSelf->instr0_robid = vlSelf->rob__DOT__rob_head;
    vlSelf->instr1_robid = (0x7fU & ((IData)(1U) + (IData)(vlSelf->rob__DOT__rob_head)));
    vlSelf->retire0_robid = (0x3fU & (IData)(vlSelf->rob__DOT__rob_tail));
    vlSelf->retire1_robid = (0x3fU & ((IData)(1U) + (IData)(vlSelf->rob__DOT__rob_tail)));
    vlSelf->retire0_is_wb = (1U & (vlSelf->rob__DOT__reg_rob
                                   [(0x3fU & (IData)(vlSelf->rob__DOT__rob_tail))][2U] 
                                   >> 5U));
    vlSelf->retire1_is_wb = (1U & (vlSelf->rob__DOT__reg_rob
                                   [(0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelf->rob__DOT__rob_tail)))][2U] 
                                   >> 5U));
    vlSelf->retire0_arf_id = (0x1fU & vlSelf->rob__DOT__reg_rob
                              [(0x3fU & (IData)(vlSelf->rob__DOT__rob_tail))][2U]);
    vlSelf->retire1_arf_id = (0x1fU & vlSelf->rob__DOT__reg_rob
                              [(0x3fU & ((IData)(1U) 
                                         + (IData)(vlSelf->rob__DOT__rob_tail)))][2U]);
    vlSelf->retire0_fl_Told = (0x3fU & (vlSelf->rob__DOT__reg_rob
                                        [(0x3fU & (IData)(vlSelf->rob__DOT__rob_tail))][2U] 
                                        >> 7U));
    vlSelf->retire1_fl_Told = (0x3fU & (vlSelf->rob__DOT__reg_rob
                                        [(0x3fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->rob__DOT__rob_tail)))][2U] 
                                        >> 7U));
    vlSelf->retire0_T = (0x3fU & (vlSelf->rob__DOT__reg_rob
                                  [(0x3fU & (IData)(vlSelf->rob__DOT__rob_tail))][2U] 
                                  >> 0xdU));
    vlSelf->retire1_T = (0x3fU & (vlSelf->rob__DOT__reg_rob
                                  [(0x3fU & ((IData)(1U) 
                                             + (IData)(vlSelf->rob__DOT__rob_tail)))][2U] 
                                  >> 0xdU));
    vlSelf->walk0_valid = (IData)(((vlSelf->rob__DOT__reg_rob
                                    [(0x3fU & (IData)(vlSelf->rob__DOT__walk_ptr))][2U] 
                                    >> 0x13U) & (vlSelf->rob__DOT__reg_rob
                                                 [(0x3fU 
                                                   & (IData)(vlSelf->rob__DOT__walk_ptr))][2U] 
                                                 >> 5U)));
    vlSelf->walk1_valid = (IData)(((vlSelf->rob__DOT__reg_rob
                                    [(0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->rob__DOT__walk_ptr)))][2U] 
                                    >> 0x13U) & (vlSelf->rob__DOT__reg_rob
                                                 [(0x3fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->rob__DOT__walk_ptr)))][2U] 
                                                 >> 5U)));
    vlSelf->walk0_complete = (1U & (vlSelf->rob__DOT__reg_rob
                                    [(0x3fU & (IData)(vlSelf->rob__DOT__walk_ptr))][2U] 
                                    >> 6U));
    vlSelf->walk1_complete = (1U & (vlSelf->rob__DOT__reg_rob
                                    [(0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->rob__DOT__walk_ptr)))][2U] 
                                    >> 6U));
    vlSelf->walk0_arf_id = (0x1fU & vlSelf->rob__DOT__reg_rob
                            [(0x3fU & (IData)(vlSelf->rob__DOT__walk_ptr))][2U]);
    vlSelf->walk1_arf_id = (0x1fU & vlSelf->rob__DOT__reg_rob
                            [(0x3fU & ((IData)(1U) 
                                       + (IData)(vlSelf->rob__DOT__walk_ptr)))][2U]);
    vlSelf->walk0_T = (0x3fU & (vlSelf->rob__DOT__reg_rob
                                [(0x3fU & (IData)(vlSelf->rob__DOT__walk_ptr))][2U] 
                                >> 0xdU));
    vlSelf->walk1_T = (0x3fU & (vlSelf->rob__DOT__reg_rob
                                [(0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->rob__DOT__walk_ptr)))][2U] 
                                >> 0xdU));
    vlSelf->rob__DOT__next_state = ((0U == (IData)(vlSelf->rob__DOT__current_state))
                                     ? ((IData)(vlSelf->flush_valid)
                                         ? 1U : 0U)
                                     : ((1U == (IData)(vlSelf->rob__DOT__current_state))
                                         ? ((IData)(vlSelf->flush_valid)
                                             ? 1U : 2U)
                                         : ((2U == (IData)(vlSelf->rob__DOT__current_state))
                                             ? ((IData)(vlSelf->flush_valid)
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  & ((~ 
                                                      (vlSelf->rob__DOT__reg_rob
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->rob__DOT__walk_ptr)))][2U] 
                                                       >> 0x13U)) 
                                                     | (~ 
                                                        (vlSelf->rob__DOT__reg_rob
                                                         [
                                                         (0x3fU 
                                                          & ((IData)(2U) 
                                                             + (IData)(vlSelf->rob__DOT__walk_ptr)))][2U] 
                                                         >> 0x13U))))
                                                  ? 0U
                                                  : 2U))
                                             : 0U)));
    vlSelf->rob_state = vlSelf->rob__DOT__current_state;
    vlSelf->rob__DOT__rollback_valid[0U] = (1U & (vlSelf->rob__DOT__reg_rob
                                                  [0U][2U] 
                                                  >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[1U] = (1U & (vlSelf->rob__DOT__reg_rob
                                                  [1U][2U] 
                                                  >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[2U] = (1U & (vlSelf->rob__DOT__reg_rob
                                                  [2U][2U] 
                                                  >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[3U] = (1U & (vlSelf->rob__DOT__reg_rob
                                                  [3U][2U] 
                                                  >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[4U] = (1U & (vlSelf->rob__DOT__reg_rob
                                                  [4U][2U] 
                                                  >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[5U] = (1U & (vlSelf->rob__DOT__reg_rob
                                                  [5U][2U] 
                                                  >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[6U] = (1U & (vlSelf->rob__DOT__reg_rob
                                                  [6U][2U] 
                                                  >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[7U] = (1U & (vlSelf->rob__DOT__reg_rob
                                                  [7U][2U] 
                                                  >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[8U] = (1U & (vlSelf->rob__DOT__reg_rob
                                                  [8U][2U] 
                                                  >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[9U] = (1U & (vlSelf->rob__DOT__reg_rob
                                                  [9U][2U] 
                                                  >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0xaU] = (1U & 
                                              (vlSelf->rob__DOT__reg_rob
                                               [0xaU][2U] 
                                               >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0xbU] = (1U & 
                                              (vlSelf->rob__DOT__reg_rob
                                               [0xbU][2U] 
                                               >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0xcU] = (1U & 
                                              (vlSelf->rob__DOT__reg_rob
                                               [0xcU][2U] 
                                               >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0xdU] = (1U & 
                                              (vlSelf->rob__DOT__reg_rob
                                               [0xdU][2U] 
                                               >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0xeU] = (1U & 
                                              (vlSelf->rob__DOT__reg_rob
                                               [0xeU][2U] 
                                               >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0xfU] = (1U & 
                                              (vlSelf->rob__DOT__reg_rob
                                               [0xfU][2U] 
                                               >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x10U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x10U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x11U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x11U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x12U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x12U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x13U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x13U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x14U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x14U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x15U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x15U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x16U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x16U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x17U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x17U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x18U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x18U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x19U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x19U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x1aU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x1aU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x1bU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x1bU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x1cU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x1cU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x1dU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x1dU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x1eU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x1eU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x1fU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x1fU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x20U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x20U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x21U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x21U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x22U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x22U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x23U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x23U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x24U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x24U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x25U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x25U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x26U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x26U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x27U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x27U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x28U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x28U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x29U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x29U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x2aU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x2aU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x2bU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x2bU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x2cU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x2cU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x2dU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x2dU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x2eU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x2eU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x2fU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x2fU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x30U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x30U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x31U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x31U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x32U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x32U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x33U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x33U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x34U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x34U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x35U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x35U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x36U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x36U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x37U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x37U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x38U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x38U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x39U] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x39U][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x3aU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x3aU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x3bU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x3bU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x3cU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x3cU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x3dU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x3dU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x3eU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x3eU][2U] 
                                                >> 0x13U));
    vlSelf->rob__DOT__rollback_valid[0x3fU] = (1U & 
                                               (vlSelf->rob__DOT__reg_rob
                                                [0x3fU][2U] 
                                                >> 0x13U));
    if (((0x3fU & (IData)(vlSelf->rob__DOT__rob_head)) 
         <= (0x3fU & (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
        if ((0U < (IData)(vlSelf->rob__DOT__rob_head))) {
            vlSelf->rob__DOT__rollback_valid[0U] = 0U;
        }
    }
    if (((0x3fU & (IData)(vlSelf->rob__DOT__rob_head)) 
         > (0x3fU & (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
        if (((1U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (1U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[1U] = 0U;
        }
        if (((2U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (2U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[2U] = 0U;
        }
        if (((3U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (3U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[3U] = 0U;
        }
        if (((4U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (4U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[4U] = 0U;
        }
        if (((5U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (5U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[5U] = 0U;
        }
        if (((6U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (6U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[6U] = 0U;
        }
        if (((7U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (7U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[7U] = 0U;
        }
        if (((8U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (8U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[8U] = 0U;
        }
        if (((9U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (9U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[9U] = 0U;
        }
        if (((0xaU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0xaU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0xaU] = 0U;
        }
        if (((0xbU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0xbU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0xbU] = 0U;
        }
        if (((0xcU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0xcU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0xcU] = 0U;
        }
        if (((0xdU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0xdU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0xdU] = 0U;
        }
        if (((0xeU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0xeU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0xeU] = 0U;
        }
        if (((0xfU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0xfU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0xfU] = 0U;
        }
        if (((0x10U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x10U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x10U] = 0U;
        }
        if (((0x11U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x11U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x11U] = 0U;
        }
        if (((0x12U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x12U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x12U] = 0U;
        }
        if (((0x13U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x13U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x13U] = 0U;
        }
        if (((0x14U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x14U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x14U] = 0U;
        }
        if (((0x15U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x15U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x15U] = 0U;
        }
        if (((0x16U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x16U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x16U] = 0U;
        }
        if (((0x17U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x17U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x17U] = 0U;
        }
        if (((0x18U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x18U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x18U] = 0U;
        }
        if (((0x19U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x19U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x19U] = 0U;
        }
        if (((0x1aU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x1aU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x1aU] = 0U;
        }
        if (((0x1bU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x1bU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x1bU] = 0U;
        }
        if (((0x1cU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x1cU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x1cU] = 0U;
        }
        if (((0x1dU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x1dU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x1dU] = 0U;
        }
        if (((0x1eU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x1eU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x1eU] = 0U;
        }
        if (((0x1fU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x1fU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x1fU] = 0U;
        }
        if (((0x20U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x20U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x20U] = 0U;
        }
        if (((0x21U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x21U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x21U] = 0U;
        }
        if (((0x22U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x22U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x22U] = 0U;
        }
        if (((0x23U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x23U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x23U] = 0U;
        }
        if (((0x24U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x24U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x24U] = 0U;
        }
        if (((0x25U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x25U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x25U] = 0U;
        }
        if (((0x26U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x26U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x26U] = 0U;
        }
        if (((0x27U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x27U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x27U] = 0U;
        }
        if (((0x28U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x28U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x28U] = 0U;
        }
        if (((0x29U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x29U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x29U] = 0U;
        }
        if (((0x2aU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x2aU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x2aU] = 0U;
        }
        if (((0x2bU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x2bU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x2bU] = 0U;
        }
        if (((0x2cU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x2cU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x2cU] = 0U;
        }
        if (((0x2dU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x2dU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x2dU] = 0U;
        }
        if (((0x2eU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x2eU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x2eU] = 0U;
        }
        if (((0x2fU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x2fU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x2fU] = 0U;
        }
        if (((0x30U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x30U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x30U] = 0U;
        }
        if (((0x31U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x31U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x31U] = 0U;
        }
        if (((0x32U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x32U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x32U] = 0U;
        }
        if (((0x33U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x33U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x33U] = 0U;
        }
        if (((0x34U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x34U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x34U] = 0U;
        }
        if (((0x35U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x35U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x35U] = 0U;
        }
        if (((0x36U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x36U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x36U] = 0U;
        }
        if (((0x37U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x37U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x37U] = 0U;
        }
        if (((0x38U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x38U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x38U] = 0U;
        }
        if (((0x39U < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x39U > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x39U] = 0U;
        }
        if (((0x3aU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x3aU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x3aU] = 0U;
        }
        if (((0x3bU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x3bU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x3bU] = 0U;
        }
        if (((0x3cU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x3cU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x3cU] = 0U;
        }
        if (((0x3dU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x3dU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x3dU] = 0U;
        }
        if (((0x3eU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x3eU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x3eU] = 0U;
        }
        if (((0x3fU < (IData)(vlSelf->rob__DOT__rob_head)) 
             & (0x3fU > (IData)(vlSelf->rob__DOT__flush_robid_latch)))) {
            vlSelf->rob__DOT__rollback_valid[0x3fU] = 0U;
        }
    } else {
        if (((1U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (1U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[1U] = 0U;
        }
        if (((2U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (2U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[2U] = 0U;
        }
        if (((3U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (3U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[3U] = 0U;
        }
        if (((4U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (4U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[4U] = 0U;
        }
        if (((5U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (5U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[5U] = 0U;
        }
        if (((6U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (6U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[6U] = 0U;
        }
        if (((7U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (7U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[7U] = 0U;
        }
        if (((8U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (8U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[8U] = 0U;
        }
        if (((9U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (9U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[9U] = 0U;
        }
        if (((0xaU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0xaU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0xaU] = 0U;
        }
        if (((0xbU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0xbU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0xbU] = 0U;
        }
        if (((0xcU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0xcU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0xcU] = 0U;
        }
        if (((0xdU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0xdU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0xdU] = 0U;
        }
        if (((0xeU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0xeU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0xeU] = 0U;
        }
        if (((0xfU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0xfU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0xfU] = 0U;
        }
        if (((0x10U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x10U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x10U] = 0U;
        }
        if (((0x11U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x11U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x11U] = 0U;
        }
        if (((0x12U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x12U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x12U] = 0U;
        }
        if (((0x13U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x13U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x13U] = 0U;
        }
        if (((0x14U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x14U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x14U] = 0U;
        }
        if (((0x15U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x15U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x15U] = 0U;
        }
        if (((0x16U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x16U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x16U] = 0U;
        }
        if (((0x17U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x17U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x17U] = 0U;
        }
        if (((0x18U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x18U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x18U] = 0U;
        }
        if (((0x19U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x19U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x19U] = 0U;
        }
        if (((0x1aU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x1aU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x1aU] = 0U;
        }
        if (((0x1bU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x1bU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x1bU] = 0U;
        }
        if (((0x1cU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x1cU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x1cU] = 0U;
        }
        if (((0x1dU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x1dU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x1dU] = 0U;
        }
        if (((0x1eU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x1eU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x1eU] = 0U;
        }
        if (((0x1fU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x1fU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x1fU] = 0U;
        }
        if (((0x20U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x20U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x20U] = 0U;
        }
        if (((0x21U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x21U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x21U] = 0U;
        }
        if (((0x22U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x22U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x22U] = 0U;
        }
        if (((0x23U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x23U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x23U] = 0U;
        }
        if (((0x24U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x24U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x24U] = 0U;
        }
        if (((0x25U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x25U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x25U] = 0U;
        }
        if (((0x26U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x26U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x26U] = 0U;
        }
        if (((0x27U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x27U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x27U] = 0U;
        }
        if (((0x28U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x28U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x28U] = 0U;
        }
        if (((0x29U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x29U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x29U] = 0U;
        }
        if (((0x2aU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x2aU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x2aU] = 0U;
        }
        if (((0x2bU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x2bU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x2bU] = 0U;
        }
        if (((0x2cU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x2cU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x2cU] = 0U;
        }
        if (((0x2dU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x2dU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x2dU] = 0U;
        }
        if (((0x2eU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x2eU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x2eU] = 0U;
        }
        if (((0x2fU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x2fU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x2fU] = 0U;
        }
        if (((0x30U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x30U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x30U] = 0U;
        }
        if (((0x31U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x31U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x31U] = 0U;
        }
        if (((0x32U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x32U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x32U] = 0U;
        }
        if (((0x33U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x33U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x33U] = 0U;
        }
        if (((0x34U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x34U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x34U] = 0U;
        }
        if (((0x35U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x35U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x35U] = 0U;
        }
        if (((0x36U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x36U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x36U] = 0U;
        }
        if (((0x37U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x37U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x37U] = 0U;
        }
        if (((0x38U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x38U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x38U] = 0U;
        }
        if (((0x39U > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x39U < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x39U] = 0U;
        }
        if (((0x3aU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x3aU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x3aU] = 0U;
        }
        if (((0x3bU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x3bU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x3bU] = 0U;
        }
        if (((0x3cU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x3cU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x3cU] = 0U;
        }
        if (((0x3dU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x3dU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x3dU] = 0U;
        }
        if (((0x3eU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x3eU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x3eU] = 0U;
        }
        if (((0x3fU > (IData)(vlSelf->rob__DOT__flush_robid_latch)) 
             | (0x3fU < (IData)(vlSelf->rob__DOT__rob_head)))) {
            vlSelf->rob__DOT__rollback_valid[0x3fU] = 0U;
        }
    }
    vlSelf->can_alloc = (((((((IData)(vlSelf->rob__DOT__rob_head) 
                              ^ (IData)(vlSelf->rob__DOT__rob_tail)) 
                             >> 6U) & ((0x3fU & (IData)(vlSelf->rob__DOT__rob_head)) 
                                       == (0x3fU & (IData)(vlSelf->rob__DOT__rob_tail))))
                            ? 0U : (((((IData)(vlSelf->rob__DOT__rob_head) 
                                       ^ (IData)(vlSelf->rob__DOT__rob_tail)) 
                                      >> 6U) & (((IData)(1U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->rob__DOT__rob_head))) 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelf->rob__DOT__rob_tail))))
                                     ? 1U : 2U)) >= (IData)(vlSelf->rob__DOT__disp_num))
                          ? 1U : 0U);
    vlSelf->retire0_valid = ((((~ (IData)(vlSelf->flush_valid)) 
                               & (0U == (IData)(vlSelf->rob_state))) 
                              & (vlSelf->rob__DOT__reg_rob
                                 [(0x3fU & (IData)(vlSelf->rob__DOT__rob_tail))][2U] 
                                 >> 0x13U)) & (vlSelf->rob__DOT__reg_rob
                                               [(0x3fU 
                                                 & (IData)(vlSelf->rob__DOT__rob_tail))][2U] 
                                               >> 6U));
    vlSelf->retire1_valid = (((IData)(vlSelf->retire0_valid) 
                              & (vlSelf->rob__DOT__reg_rob
                                 [(0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->rob__DOT__rob_tail)))][2U] 
                                 >> 0x13U)) & (vlSelf->rob__DOT__reg_rob
                                               [(0x3fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->rob__DOT__rob_tail)))][2U] 
                                               >> 6U));
    if (vlSelf->retire0_valid) {
        vlSelf->rob__DOT__retire_num = 1U;
        if (vlSelf->retire1_valid) {
            vlSelf->rob__DOT__retire_num = 2U;
        }
    } else {
        vlSelf->rob__DOT__retire_num = 0U;
    }
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
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->can_alloc = VL_RAND_RESET_I(1);
    vlSelf->instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->instr1_valid = VL_RAND_RESET_I(1);
    vlSelf->instr0_is_wb = VL_RAND_RESET_I(1);
    vlSelf->instr1_is_wb = VL_RAND_RESET_I(1);
    vlSelf->instr0_pc = VL_RAND_RESET_I(32);
    vlSelf->instr1_pc = VL_RAND_RESET_I(32);
    vlSelf->instr0_instr = VL_RAND_RESET_I(32);
    vlSelf->instr1_instr = VL_RAND_RESET_I(32);
    vlSelf->instr0_T = VL_RAND_RESET_I(6);
    vlSelf->instr1_T = VL_RAND_RESET_I(6);
    vlSelf->instr0_T_old = VL_RAND_RESET_I(6);
    vlSelf->instr1_T_old = VL_RAND_RESET_I(6);
    vlSelf->instr0_arf_id = VL_RAND_RESET_I(5);
    vlSelf->instr1_arf_id = VL_RAND_RESET_I(5);
    vlSelf->instr0_robid = VL_RAND_RESET_I(7);
    vlSelf->instr1_robid = VL_RAND_RESET_I(7);
    vlSelf->int0alu_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->int0mul_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->int1alu_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->int1lsu_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->int0alu_wb_robid = VL_RAND_RESET_I(7);
    vlSelf->int0mul_wb_robid = VL_RAND_RESET_I(7);
    vlSelf->int1alu_wb_robid = VL_RAND_RESET_I(7);
    vlSelf->int1lsu_wb_robid = VL_RAND_RESET_I(7);
    vlSelf->retire0_valid = VL_RAND_RESET_I(1);
    vlSelf->retire1_valid = VL_RAND_RESET_I(1);
    vlSelf->retire0_is_wb = VL_RAND_RESET_I(1);
    vlSelf->retire1_is_wb = VL_RAND_RESET_I(1);
    vlSelf->retire0_arf_id = VL_RAND_RESET_I(5);
    vlSelf->retire1_arf_id = VL_RAND_RESET_I(5);
    vlSelf->retire0_fl_Told = VL_RAND_RESET_I(6);
    vlSelf->retire1_fl_Told = VL_RAND_RESET_I(6);
    vlSelf->retire0_T = VL_RAND_RESET_I(6);
    vlSelf->retire1_T = VL_RAND_RESET_I(6);
    vlSelf->retire0_robid = VL_RAND_RESET_I(6);
    vlSelf->retire1_robid = VL_RAND_RESET_I(6);
    vlSelf->flush_robid = VL_RAND_RESET_I(6);
    vlSelf->flush_valid = VL_RAND_RESET_I(1);
    vlSelf->rob_state = VL_RAND_RESET_I(2);
    vlSelf->walk0_valid = VL_RAND_RESET_I(1);
    vlSelf->walk1_valid = VL_RAND_RESET_I(1);
    vlSelf->walk0_complete = VL_RAND_RESET_I(1);
    vlSelf->walk1_complete = VL_RAND_RESET_I(1);
    vlSelf->walk0_arf_id = VL_RAND_RESET_I(5);
    vlSelf->walk1_arf_id = VL_RAND_RESET_I(5);
    vlSelf->walk0_T = VL_RAND_RESET_I(6);
    vlSelf->walk1_T = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->rob__DOT__reg_rob[__Vi0]);
    }
    vlSelf->rob__DOT__rob_head = VL_RAND_RESET_I(7);
    vlSelf->rob__DOT__rob_tail = VL_RAND_RESET_I(7);
    vlSelf->rob__DOT__walk_ptr = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->rob__DOT__rollback_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->rob__DOT__flush_robid_latch = VL_RAND_RESET_I(7);
    vlSelf->rob__DOT__disp_num = VL_RAND_RESET_I(2);
    vlSelf->rob__DOT__retire_num = VL_RAND_RESET_I(2);
    vlSelf->rob__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->rob__DOT__next_state = VL_RAND_RESET_I(2);
}
