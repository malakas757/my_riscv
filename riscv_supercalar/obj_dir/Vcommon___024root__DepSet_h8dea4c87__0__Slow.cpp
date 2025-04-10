// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon___024root.h"

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
    vlSelf->writeback3_is_store = VL_RAND_RESET_I(1);
    vlSelf->writeback3_data = VL_RAND_RESET_I(32);
    vlSelf->writeback3_addr = VL_RAND_RESET_I(32);
    vlSelf->mul_slot_busy = VL_RAND_RESET_I(1);
    vlSelf->flush_robid = VL_RAND_RESET_I(7);
    vlSelf->flush_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vchglast__TOP__pipeline__imem_resp);
}
