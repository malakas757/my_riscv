// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_top_with_uart.h"

VL_ATTR_COLD void Vcommon_top_with_uart___settle__TOP__top_with_uart__1(Vcommon_top_with_uart* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_top_with_uart___settle__TOP__top_with_uart__1\n"); );
    // Body
    vlSelf->__PVT__io_data_packet = ((0xffffff00U & vlSelf->__PVT__io_data_packet) 
                                     | (IData)(vlSelf->__PVT__inst_uart__DOT__data_packet_reg));
    vlSelf->__PVT__inst_uart__DOT__uart_counter_next 
        = vlSelf->__PVT__inst_uart__DOT__uart_counter_reg;
    if ((0U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((1U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
            vlSelf->__PVT__inst_uart__DOT__uart_counter_next 
                = ((IData)(1U) + vlSelf->__PVT__inst_uart__DOT__uart_counter_reg);
            if ((0x1b2U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
                vlSelf->__PVT__inst_uart__DOT__uart_counter_next = 0U;
            }
        } else if ((2U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
            vlSelf->__PVT__inst_uart__DOT__uart_counter_next 
                = ((IData)(1U) + vlSelf->__PVT__inst_uart__DOT__uart_counter_reg);
            if ((0x364U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
                vlSelf->__PVT__inst_uart__DOT__uart_counter_next = 0U;
            }
        } else if ((3U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
            if ((4U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                vlSelf->__PVT__inst_uart__DOT__uart_counter_next 
                    = ((IData)(1U) + vlSelf->__PVT__inst_uart__DOT__uart_counter_reg);
                if ((0x364U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
                    vlSelf->__PVT__inst_uart__DOT__uart_counter_next = 0U;
                }
            }
        }
        vlSelf->__PVT__inst_uart__DOT__data_packet_next 
            = vlSelf->__PVT__inst_uart__DOT__data_packet_reg;
        if ((1U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
            if ((2U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                if ((3U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                    vlSelf->__PVT__inst_uart__DOT__data_packet_next 
                        = (((IData)(vlSymsp->TOP.io_rx) 
                            << 7U) | (0x7fU & ((IData)(vlSelf->__PVT__inst_uart__DOT__data_packet_reg) 
                                               >> 1U)));
                    vlSelf->__PVT__inst_uart__DOT__data_bit_count_next 
                        = vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg;
                    vlSelf->__PVT__inst_uart__DOT__data_bit_count_next 
                        = ((IData)(1U) + vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg);
                } else {
                    vlSelf->__PVT__inst_uart__DOT__data_bit_count_next 
                        = vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg;
                    if ((4U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                        if ((0x364U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
                            vlSelf->__PVT__inst_uart__DOT__data_bit_count_next = 0U;
                        }
                    }
                }
            } else {
                vlSelf->__PVT__inst_uart__DOT__data_bit_count_next 
                    = vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg;
            }
        } else {
            vlSelf->__PVT__inst_uart__DOT__data_bit_count_next 
                = vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg;
        }
    } else {
        vlSelf->__PVT__inst_uart__DOT__data_packet_next 
            = vlSelf->__PVT__inst_uart__DOT__data_packet_reg;
        vlSelf->__PVT__inst_uart__DOT__data_bit_count_next 
            = vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg;
    }
    vlSelf->__PVT__inst_uart__DOT__uart_state_next 
        = vlSelf->__PVT__inst_uart__DOT__uart_state;
    if ((0U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((1U & (~ (IData)(vlSymsp->TOP.io_rx)))) {
            vlSelf->__PVT__inst_uart__DOT__uart_state_next = 1U;
        }
    } else if ((1U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((0x1b2U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
            vlSelf->__PVT__inst_uart__DOT__uart_state_next = 2U;
        }
    } else if ((2U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((0x364U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
            vlSelf->__PVT__inst_uart__DOT__uart_state_next = 3U;
        }
    } else if ((3U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        vlSelf->__PVT__inst_uart__DOT__uart_state_next 
            = ((7U == vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg)
                ? 4U : 2U);
    } else if ((4U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((0x364U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
            vlSelf->__PVT__inst_uart__DOT__uart_state_next = 0U;
        }
    }
    vlSelf->__PVT__inst_uart__DOT__data_valid_next = 0U;
    if ((0U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((1U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
            if ((2U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                if ((3U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                    if ((4U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                        if ((0x364U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
                            vlSelf->__PVT__inst_uart__DOT__data_valid_next = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__inst_uart__DOT__word_valid_next = 0U;
    if (vlSelf->__PVT__io_data_valid) {
        if ((3U == (IData)(vlSelf->__PVT__inst_uart__DOT__byte_counter))) {
            vlSelf->__PVT__inst_uart__DOT__word_valid_next = 1U;
        }
        vlSelf->__PVT__inst_uart__DOT__byte_counter_next 
            = vlSelf->__PVT__inst_uart__DOT__byte_counter;
        vlSelf->__PVT__inst_uart__DOT__byte_counter_next 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__inst_uart__DOT__byte_counter)));
    } else {
        vlSelf->__PVT__inst_uart__DOT__byte_counter_next 
            = vlSelf->__PVT__inst_uart__DOT__byte_counter;
    }
    vlSelf->__PVT__inst_uart__DOT__byte_reg_next[3U] 
        = vlSelf->__PVT__inst_uart__DOT__byte_reg[3U];
    vlSelf->__PVT__inst_uart__DOT__byte_reg_next[2U] 
        = vlSelf->__PVT__inst_uart__DOT__byte_reg[2U];
    vlSelf->__PVT__inst_uart__DOT__byte_reg_next[1U] 
        = vlSelf->__PVT__inst_uart__DOT__byte_reg[1U];
    vlSelf->__PVT__inst_uart__DOT__byte_reg_next[0U] 
        = vlSelf->__PVT__inst_uart__DOT__byte_reg[0U];
    if (vlSelf->__PVT__io_data_valid) {
        vlSelf->__PVT__inst_uart__DOT__byte_reg_next[vlSelf->__PVT__inst_uart__DOT__byte_counter] 
            = vlSelf->__PVT__inst_uart__DOT__data_packet_reg;
    }
}
