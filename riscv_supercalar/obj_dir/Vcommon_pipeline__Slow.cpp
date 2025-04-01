// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_pipeline.h"

void Vcommon_pipeline___ctor_var_reset(Vcommon_pipeline* vlSelf);

Vcommon_pipeline::Vcommon_pipeline(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcommon_pipeline___ctor_var_reset(this);
}

void Vcommon_pipeline::__Vconfigure(Vcommon__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcommon_pipeline::~Vcommon_pipeline() {
}
