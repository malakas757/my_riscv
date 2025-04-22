// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOMMON__SYMS_H_
#define VERILATED_VCOMMON__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcommon.h"

// INCLUDE MODULE CLASSES
#include "Vcommon___024root.h"
#include "Vcommon_pipeline.h"
#include "Vcommon___024unit.h"
#include "Vcommon_if_stage.h"
#include "Vcommon_pc_counter.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vcommon__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcommon* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcommon___024root              TOP;
    Vcommon_pipeline               TOP__pipeline;
    Vcommon_if_stage               TOP__pipeline__inst_if_stage;
    Vcommon_pc_counter             TOP__pipeline__inst_if_stage__inst_pc;

    // SCOPE NAMES
    VerilatedScope __Vscope_pipeline__inst_if_stage__inst_pc;

    // CONSTRUCTORS
    Vcommon__Syms(VerilatedContext* contextp, const char* namep, Vcommon* modelp);
    ~Vcommon__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
