// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_pc_counter.h"

void Vcommon_pc_counter___ctor_var_reset(Vcommon_pc_counter* vlSelf);

Vcommon_pc_counter::Vcommon_pc_counter(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcommon_pc_counter___ctor_var_reset(this);
}

void Vcommon_pc_counter::__Vconfigure(Vcommon__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcommon_pc_counter::~Vcommon_pc_counter() {
}
