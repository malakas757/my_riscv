// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_pc_counter.h"

VL_INLINE_OPT void Vcommon_pc_counter___sequent__TOP__if_stage__inst_pc__1(Vcommon_pc_counter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_pc_counter___sequent__TOP__if_stage__inst_pc__1\n"); );
    // Body
    vlSelf->pc = ((IData)(vlSymsp->TOP.reset_n) ? ((IData)(vlSymsp->TOP.PC_flush)
                                                    ? 
                                                   ((vlSymsp->TOP.ex_branch_in[1U] 
                                                     << 0x15U) 
                                                    | (vlSymsp->TOP.ex_branch_in[0U] 
                                                       >> 0xbU))
                                                    : 
                                                   ((IData)(vlSymsp->TOP.PC_stall)
                                                     ? vlSelf->pc
                                                     : 
                                                    ((IData)(vlSymsp->TOP__if_stage.__PVT__PC_predict_taken)
                                                      ? vlSymsp->TOP__if_stage.__PVT__PC_predict_pc
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelf->pc))))
                   : 0U);
}
