// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_pc_counter.h"

VL_INLINE_OPT void Vcommon_pc_counter___sequent__TOP__pipeline__inst_if_stage__inst_pc__1(Vcommon_pc_counter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcommon_pc_counter___sequent__TOP__pipeline__inst_if_stage__inst_pc__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__0;
    // Body
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__0, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->pc = ((IData)(vlSymsp->TOP.reset_n) ? ((IData)(vlSymsp->TOP.flush_valid)
                                                    ? 
                                                   ((__Vtemp_h9f28c8e0__0[1U] 
                                                     << 0x15U) 
                                                    | (__Vtemp_h9f28c8e0__0[0U] 
                                                       >> 0xbU))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__pipeline.__PVT__PC_stall)
                                                     ? vlSelf->pc
                                                     : 
                                                    ((IData)(vlSymsp->TOP__pipeline__inst_if_stage.__PVT__PC_predict_taken)
                                                      ? vlSymsp->TOP__pipeline__inst_if_stage.__PVT__PC_predict_pc
                                                      : 
                                                     ((IData)(8U) 
                                                      + vlSelf->pc))))
                   : 0U);
}
