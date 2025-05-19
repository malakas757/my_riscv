// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_ATTR_COLD void Vcommon___024root___settle__TOP__2(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vilp;
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
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->prf_debug[__Vilp] = vlSelf->phyreg64__DOT__prf_file
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
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
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->prf_debug[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->IQ0_rs1_addr = VL_RAND_RESET_I(6);
    vlSelf->IQ0_rs2_addr = VL_RAND_RESET_I(6);
    vlSelf->IQ1_rs1_addr = VL_RAND_RESET_I(6);
    vlSelf->IQ1_rs2_addr = VL_RAND_RESET_I(6);
    vlSelf->MEM_rs1_addr = VL_RAND_RESET_I(6);
    vlSelf->MEM_rs2_addr = VL_RAND_RESET_I(6);
    vlSelf->IQ0_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->IQ0_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->IQ1_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->IQ1_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->MEM_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->MEM_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->writeback0_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback1_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback2_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback3_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback0_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback1_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback2_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback3_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback0_data = VL_RAND_RESET_I(32);
    vlSelf->writeback1_data = VL_RAND_RESET_I(32);
    vlSelf->writeback2_data = VL_RAND_RESET_I(32);
    vlSelf->writeback3_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->phyreg64__DOT__prf_file[__Vi0] = VL_RAND_RESET_I(32);
    }
}
