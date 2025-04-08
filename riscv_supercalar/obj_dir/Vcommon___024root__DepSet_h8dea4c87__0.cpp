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
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_valid__v0;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_valid__v1;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_valid__v2;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_valid__v3;
    CData/*1:0*/ __Vdlyvdim0__storequeue__DOT__sq_reg_valid__v4;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_valid__v4;
    CData/*1:0*/ __Vdlyvdim0__storequeue__DOT__sq_reg_valid__v5;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_valid__v5;
    CData/*1:0*/ __Vdlyvdim0__storequeue__DOT__sq_reg_valid__v6;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_valid__v6;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_valid__v7;
    CData/*1:0*/ __Vdlyvdim0__storequeue__DOT__sq_reg_robid__v0;
    CData/*6:0*/ __Vdlyvval__storequeue__DOT__sq_reg_robid__v0;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_robid__v0;
    CData/*1:0*/ __Vdlyvdim0__storequeue__DOT__sq_reg_robid__v1;
    CData/*6:0*/ __Vdlyvval__storequeue__DOT__sq_reg_robid__v1;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_robid__v1;
    CData/*1:0*/ __Vdlyvdim0__storequeue__DOT__sq_reg_robid__v2;
    CData/*6:0*/ __Vdlyvval__storequeue__DOT__sq_reg_robid__v2;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_robid__v2;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_robid__v3;
    CData/*1:0*/ __Vdly__storequeue__DOT__sq_tail;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_ready__v0;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_ready__v1;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_ready__v2;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_ready__v3;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_ready__v4;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_ready__v5;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_ready__v6;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_ready__v7;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_ready__v8;
    IData/*31:0*/ __Vdlyvval__storequeue__DOT__sq_reg_data__v0;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_data__v0;
    IData/*31:0*/ __Vdlyvval__storequeue__DOT__sq_reg_data__v1;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_data__v1;
    IData/*31:0*/ __Vdlyvval__storequeue__DOT__sq_reg_data__v2;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_data__v2;
    IData/*31:0*/ __Vdlyvval__storequeue__DOT__sq_reg_data__v3;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_data__v3;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_data__v4;
    IData/*31:0*/ __Vdlyvval__storequeue__DOT__sq_reg_addr__v0;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_addr__v0;
    IData/*31:0*/ __Vdlyvval__storequeue__DOT__sq_reg_addr__v1;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_addr__v1;
    IData/*31:0*/ __Vdlyvval__storequeue__DOT__sq_reg_addr__v2;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_addr__v2;
    IData/*31:0*/ __Vdlyvval__storequeue__DOT__sq_reg_addr__v3;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_addr__v3;
    CData/*0:0*/ __Vdlyvset__storequeue__DOT__sq_reg_addr__v4;
    // Body
    __Vdly__storequeue__DOT__sq_tail = vlSelf->storequeue__DOT__sq_tail;
    __Vdlyvset__storequeue__DOT__sq_reg_robid__v0 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_robid__v1 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_robid__v2 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_robid__v3 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_addr__v0 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_addr__v1 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_addr__v2 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_addr__v3 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_addr__v4 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_data__v0 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_data__v1 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_data__v2 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_data__v3 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_data__v4 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_ready__v0 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_ready__v1 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_ready__v2 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_ready__v3 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_ready__v4 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_ready__v5 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_ready__v6 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_ready__v7 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_ready__v8 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_valid__v0 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_valid__v1 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_valid__v2 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_valid__v3 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_valid__v4 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_valid__v5 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_valid__v6 = 0U;
    __Vdlyvset__storequeue__DOT__sq_reg_valid__v7 = 0U;
    if (vlSelf->reset_n) {
        if ((vlSelf->storequeue__DOT__sq_reg_ready[vlSelf->storequeue__DOT__sq_tail] 
             & vlSelf->storequeue__DOT__sq_reg_ready
             [vlSelf->storequeue__DOT__sq_tail])) {
            __Vdly__storequeue__DOT__sq_tail = (3U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->storequeue__DOT__sq_tail)));
        }
        if ((1U & (~ (IData)(vlSelf->flush_valid)))) {
            if (vlSelf->disp2sq_instr0_valid) {
                __Vdlyvval__storequeue__DOT__sq_reg_robid__v0 
                    = vlSelf->disp2sq_instr0_robid;
                __Vdlyvset__storequeue__DOT__sq_reg_robid__v0 = 1U;
                __Vdlyvdim0__storequeue__DOT__sq_reg_robid__v0 
                    = vlSelf->storequeue__DOT__sq_head;
                if (vlSelf->disp2sq_instr1_valid) {
                    __Vdlyvval__storequeue__DOT__sq_reg_robid__v1 
                        = vlSelf->disp2sq_instr1_robid;
                    __Vdlyvset__storequeue__DOT__sq_reg_robid__v1 = 1U;
                    __Vdlyvdim0__storequeue__DOT__sq_reg_robid__v1 
                        = (3U & ((IData)(1U) + (IData)(vlSelf->storequeue__DOT__sq_head)));
                }
            } else if (vlSelf->disp2sq_instr1_valid) {
                __Vdlyvval__storequeue__DOT__sq_reg_robid__v2 
                    = vlSelf->disp2sq_instr1_robid;
                __Vdlyvset__storequeue__DOT__sq_reg_robid__v2 = 1U;
                __Vdlyvdim0__storequeue__DOT__sq_reg_robid__v2 
                    = vlSelf->storequeue__DOT__sq_head;
            }
        }
        if ((((IData)(vlSelf->lsuint_wb_valid) & (IData)(vlSelf->lsuint_wb_is_store)) 
             & (vlSelf->lsuint_wb_robid == vlSelf->storequeue__DOT__sq_reg_robid
                [0U]))) {
            __Vdlyvval__storequeue__DOT__sq_reg_addr__v0 
                = vlSelf->lsuint_wb_addr;
            __Vdlyvset__storequeue__DOT__sq_reg_addr__v0 = 1U;
        }
        if ((((IData)(vlSelf->lsuint_wb_valid) & (IData)(vlSelf->lsuint_wb_is_store)) 
             & (vlSelf->lsuint_wb_robid == vlSelf->storequeue__DOT__sq_reg_robid
                [1U]))) {
            __Vdlyvval__storequeue__DOT__sq_reg_addr__v1 
                = vlSelf->lsuint_wb_addr;
            __Vdlyvset__storequeue__DOT__sq_reg_addr__v1 = 1U;
        }
        if ((((IData)(vlSelf->lsuint_wb_valid) & (IData)(vlSelf->lsuint_wb_is_store)) 
             & (vlSelf->lsuint_wb_robid == vlSelf->storequeue__DOT__sq_reg_robid
                [2U]))) {
            __Vdlyvval__storequeue__DOT__sq_reg_addr__v2 
                = vlSelf->lsuint_wb_addr;
            __Vdlyvset__storequeue__DOT__sq_reg_addr__v2 = 1U;
        }
        if ((((IData)(vlSelf->lsuint_wb_valid) & (IData)(vlSelf->lsuint_wb_is_store)) 
             & (vlSelf->lsuint_wb_robid == vlSelf->storequeue__DOT__sq_reg_robid
                [3U]))) {
            __Vdlyvval__storequeue__DOT__sq_reg_addr__v3 
                = vlSelf->lsuint_wb_addr;
            __Vdlyvset__storequeue__DOT__sq_reg_addr__v3 = 1U;
        }
        if ((((IData)(vlSelf->lsuint_wb_valid) & (IData)(vlSelf->lsuint_wb_is_store)) 
             & (vlSelf->lsuint_wb_robid == vlSelf->storequeue__DOT__sq_reg_robid
                [0U]))) {
            __Vdlyvval__storequeue__DOT__sq_reg_data__v0 
                = vlSelf->lsuint_wb_data;
            __Vdlyvset__storequeue__DOT__sq_reg_data__v0 = 1U;
        }
        if ((((IData)(vlSelf->lsuint_wb_valid) & (IData)(vlSelf->lsuint_wb_is_store)) 
             & (vlSelf->lsuint_wb_robid == vlSelf->storequeue__DOT__sq_reg_robid
                [1U]))) {
            __Vdlyvval__storequeue__DOT__sq_reg_data__v1 
                = vlSelf->lsuint_wb_data;
            __Vdlyvset__storequeue__DOT__sq_reg_data__v1 = 1U;
        }
        if ((((IData)(vlSelf->lsuint_wb_valid) & (IData)(vlSelf->lsuint_wb_is_store)) 
             & (vlSelf->lsuint_wb_robid == vlSelf->storequeue__DOT__sq_reg_robid
                [2U]))) {
            __Vdlyvval__storequeue__DOT__sq_reg_data__v2 
                = vlSelf->lsuint_wb_data;
            __Vdlyvset__storequeue__DOT__sq_reg_data__v2 = 1U;
        }
        if ((((IData)(vlSelf->lsuint_wb_valid) & (IData)(vlSelf->lsuint_wb_is_store)) 
             & (vlSelf->lsuint_wb_robid == vlSelf->storequeue__DOT__sq_reg_robid
                [3U]))) {
            __Vdlyvval__storequeue__DOT__sq_reg_data__v3 
                = vlSelf->lsuint_wb_data;
            __Vdlyvset__storequeue__DOT__sq_reg_data__v3 = 1U;
        }
        if (((IData)(vlSelf->retire_sq2mem_valid) & 
             (0U == (IData)(vlSelf->storequeue__DOT__sq_tail)))) {
            __Vdlyvset__storequeue__DOT__sq_reg_ready__v0 = 1U;
        } else if ((((IData)(vlSelf->retire0_valid) 
                     & (vlSelf->storequeue__DOT__sq_reg_robid
                        [0U] == (IData)(vlSelf->retire0_robid))) 
                    | ((IData)(vlSelf->retire1_valid) 
                       & (vlSelf->storequeue__DOT__sq_reg_robid
                          [0U] == (IData)(vlSelf->retire1_robid))))) {
            __Vdlyvset__storequeue__DOT__sq_reg_ready__v1 = 1U;
        }
        if (((IData)(vlSelf->retire_sq2mem_valid) & 
             (1U == (IData)(vlSelf->storequeue__DOT__sq_tail)))) {
            __Vdlyvset__storequeue__DOT__sq_reg_ready__v2 = 1U;
        } else if ((((IData)(vlSelf->retire0_valid) 
                     & (vlSelf->storequeue__DOT__sq_reg_robid
                        [1U] == (IData)(vlSelf->retire0_robid))) 
                    | ((IData)(vlSelf->retire1_valid) 
                       & (vlSelf->storequeue__DOT__sq_reg_robid
                          [1U] == (IData)(vlSelf->retire1_robid))))) {
            __Vdlyvset__storequeue__DOT__sq_reg_ready__v3 = 1U;
        }
        if (((IData)(vlSelf->retire_sq2mem_valid) & 
             (2U == (IData)(vlSelf->storequeue__DOT__sq_tail)))) {
            __Vdlyvset__storequeue__DOT__sq_reg_ready__v4 = 1U;
        } else if ((((IData)(vlSelf->retire0_valid) 
                     & (vlSelf->storequeue__DOT__sq_reg_robid
                        [2U] == (IData)(vlSelf->retire0_robid))) 
                    | ((IData)(vlSelf->retire1_valid) 
                       & (vlSelf->storequeue__DOT__sq_reg_robid
                          [2U] == (IData)(vlSelf->retire1_robid))))) {
            __Vdlyvset__storequeue__DOT__sq_reg_ready__v5 = 1U;
        }
        if (((IData)(vlSelf->retire_sq2mem_valid) & 
             (3U == (IData)(vlSelf->storequeue__DOT__sq_tail)))) {
            __Vdlyvset__storequeue__DOT__sq_reg_ready__v6 = 1U;
        } else if ((((IData)(vlSelf->retire0_valid) 
                     & (vlSelf->storequeue__DOT__sq_reg_robid
                        [3U] == (IData)(vlSelf->retire0_robid))) 
                    | ((IData)(vlSelf->retire1_valid) 
                       & (vlSelf->storequeue__DOT__sq_reg_robid
                          [3U] == (IData)(vlSelf->retire1_robid))))) {
            __Vdlyvset__storequeue__DOT__sq_reg_ready__v7 = 1U;
        }
        if (vlSelf->flush_valid) {
            if ((vlSelf->storequeue__DOT__sq_reg_valid
                 [0U] & ((((IData)(vlSelf->flush_robid) 
                           ^ vlSelf->storequeue__DOT__sq_reg_robid
                           [0U]) >> 6U) ^ ((0x3fU & 
                                            vlSelf->storequeue__DOT__sq_reg_robid
                                            [0U]) > 
                                           (0x3fU & (IData)(vlSelf->flush_robid)))))) {
                __Vdlyvset__storequeue__DOT__sq_reg_valid__v0 = 1U;
            }
            if ((vlSelf->storequeue__DOT__sq_reg_valid
                 [1U] & ((((IData)(vlSelf->flush_robid) 
                           ^ vlSelf->storequeue__DOT__sq_reg_robid
                           [1U]) >> 6U) ^ ((0x3fU & 
                                            vlSelf->storequeue__DOT__sq_reg_robid
                                            [1U]) > 
                                           (0x3fU & (IData)(vlSelf->flush_robid)))))) {
                __Vdlyvset__storequeue__DOT__sq_reg_valid__v1 = 1U;
            }
            if ((vlSelf->storequeue__DOT__sq_reg_valid
                 [2U] & ((((IData)(vlSelf->flush_robid) 
                           ^ vlSelf->storequeue__DOT__sq_reg_robid
                           [2U]) >> 6U) ^ ((0x3fU & 
                                            vlSelf->storequeue__DOT__sq_reg_robid
                                            [2U]) > 
                                           (0x3fU & (IData)(vlSelf->flush_robid)))))) {
                __Vdlyvset__storequeue__DOT__sq_reg_valid__v2 = 1U;
            }
            if ((vlSelf->storequeue__DOT__sq_reg_valid
                 [3U] & ((((IData)(vlSelf->flush_robid) 
                           ^ vlSelf->storequeue__DOT__sq_reg_robid
                           [3U]) >> 6U) ^ ((0x3fU & 
                                            vlSelf->storequeue__DOT__sq_reg_robid
                                            [3U]) > 
                                           (0x3fU & (IData)(vlSelf->flush_robid)))))) {
                __Vdlyvset__storequeue__DOT__sq_reg_valid__v3 = 1U;
            }
        } else if (vlSelf->disp2sq_instr0_valid) {
            __Vdlyvset__storequeue__DOT__sq_reg_valid__v4 = 1U;
            __Vdlyvdim0__storequeue__DOT__sq_reg_valid__v4 
                = vlSelf->storequeue__DOT__sq_head;
            if (vlSelf->disp2sq_instr1_valid) {
                __Vdlyvset__storequeue__DOT__sq_reg_valid__v5 = 1U;
                __Vdlyvdim0__storequeue__DOT__sq_reg_valid__v5 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->storequeue__DOT__sq_head)));
            }
        } else if (vlSelf->disp2sq_instr1_valid) {
            __Vdlyvset__storequeue__DOT__sq_reg_valid__v6 = 1U;
            __Vdlyvdim0__storequeue__DOT__sq_reg_valid__v6 
                = vlSelf->storequeue__DOT__sq_head;
        }
    } else {
        __Vdly__storequeue__DOT__sq_tail = 0U;
        __Vdlyvset__storequeue__DOT__sq_reg_robid__v3 = 1U;
        __Vdlyvset__storequeue__DOT__sq_reg_addr__v4 = 1U;
        __Vdlyvset__storequeue__DOT__sq_reg_data__v4 = 1U;
        __Vdlyvset__storequeue__DOT__sq_reg_ready__v8 = 1U;
        __Vdlyvset__storequeue__DOT__sq_reg_valid__v7 = 1U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_addr__v0) {
        vlSelf->storequeue__DOT__sq_reg_addr[0U] = __Vdlyvval__storequeue__DOT__sq_reg_addr__v0;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_addr__v1) {
        vlSelf->storequeue__DOT__sq_reg_addr[1U] = __Vdlyvval__storequeue__DOT__sq_reg_addr__v1;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_addr__v2) {
        vlSelf->storequeue__DOT__sq_reg_addr[2U] = __Vdlyvval__storequeue__DOT__sq_reg_addr__v2;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_addr__v3) {
        vlSelf->storequeue__DOT__sq_reg_addr[3U] = __Vdlyvval__storequeue__DOT__sq_reg_addr__v3;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_addr__v4) {
        vlSelf->storequeue__DOT__sq_reg_addr[0U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_addr[1U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_addr[2U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_addr[3U] = 0U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_data__v0) {
        vlSelf->storequeue__DOT__sq_reg_data[0U] = __Vdlyvval__storequeue__DOT__sq_reg_data__v0;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_data__v1) {
        vlSelf->storequeue__DOT__sq_reg_data[1U] = __Vdlyvval__storequeue__DOT__sq_reg_data__v1;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_data__v2) {
        vlSelf->storequeue__DOT__sq_reg_data[2U] = __Vdlyvval__storequeue__DOT__sq_reg_data__v2;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_data__v3) {
        vlSelf->storequeue__DOT__sq_reg_data[3U] = __Vdlyvval__storequeue__DOT__sq_reg_data__v3;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_data__v4) {
        vlSelf->storequeue__DOT__sq_reg_data[0U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_data[1U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_data[2U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_data[3U] = 0U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_ready__v0) {
        vlSelf->storequeue__DOT__sq_reg_ready[0U] = 0U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_ready__v1) {
        vlSelf->storequeue__DOT__sq_reg_ready[0U] = 1U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_ready__v2) {
        vlSelf->storequeue__DOT__sq_reg_ready[1U] = 0U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_ready__v3) {
        vlSelf->storequeue__DOT__sq_reg_ready[1U] = 1U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_ready__v4) {
        vlSelf->storequeue__DOT__sq_reg_ready[2U] = 0U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_ready__v5) {
        vlSelf->storequeue__DOT__sq_reg_ready[2U] = 1U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_ready__v6) {
        vlSelf->storequeue__DOT__sq_reg_ready[3U] = 0U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_ready__v7) {
        vlSelf->storequeue__DOT__sq_reg_ready[3U] = 1U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_ready__v8) {
        vlSelf->storequeue__DOT__sq_reg_ready[0U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_ready[1U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_ready[2U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_ready[3U] = 0U;
    }
    vlSelf->storequeue__DOT__sq_tail = __Vdly__storequeue__DOT__sq_tail;
    if (__Vdlyvset__storequeue__DOT__sq_reg_robid__v0) {
        vlSelf->storequeue__DOT__sq_reg_robid[__Vdlyvdim0__storequeue__DOT__sq_reg_robid__v0] 
            = __Vdlyvval__storequeue__DOT__sq_reg_robid__v0;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_robid__v1) {
        vlSelf->storequeue__DOT__sq_reg_robid[__Vdlyvdim0__storequeue__DOT__sq_reg_robid__v1] 
            = __Vdlyvval__storequeue__DOT__sq_reg_robid__v1;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_robid__v2) {
        vlSelf->storequeue__DOT__sq_reg_robid[__Vdlyvdim0__storequeue__DOT__sq_reg_robid__v2] 
            = __Vdlyvval__storequeue__DOT__sq_reg_robid__v2;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_robid__v3) {
        vlSelf->storequeue__DOT__sq_reg_robid[0U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_robid[1U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_robid[2U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_robid[3U] = 0U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_valid__v0) {
        vlSelf->storequeue__DOT__sq_reg_valid[0U] = 0U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_valid__v1) {
        vlSelf->storequeue__DOT__sq_reg_valid[1U] = 0U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_valid__v2) {
        vlSelf->storequeue__DOT__sq_reg_valid[2U] = 0U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_valid__v3) {
        vlSelf->storequeue__DOT__sq_reg_valid[3U] = 0U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_valid__v4) {
        vlSelf->storequeue__DOT__sq_reg_valid[__Vdlyvdim0__storequeue__DOT__sq_reg_valid__v4] = 1U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_valid__v5) {
        vlSelf->storequeue__DOT__sq_reg_valid[__Vdlyvdim0__storequeue__DOT__sq_reg_valid__v5] = 1U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_valid__v6) {
        vlSelf->storequeue__DOT__sq_reg_valid[__Vdlyvdim0__storequeue__DOT__sq_reg_valid__v6] = 1U;
    }
    if (__Vdlyvset__storequeue__DOT__sq_reg_valid__v7) {
        vlSelf->storequeue__DOT__sq_reg_valid[0U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_valid[1U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_valid[2U] = 0U;
        vlSelf->storequeue__DOT__sq_reg_valid[3U] = 0U;
    }
    vlSelf->retire_sq2mem_data = vlSelf->storequeue__DOT__sq_reg_data
        [vlSelf->storequeue__DOT__sq_tail];
    vlSelf->retire_sq2mem_addr = vlSelf->storequeue__DOT__sq_reg_addr
        [vlSelf->storequeue__DOT__sq_tail];
    vlSelf->storequeue__DOT__sq_head = vlSelf->storequeue__DOT__sq_tail;
    if ((vlSelf->storequeue__DOT__sq_reg_valid[0U] 
         & (~ vlSelf->storequeue__DOT__sq_reg_valid
            [1U]))) {
        vlSelf->storequeue__DOT__sq_head = 1U;
    }
    if ((vlSelf->storequeue__DOT__sq_reg_valid[1U] 
         & (~ vlSelf->storequeue__DOT__sq_reg_valid
            [2U]))) {
        vlSelf->storequeue__DOT__sq_head = 2U;
    }
    if ((vlSelf->storequeue__DOT__sq_reg_valid[2U] 
         & (~ vlSelf->storequeue__DOT__sq_reg_valid
            [3U]))) {
        vlSelf->storequeue__DOT__sq_head = 3U;
    }
    if ((vlSelf->storequeue__DOT__sq_reg_valid[3U] 
         & (~ vlSelf->storequeue__DOT__sq_reg_valid
            [0U]))) {
        vlSelf->storequeue__DOT__sq_head = 0U;
    }
    vlSelf->retire_sq2mem_valid = (vlSelf->storequeue__DOT__sq_reg_valid
                                   [vlSelf->storequeue__DOT__sq_tail] 
                                   & vlSelf->storequeue__DOT__sq_reg_ready
                                   [vlSelf->storequeue__DOT__sq_tail]);
}

VL_INLINE_OPT void Vcommon___024root___combo__TOP__3(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->storequeue__DOT__sq_empty_num = (7U & ((IData)(vlSelf->storequeue__DOT__sq_empty_num) 
                                                   + 
                                                   vlSelf->storequeue__DOT__sq_reg_valid
                                                   [0U]));
    vlSelf->storequeue__DOT__sq_empty_num = (7U & ((IData)(vlSelf->storequeue__DOT__sq_empty_num) 
                                                   + 
                                                   vlSelf->storequeue__DOT__sq_reg_valid
                                                   [1U]));
    vlSelf->storequeue__DOT__sq_empty_num = (7U & ((IData)(vlSelf->storequeue__DOT__sq_empty_num) 
                                                   + 
                                                   vlSelf->storequeue__DOT__sq_reg_valid
                                                   [2U]));
    vlSelf->storequeue__DOT__sq_empty_num = (7U & ((IData)(vlSelf->storequeue__DOT__sq_empty_num) 
                                                   + 
                                                   vlSelf->storequeue__DOT__sq_reg_valid
                                                   [3U]));
    vlSelf->sq_left = ((1U < (IData)(vlSelf->storequeue__DOT__sq_empty_num))
                        ? 2U : ((0U == (IData)(vlSelf->storequeue__DOT__sq_empty_num))
                                 ? 0U : 1U));
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

QData Vcommon___024root___change_request_1(Vcommon___024root* vlSelf);

VL_INLINE_OPT QData Vcommon___024root___change_request(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___change_request\n"); );
    // Body
    return (Vcommon___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcommon___024root___change_request_1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->storequeue__DOT__sq_empty_num ^ vlSelf->__Vchglast__TOP__storequeue__DOT__sq_empty_num));
    VL_DEBUG_IF( if(__req && ((vlSelf->storequeue__DOT__sq_empty_num ^ vlSelf->__Vchglast__TOP__storequeue__DOT__sq_empty_num))) VL_DBG_MSGF("        CHANGE: /mnt/hgfs/riscv/riscv_supercalar/storequeue.sv:67: storequeue.sq_empty_num\n"); );
    // Final
    vlSelf->__Vchglast__TOP__storequeue__DOT__sq_empty_num 
        = vlSelf->storequeue__DOT__sq_empty_num;
    return __req;
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
    if (VL_UNLIKELY((vlSelf->disp2sq_instr0_valid & 0xfeU))) {
        Verilated::overWidthError("disp2sq_instr0_valid");}
    if (VL_UNLIKELY((vlSelf->disp2sq_instr1_valid & 0xfeU))) {
        Verilated::overWidthError("disp2sq_instr1_valid");}
    if (VL_UNLIKELY((vlSelf->disp2sq_instr0_robid & 0x80U))) {
        Verilated::overWidthError("disp2sq_instr0_robid");}
    if (VL_UNLIKELY((vlSelf->disp2sq_instr1_robid & 0x80U))) {
        Verilated::overWidthError("disp2sq_instr1_robid");}
    if (VL_UNLIKELY((vlSelf->disp2sq_instr0_pc & 0x80U))) {
        Verilated::overWidthError("disp2sq_instr0_pc");}
    if (VL_UNLIKELY((vlSelf->disp2sq_instr1_pc & 0x80U))) {
        Verilated::overWidthError("disp2sq_instr1_pc");}
    if (VL_UNLIKELY((vlSelf->lsuint_wb_valid & 0xfeU))) {
        Verilated::overWidthError("lsuint_wb_valid");}
    if (VL_UNLIKELY((vlSelf->lsuint_wb_is_store & 0xfeU))) {
        Verilated::overWidthError("lsuint_wb_is_store");}
    if (VL_UNLIKELY((vlSelf->retire0_valid & 0xfeU))) {
        Verilated::overWidthError("retire0_valid");}
    if (VL_UNLIKELY((vlSelf->retire1_valid & 0xfeU))) {
        Verilated::overWidthError("retire1_valid");}
    if (VL_UNLIKELY((vlSelf->retire0_robid & 0x80U))) {
        Verilated::overWidthError("retire0_robid");}
    if (VL_UNLIKELY((vlSelf->retire1_robid & 0x80U))) {
        Verilated::overWidthError("retire1_robid");}
    if (VL_UNLIKELY((vlSelf->flush_valid & 0xfeU))) {
        Verilated::overWidthError("flush_valid");}
    if (VL_UNLIKELY((vlSelf->flush_robid & 0x80U))) {
        Verilated::overWidthError("flush_robid");}
}
#endif  // VL_DEBUG
