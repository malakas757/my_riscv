// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__phyreg64__DOT__prf_file__v0;
    CData/*5:0*/ __Vdlyvdim0__phyreg64__DOT__prf_file__v64;
    IData/*31:0*/ __Vdlyvval__phyreg64__DOT__prf_file__v64;
    CData/*0:0*/ __Vdlyvset__phyreg64__DOT__prf_file__v64;
    CData/*5:0*/ __Vdlyvdim0__phyreg64__DOT__prf_file__v65;
    IData/*31:0*/ __Vdlyvval__phyreg64__DOT__prf_file__v65;
    CData/*0:0*/ __Vdlyvset__phyreg64__DOT__prf_file__v65;
    CData/*5:0*/ __Vdlyvdim0__phyreg64__DOT__prf_file__v66;
    IData/*31:0*/ __Vdlyvval__phyreg64__DOT__prf_file__v66;
    CData/*0:0*/ __Vdlyvset__phyreg64__DOT__prf_file__v66;
    CData/*5:0*/ __Vdlyvdim0__phyreg64__DOT__prf_file__v67;
    IData/*31:0*/ __Vdlyvval__phyreg64__DOT__prf_file__v67;
    CData/*0:0*/ __Vdlyvset__phyreg64__DOT__prf_file__v67;
    IData/*31:0*/ __Vilp;
    // Body
    __Vdlyvset__phyreg64__DOT__prf_file__v0 = 0U;
    __Vdlyvset__phyreg64__DOT__prf_file__v64 = 0U;
    __Vdlyvset__phyreg64__DOT__prf_file__v65 = 0U;
    __Vdlyvset__phyreg64__DOT__prf_file__v66 = 0U;
    __Vdlyvset__phyreg64__DOT__prf_file__v67 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset_n)))) {
        __Vdlyvset__phyreg64__DOT__prf_file__v0 = 1U;
    }
    if (((IData)(vlSelf->writeback0_need_to_wb) & (0U 
                                                   != (IData)(vlSelf->writeback0_prd)))) {
        __Vdlyvval__phyreg64__DOT__prf_file__v64 = vlSelf->writeback0_data;
        __Vdlyvset__phyreg64__DOT__prf_file__v64 = 1U;
        __Vdlyvdim0__phyreg64__DOT__prf_file__v64 = vlSelf->writeback0_prd;
    }
    if (((IData)(vlSelf->writeback1_need_to_wb) & (0U 
                                                   != (IData)(vlSelf->writeback1_prd)))) {
        __Vdlyvval__phyreg64__DOT__prf_file__v65 = vlSelf->writeback1_data;
        __Vdlyvset__phyreg64__DOT__prf_file__v65 = 1U;
        __Vdlyvdim0__phyreg64__DOT__prf_file__v65 = vlSelf->writeback1_prd;
    }
    if (((IData)(vlSelf->writeback2_need_to_wb) & (0U 
                                                   != (IData)(vlSelf->writeback2_prd)))) {
        __Vdlyvval__phyreg64__DOT__prf_file__v66 = vlSelf->writeback2_data;
        __Vdlyvset__phyreg64__DOT__prf_file__v66 = 1U;
        __Vdlyvdim0__phyreg64__DOT__prf_file__v66 = vlSelf->writeback2_prd;
    }
    if (((IData)(vlSelf->writeback3_need_to_wb) & (0U 
                                                   != (IData)(vlSelf->writeback3_prd)))) {
        __Vdlyvval__phyreg64__DOT__prf_file__v67 = vlSelf->writeback3_data;
        __Vdlyvset__phyreg64__DOT__prf_file__v67 = 1U;
        __Vdlyvdim0__phyreg64__DOT__prf_file__v67 = vlSelf->writeback3_prd;
    }
    if (__Vdlyvset__phyreg64__DOT__prf_file__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->phyreg64__DOT__prf_file[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__phyreg64__DOT__prf_file__v64) {
        vlSelf->phyreg64__DOT__prf_file[__Vdlyvdim0__phyreg64__DOT__prf_file__v64] 
            = __Vdlyvval__phyreg64__DOT__prf_file__v64;
    }
    if (__Vdlyvset__phyreg64__DOT__prf_file__v65) {
        vlSelf->phyreg64__DOT__prf_file[__Vdlyvdim0__phyreg64__DOT__prf_file__v65] 
            = __Vdlyvval__phyreg64__DOT__prf_file__v65;
    }
    if (__Vdlyvset__phyreg64__DOT__prf_file__v66) {
        vlSelf->phyreg64__DOT__prf_file[__Vdlyvdim0__phyreg64__DOT__prf_file__v66] 
            = __Vdlyvval__phyreg64__DOT__prf_file__v66;
    }
    if (__Vdlyvset__phyreg64__DOT__prf_file__v67) {
        vlSelf->phyreg64__DOT__prf_file[__Vdlyvdim0__phyreg64__DOT__prf_file__v67] 
            = __Vdlyvval__phyreg64__DOT__prf_file__v67;
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->prf_debug[__Vilp] = vlSelf->phyreg64__DOT__prf_file
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vcommon___024root___combo__TOP__3(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->IQ0_rs1_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->IQ0_rs1_addr];
    vlSelf->IQ0_rs2_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->IQ0_rs2_addr];
    vlSelf->IQ1_rs1_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->IQ1_rs1_addr];
    vlSelf->IQ1_rs2_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->IQ1_rs2_addr];
    vlSelf->MEM_rs1_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->MEM_rs1_addr];
    vlSelf->MEM_rs2_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->MEM_rs2_addr];
    vlSelf->MEM_rs1_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->MEM_rs1_addr];
    vlSelf->MEM_rs2_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->MEM_rs2_addr];
    vlSelf->IQ0_rs2_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->IQ0_rs2_addr];
    if ((((IData)(vlSelf->writeback0_need_to_wb) & 
          (0U != (IData)(vlSelf->writeback0_prd))) 
         & ((IData)(vlSelf->writeback0_prd) == (IData)(vlSelf->IQ0_rs2_addr)))) {
        vlSelf->IQ0_rs2_data = vlSelf->writeback0_data;
    } else if ((((IData)(vlSelf->writeback1_need_to_wb) 
                 & (0U != (IData)(vlSelf->writeback1_prd))) 
                & ((IData)(vlSelf->writeback1_prd) 
                   == (IData)(vlSelf->IQ0_rs2_addr)))) {
        vlSelf->IQ0_rs2_data = vlSelf->writeback1_data;
    } else if ((((IData)(vlSelf->writeback2_need_to_wb) 
                 & (0U != (IData)(vlSelf->writeback2_prd))) 
                & ((IData)(vlSelf->writeback2_prd) 
                   == (IData)(vlSelf->IQ0_rs2_addr)))) {
        vlSelf->IQ0_rs2_data = vlSelf->writeback2_data;
    }
    vlSelf->IQ0_rs1_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->IQ0_rs1_addr];
    if ((((IData)(vlSelf->writeback0_need_to_wb) & 
          (0U != (IData)(vlSelf->writeback0_prd))) 
         & ((IData)(vlSelf->writeback0_prd) == (IData)(vlSelf->IQ0_rs1_addr)))) {
        vlSelf->IQ0_rs1_data = vlSelf->writeback0_data;
    } else if ((((IData)(vlSelf->writeback1_need_to_wb) 
                 & (0U != (IData)(vlSelf->writeback1_prd))) 
                & ((IData)(vlSelf->writeback1_prd) 
                   == (IData)(vlSelf->IQ0_rs1_addr)))) {
        vlSelf->IQ0_rs1_data = vlSelf->writeback1_data;
    } else if ((((IData)(vlSelf->writeback2_need_to_wb) 
                 & (0U != (IData)(vlSelf->writeback2_prd))) 
                & ((IData)(vlSelf->writeback2_prd) 
                   == (IData)(vlSelf->IQ0_rs1_addr)))) {
        vlSelf->IQ0_rs1_data = vlSelf->writeback2_data;
    }
    vlSelf->IQ1_rs2_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->IQ1_rs2_addr];
    if ((((IData)(vlSelf->writeback0_need_to_wb) & 
          (0U != (IData)(vlSelf->writeback0_prd))) 
         & ((IData)(vlSelf->writeback0_prd) == (IData)(vlSelf->IQ1_rs2_addr)))) {
        vlSelf->IQ1_rs2_data = vlSelf->writeback0_data;
    } else if ((((IData)(vlSelf->writeback1_need_to_wb) 
                 & (0U != (IData)(vlSelf->writeback1_prd))) 
                & ((IData)(vlSelf->writeback1_prd) 
                   == (IData)(vlSelf->IQ1_rs2_addr)))) {
        vlSelf->IQ1_rs2_data = vlSelf->writeback1_data;
    } else if ((((IData)(vlSelf->writeback2_need_to_wb) 
                 & (0U != (IData)(vlSelf->writeback2_prd))) 
                & ((IData)(vlSelf->writeback2_prd) 
                   == (IData)(vlSelf->IQ1_rs2_addr)))) {
        vlSelf->IQ1_rs2_data = vlSelf->writeback2_data;
    }
    vlSelf->IQ1_rs1_data = vlSelf->phyreg64__DOT__prf_file
        [vlSelf->IQ1_rs1_addr];
    if ((((IData)(vlSelf->writeback0_need_to_wb) & 
          (0U != (IData)(vlSelf->writeback0_prd))) 
         & ((IData)(vlSelf->writeback0_prd) == (IData)(vlSelf->IQ1_rs1_addr)))) {
        vlSelf->IQ1_rs1_data = vlSelf->writeback0_data;
    } else if ((((IData)(vlSelf->writeback1_need_to_wb) 
                 & (0U != (IData)(vlSelf->writeback1_prd))) 
                & ((IData)(vlSelf->writeback1_prd) 
                   == (IData)(vlSelf->IQ1_rs1_addr)))) {
        vlSelf->IQ1_rs1_data = vlSelf->writeback1_data;
    } else if ((((IData)(vlSelf->writeback2_need_to_wb) 
                 & (0U != (IData)(vlSelf->writeback2_prd))) 
                & ((IData)(vlSelf->writeback2_prd) 
                   == (IData)(vlSelf->IQ1_rs1_addr)))) {
        vlSelf->IQ1_rs1_data = vlSelf->writeback2_data;
    }
}

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommon___024root___sequent__TOP__1(vlSelf);
    }
    Vcommon___024root___combo__TOP__3(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->IQ0_rs1_addr & 0xc0U))) {
        Verilated::overWidthError("IQ0_rs1_addr");}
    if (VL_UNLIKELY((vlSelf->IQ0_rs2_addr & 0xc0U))) {
        Verilated::overWidthError("IQ0_rs2_addr");}
    if (VL_UNLIKELY((vlSelf->IQ1_rs1_addr & 0xc0U))) {
        Verilated::overWidthError("IQ1_rs1_addr");}
    if (VL_UNLIKELY((vlSelf->IQ1_rs2_addr & 0xc0U))) {
        Verilated::overWidthError("IQ1_rs2_addr");}
    if (VL_UNLIKELY((vlSelf->MEM_rs1_addr & 0xc0U))) {
        Verilated::overWidthError("MEM_rs1_addr");}
    if (VL_UNLIKELY((vlSelf->MEM_rs2_addr & 0xc0U))) {
        Verilated::overWidthError("MEM_rs2_addr");}
    if (VL_UNLIKELY((vlSelf->writeback0_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback0_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback1_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback1_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback2_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback2_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback3_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback3_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback0_prd & 0xc0U))) {
        Verilated::overWidthError("writeback0_prd");}
    if (VL_UNLIKELY((vlSelf->writeback1_prd & 0xc0U))) {
        Verilated::overWidthError("writeback1_prd");}
    if (VL_UNLIKELY((vlSelf->writeback2_prd & 0xc0U))) {
        Verilated::overWidthError("writeback2_prd");}
    if (VL_UNLIKELY((vlSelf->writeback3_prd & 0xc0U))) {
        Verilated::overWidthError("writeback3_prd");}
}
#endif  // VL_DEBUG
