// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_top_with_uart.h"

VL_INLINE_OPT void Vcommon_top_with_uart___sequent__TOP__top_with_uart__2(Vcommon_top_with_uart* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_top_with_uart___sequent__TOP__top_with_uart__2\n"); );
    // Init
    CData/*7:0*/ __Vdlyvval__inst_uart__DOT__byte_reg__v0;
    CData/*0:0*/ __Vdlyvset__inst_uart__DOT__byte_reg__v0;
    CData/*7:0*/ __Vdlyvval__inst_uart__DOT__byte_reg__v1;
    CData/*7:0*/ __Vdlyvval__inst_uart__DOT__byte_reg__v2;
    CData/*7:0*/ __Vdlyvval__inst_uart__DOT__byte_reg__v3;
    CData/*0:0*/ __Vdlyvset__inst_uart__DOT__byte_reg__v4;
    // Body
    __Vdlyvset__inst_uart__DOT__byte_reg__v0 = 0U;
    __Vdlyvset__inst_uart__DOT__byte_reg__v4 = 0U;
    if (vlSymsp->TOP.rstn) {
        vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg 
            = vlSelf->__PVT__inst_uart__DOT__data_bit_count_next;
        vlSelf->__PVT__inst_uart__DOT__byte_counter 
            = vlSelf->__PVT__inst_uart__DOT__byte_counter_next;
        vlSelf->__PVT__inst_uart__DOT__data_packet_reg 
            = vlSelf->__PVT__inst_uart__DOT__data_packet_next;
        vlSelf->__PVT__inst_uart__DOT__uart_counter_reg 
            = vlSelf->__PVT__inst_uart__DOT__uart_counter_next;
        vlSelf->__PVT__inst_uart__DOT__uart_state = vlSelf->__PVT__inst_uart__DOT__uart_state_next;
        if (vlSelf->__PVT__inst_uart__DOT__word_valid) {
            vlSelf->__PVT__write_address = (0x3ffU 
                                            & ((IData)(4U) 
                                               + (IData)(vlSelf->__PVT__write_address)));
        }
        if (vlSelf->__PVT__io_data_valid) {
            vlSelf->led = (0xffU & vlSelf->__PVT__io_data_packet);
        }
        __Vdlyvval__inst_uart__DOT__byte_reg__v0 = 
            vlSelf->__PVT__inst_uart__DOT__byte_reg_next
            [3U];
        __Vdlyvset__inst_uart__DOT__byte_reg__v0 = 1U;
        __Vdlyvval__inst_uart__DOT__byte_reg__v1 = 
            vlSelf->__PVT__inst_uart__DOT__byte_reg_next
            [2U];
        __Vdlyvval__inst_uart__DOT__byte_reg__v2 = 
            vlSelf->__PVT__inst_uart__DOT__byte_reg_next
            [1U];
        __Vdlyvval__inst_uart__DOT__byte_reg__v3 = 
            vlSelf->__PVT__inst_uart__DOT__byte_reg_next
            [0U];
    } else {
        vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg = 0U;
        vlSelf->__PVT__inst_uart__DOT__byte_counter = 0U;
        vlSelf->__PVT__inst_uart__DOT__data_packet_reg = 0U;
        vlSelf->__PVT__inst_uart__DOT__uart_counter_reg = 0U;
        vlSelf->__PVT__inst_uart__DOT__uart_state = 0U;
        vlSelf->__PVT__write_address = 0U;
        vlSelf->led = 0U;
        __Vdlyvset__inst_uart__DOT__byte_reg__v4 = 1U;
    }
    if (__Vdlyvset__inst_uart__DOT__byte_reg__v0) {
        vlSelf->__PVT__inst_uart__DOT__byte_reg[3U] 
            = __Vdlyvval__inst_uart__DOT__byte_reg__v0;
        vlSelf->__PVT__inst_uart__DOT__byte_reg[2U] 
            = __Vdlyvval__inst_uart__DOT__byte_reg__v1;
        vlSelf->__PVT__inst_uart__DOT__byte_reg[1U] 
            = __Vdlyvval__inst_uart__DOT__byte_reg__v2;
        vlSelf->__PVT__inst_uart__DOT__byte_reg[0U] 
            = __Vdlyvval__inst_uart__DOT__byte_reg__v3;
    }
    if (__Vdlyvset__inst_uart__DOT__byte_reg__v4) {
        vlSelf->__PVT__inst_uart__DOT__byte_reg[3U] = 0U;
        vlSelf->__PVT__inst_uart__DOT__byte_reg[2U] = 0U;
        vlSelf->__PVT__inst_uart__DOT__byte_reg[1U] = 0U;
        vlSelf->__PVT__inst_uart__DOT__byte_reg[0U] = 0U;
    }
    vlSelf->__PVT__io_data_packet = ((0xffffff00U & vlSelf->__PVT__io_data_packet) 
                                     | (IData)(vlSelf->__PVT__inst_uart__DOT__data_packet_reg));
    vlSelf->__PVT__inst_uart__DOT__uart_counter_next 
        = vlSelf->__PVT__inst_uart__DOT__uart_counter_reg;
    if ((0U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((1U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
            vlSelf->__PVT__inst_uart__DOT__uart_counter_next 
                = ((IData)(1U) + vlSelf->__PVT__inst_uart__DOT__uart_counter_reg);
            if ((0x2bU == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
                vlSelf->__PVT__inst_uart__DOT__uart_counter_next = 0U;
            }
        } else if ((2U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
            vlSelf->__PVT__inst_uart__DOT__uart_counter_next 
                = ((IData)(1U) + vlSelf->__PVT__inst_uart__DOT__uart_counter_reg);
            if ((0x56U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
                vlSelf->__PVT__inst_uart__DOT__uart_counter_next = 0U;
            }
        } else if ((3U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
            if ((4U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                vlSelf->__PVT__inst_uart__DOT__uart_counter_next 
                    = ((IData)(1U) + vlSelf->__PVT__inst_uart__DOT__uart_counter_reg);
                if ((0x56U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
                    vlSelf->__PVT__inst_uart__DOT__uart_counter_next = 0U;
                }
            }
        }
        vlSelf->__PVT__inst_uart__DOT__data_bit_count_next 
            = vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg;
        if ((1U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
            if ((2U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                if ((3U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                    vlSelf->__PVT__inst_uart__DOT__data_bit_count_next 
                        = ((IData)(1U) + vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg);
                } else if ((4U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                    if ((0x56U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
                        vlSelf->__PVT__inst_uart__DOT__data_bit_count_next = 0U;
                    }
                }
            }
        }
    } else {
        vlSelf->__PVT__inst_uart__DOT__data_bit_count_next 
            = vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg;
    }
    vlSelf->__PVT__inst_uart__DOT__word_valid = ((IData)(vlSymsp->TOP.rstn) 
                                                 & (IData)(vlSelf->__PVT__inst_uart__DOT__word_valid_next));
    vlSelf->__PVT__io_data_valid = ((IData)(vlSymsp->TOP.rstn) 
                                    & (IData)(vlSelf->__PVT__inst_uart__DOT__data_valid_next));
    vlSelf->__PVT__inst_uart__DOT__data_valid_next = 0U;
    if ((0U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((1U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
            if ((2U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                if ((3U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                    if ((4U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                        if ((0x56U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
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

VL_INLINE_OPT void Vcommon_top_with_uart___combo__TOP__top_with_uart__3(Vcommon_top_with_uart* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_top_with_uart___combo__TOP__top_with_uart__3\n"); );
    // Body
    vlSelf->__PVT__inst_uart__DOT__data_packet_next 
        = vlSelf->__PVT__inst_uart__DOT__data_packet_reg;
    if ((0U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((1U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
            if ((2U != vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                if ((3U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
                    vlSelf->__PVT__inst_uart__DOT__data_packet_next 
                        = (((IData)(vlSymsp->TOP.io_rx) 
                            << 7U) | (0x7fU & ((IData)(vlSelf->__PVT__inst_uart__DOT__data_packet_reg) 
                                               >> 1U)));
                }
            }
        }
    }
    vlSelf->__PVT__inst_uart__DOT__uart_state_next 
        = vlSelf->__PVT__inst_uart__DOT__uart_state;
    if ((0U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((1U & (~ (IData)(vlSymsp->TOP.io_rx)))) {
            vlSelf->__PVT__inst_uart__DOT__uart_state_next = 1U;
        }
    } else if ((1U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((0x2bU == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
            vlSelf->__PVT__inst_uart__DOT__uart_state_next = 2U;
        }
    } else if ((2U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((0x56U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
            vlSelf->__PVT__inst_uart__DOT__uart_state_next = 3U;
        }
    } else if ((3U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        vlSelf->__PVT__inst_uart__DOT__uart_state_next 
            = ((7U == vlSelf->__PVT__inst_uart__DOT__data_bit_count_reg)
                ? 4U : 2U);
    } else if ((4U == vlSelf->__PVT__inst_uart__DOT__uart_state)) {
        if ((0x56U == vlSelf->__PVT__inst_uart__DOT__uart_counter_reg)) {
            vlSelf->__PVT__inst_uart__DOT__uart_state_next = 0U;
        }
    }
}
