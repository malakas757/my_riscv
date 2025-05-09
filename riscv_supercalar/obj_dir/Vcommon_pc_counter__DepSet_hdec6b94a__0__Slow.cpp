// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon_pc_counter.h"

VL_ATTR_COLD void Vcommon_pc_counter___ctor_var_reset(Vcommon_pc_counter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_pc_counter___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_branch_target_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_branch_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__predict_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__predict_taken = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
}
