// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

void Vcommon_if_stage___ctor_var_reset(Vcommon_if_stage* vlSelf);

Vcommon_if_stage::Vcommon_if_stage(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcommon_if_stage___ctor_var_reset(this);
}

void Vcommon_if_stage::__Vconfigure(Vcommon__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcommon_if_stage::~Vcommon_if_stage() {
}
