// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon_top_with_uart.h"

VL_ATTR_COLD void Vcommon_top_with_uart___ctor_var_reset(Vcommon_top_with_uart* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_top_with_uart___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->io_rx = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_data_packet = VL_RAND_RESET_I(32);
    vlSelf->__PVT__write_address = VL_RAND_RESET_I(10);
    vlSelf->__PVT__inst_uart__DOT__uart_state = 0;
    vlSelf->__PVT__inst_uart__DOT__uart_state_next = 0;
    vlSelf->__PVT__inst_uart__DOT__uart_counter_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_uart__DOT__uart_counter_next = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_uart__DOT__data_bit_count_next = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_uart__DOT__data_packet_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inst_uart__DOT__data_packet_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inst_uart__DOT__data_valid_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_uart__DOT__word_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_uart__DOT__word_valid_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_uart__DOT__byte_counter = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_uart__DOT__byte_counter_next = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_uart__DOT__byte_reg[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_uart__DOT__byte_reg_next[__Vi0] = VL_RAND_RESET_I(8);
    }
}
