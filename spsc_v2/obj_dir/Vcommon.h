// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCOMMON_H_
#define VERILATED_VCOMMON_H_  // guard

#include "verilated.h"

class Vcommon__Syms;
class Vcommon___024root;

// This class is the main interface to the Verilated model
class Vcommon VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcommon__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rstn,0,0);
    VL_IN8(&Icachestop,0,0);
    VL_IN8(&Icacheflush,0,0);
    VL_IN8(&pc_valid,0,0);
    VL_OUT8(&tos2_valid,0,0);
    VL_IN8(&hit_valid,0,0);
    VL_IN8(&hit_set,5,0);
    VL_IN8(&hit_way,1,0);
    VL_IN8(&refill_valid,0,0);
    VL_IN8(&refill_set,5,0);
    VL_IN(&pc,31,0);
    VL_OUT(&tos2_pc,31,0);
    VL_IN(&refill_tag,19,0);
    VL_INW(&refill_data,511,0,16);
    VL_OUTW((&tos2_data)[4],511,0,16);
    VL_OUT((&tos2_tag)[4],19,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcommon___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcommon(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcommon(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcommon();
  private:
    VL_UNCOPYABLE(Vcommon);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
