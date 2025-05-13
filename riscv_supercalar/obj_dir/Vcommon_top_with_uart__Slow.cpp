// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_top_with_uart.h"

void Vcommon_top_with_uart___ctor_var_reset(Vcommon_top_with_uart* vlSelf);

Vcommon_top_with_uart::Vcommon_top_with_uart(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcommon_top_with_uart___ctor_var_reset(this);
}

void Vcommon_top_with_uart::__Vconfigure(Vcommon__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcommon_top_with_uart::~Vcommon_top_with_uart() {
}
