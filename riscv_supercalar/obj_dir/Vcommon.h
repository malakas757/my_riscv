// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCOMMON_H_
#define VERILATED_VCOMMON_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vcommon__Syms;
class Vcommon___024root;
class Vcommon_pipeline;


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
    VL_IN8(&reset_n,0,0);
    VL_IN8(&writeback0_valid,0,0);
    VL_IN8(&writeback0_need_to_wb,0,0);
    VL_IN8(&writeback0_prd,5,0);
    VL_IN8(&writeback1_valid,0,0);
    VL_IN8(&writeback1_need_to_wb,0,0);
    VL_IN8(&writeback1_prd,5,0);
    VL_IN8(&writeback2_valid,0,0);
    VL_IN8(&writeback2_need_to_wb,0,0);
    VL_IN8(&writeback2_prd,5,0);
    VL_IN8(&writeback3_valid,0,0);
    VL_IN8(&writeback3_need_to_wb,0,0);
    VL_IN8(&writeback3_prd,5,0);
    VL_IN8(&writeback0_robid,6,0);
    VL_IN8(&writeback1_robid,6,0);
    VL_IN8(&writeback2_robid,6,0);
    VL_IN8(&writeback3_robid,6,0);
    VL_IN8(&writeback3_is_store,0,0);
    VL_IN8(&mul_slot_busy,0,0);
    VL_IN8(&flush_robid,6,0);
    VL_IN8(&flush_valid,0,0);
    VL_IN(&writeback3_data,31,0);
    VL_IN(&writeback3_addr,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vcommon_pipeline* const pipeline;

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
