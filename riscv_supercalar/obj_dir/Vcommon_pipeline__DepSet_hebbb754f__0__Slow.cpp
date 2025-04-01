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
    vlSelf->retire_arf_id_0 = VL_RAND_RESET_I(5);
    vlSelf->retire_arf_id_1 = VL_RAND_RESET_I(5);
    vlSelf->retire_prf_id_0 = VL_RAND_RESET_I(6);
    vlSelf->retire_prf_id_1 = VL_RAND_RESET_I(6);
    vlSelf->retire_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->retire_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->retire_wb_0 = VL_RAND_RESET_I(1);
    vlSelf->retire_wb_1 = VL_RAND_RESET_I(1);
    vlSelf->rob_state = VL_RAND_RESET_I(2);
    vlSelf->fl_walk_0 = VL_RAND_RESET_I(1);
    vlSelf->fl_walk_1 = VL_RAND_RESET_I(1);
    vlSelf->rat_walk_0_valid = VL_RAND_RESET_I(1);
    vlSelf->rat_walk_1_valid = VL_RAND_RESET_I(1);
    vlSelf->rat_walk_0_rd_id = VL_RAND_RESET_I(5);
    vlSelf->rat_walk_1_rd_id = VL_RAND_RESET_I(5);
    vlSelf->rat_walk_0_rd_prf = VL_RAND_RESET_I(6);
    vlSelf->rat_walk_1_rd_prf = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(65, vlSelf->__PVT__imem_resp);
    vlSelf->__PVT__ex_branch_in = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->__PVT__inst_imem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
}
