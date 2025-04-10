// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon___024root.h"

QData Vcommon___024root___change_request_1(Vcommon___024root* vlSelf);

VL_INLINE_OPT QData Vcommon___024root___change_request(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___change_request\n"); );
    // Body
    return (Vcommon___024root___change_request_1(vlSelf));
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
    if (VL_UNLIKELY((vlSelf->writeback0_valid & 0xfeU))) {
        Verilated::overWidthError("writeback0_valid");}
    if (VL_UNLIKELY((vlSelf->writeback0_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback0_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback0_prd & 0xc0U))) {
        Verilated::overWidthError("writeback0_prd");}
    if (VL_UNLIKELY((vlSelf->writeback1_valid & 0xfeU))) {
        Verilated::overWidthError("writeback1_valid");}
    if (VL_UNLIKELY((vlSelf->writeback1_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback1_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback1_prd & 0xc0U))) {
        Verilated::overWidthError("writeback1_prd");}
    if (VL_UNLIKELY((vlSelf->writeback2_valid & 0xfeU))) {
        Verilated::overWidthError("writeback2_valid");}
    if (VL_UNLIKELY((vlSelf->writeback2_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback2_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback2_prd & 0xc0U))) {
        Verilated::overWidthError("writeback2_prd");}
    if (VL_UNLIKELY((vlSelf->writeback3_valid & 0xfeU))) {
        Verilated::overWidthError("writeback3_valid");}
    if (VL_UNLIKELY((vlSelf->writeback3_need_to_wb 
                     & 0xfeU))) {
        Verilated::overWidthError("writeback3_need_to_wb");}
    if (VL_UNLIKELY((vlSelf->writeback3_prd & 0xc0U))) {
        Verilated::overWidthError("writeback3_prd");}
    if (VL_UNLIKELY((vlSelf->writeback0_robid & 0x80U))) {
        Verilated::overWidthError("writeback0_robid");}
    if (VL_UNLIKELY((vlSelf->writeback1_robid & 0x80U))) {
        Verilated::overWidthError("writeback1_robid");}
    if (VL_UNLIKELY((vlSelf->writeback2_robid & 0x80U))) {
        Verilated::overWidthError("writeback2_robid");}
    if (VL_UNLIKELY((vlSelf->writeback3_robid & 0x80U))) {
        Verilated::overWidthError("writeback3_robid");}
    if (VL_UNLIKELY((vlSelf->writeback3_is_store & 0xfeU))) {
        Verilated::overWidthError("writeback3_is_store");}
    if (VL_UNLIKELY((vlSelf->mul_slot_busy & 0xfeU))) {
        Verilated::overWidthError("mul_slot_busy");}
    if (VL_UNLIKELY((vlSelf->flush_robid & 0x80U))) {
        Verilated::overWidthError("flush_robid");}
    if (VL_UNLIKELY((vlSelf->flush_valid & 0xfeU))) {
        Verilated::overWidthError("flush_valid");}
}
#endif  // VL_DEBUG
