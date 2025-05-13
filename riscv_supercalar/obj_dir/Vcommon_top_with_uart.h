// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcommon.h for the primary calling header

#ifndef VERILATED_VCOMMON_TOP_WITH_UART_H_
#define VERILATED_VCOMMON_TOP_WITH_UART_H_  // guard

#include "verilated.h"

class Vcommon__Syms;
class Vcommon_pipeline;

VL_MODULE(Vcommon_top_with_uart) {
  public:
    // CELLS
    Vcommon_pipeline* inst_cpu;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN8(io_rx,0,0);
    VL_OUT8(led,7,0);
    CData/*0:0*/ __PVT__io_data_valid;
    CData/*7:0*/ __PVT__inst_uart__DOT__data_packet_reg;
    CData/*7:0*/ __PVT__inst_uart__DOT__data_packet_next;
    CData/*0:0*/ __PVT__inst_uart__DOT__data_valid_next;
    CData/*0:0*/ __PVT__inst_uart__DOT__word_valid;
    CData/*0:0*/ __PVT__inst_uart__DOT__word_valid_next;
    CData/*1:0*/ __PVT__inst_uart__DOT__byte_counter;
    CData/*1:0*/ __PVT__inst_uart__DOT__byte_counter_next;
    SData/*9:0*/ __PVT__write_address;
    IData/*31:0*/ __PVT__io_data_packet;
    IData/*31:0*/ __PVT__inst_uart__DOT__uart_state;
    IData/*31:0*/ __PVT__inst_uart__DOT__uart_state_next;
    IData/*31:0*/ __PVT__inst_uart__DOT__uart_counter_reg;
    IData/*31:0*/ __PVT__inst_uart__DOT__uart_counter_next;
    IData/*31:0*/ __PVT__inst_uart__DOT__data_bit_count_reg;
    IData/*31:0*/ __PVT__inst_uart__DOT__data_bit_count_next;
    VlUnpacked<CData/*7:0*/, 4> __PVT__inst_uart__DOT__byte_reg;
    VlUnpacked<CData/*7:0*/, 4> __PVT__inst_uart__DOT__byte_reg_next;

    // INTERNAL VARIABLES
    Vcommon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vcommon_top_with_uart(const char* name);
    ~Vcommon_top_with_uart();
    VL_UNCOPYABLE(Vcommon_top_with_uart);

    // INTERNAL METHODS
    void __Vconfigure(Vcommon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
