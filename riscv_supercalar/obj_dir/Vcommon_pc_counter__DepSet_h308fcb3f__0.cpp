// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_pc_counter.h"

VL_INLINE_OPT void Vcommon_pc_counter___sequent__TOP__top_with_uart__inst_cpu__inst_if_stage__inst_pc__1(Vcommon_pc_counter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcommon_pc_counter___sequent__TOP__top_with_uart__inst_cpu__inst_if_stage__inst_pc__1\n"); );
    // Body
    vlSelf->pc = ((IData)(vlSymsp->TOP.rstn_cpu) ? 
                  ((IData)(vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__flush_valid)
                    ? vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__inst_int1__DOT__branch_target_pc_latch
                    : ((IData)(vlSymsp->TOP__top_with_uart__inst_cpu.__PVT__PC_stall)
                        ? vlSelf->pc : ((IData)(vlSymsp->TOP__top_with_uart__inst_cpu__inst_if_stage.__PVT__PC_predict_taken)
                                         ? vlSymsp->TOP__top_with_uart__inst_cpu__inst_if_stage.__PVT__PC_predict_pc
                                         : ((IData)(8U) 
                                            + vlSelf->pc))))
                   : 0U);
}
