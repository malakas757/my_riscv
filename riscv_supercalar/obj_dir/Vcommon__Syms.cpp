// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcommon__Syms.h"
#include "Vcommon.h"
#include "Vcommon___024root.h"
#include "Vcommon_pipeline.h"
#include "Vcommon___024unit.h"
#include "Vcommon_if_stage.h"
#include "Vcommon_pc_counter.h"

// FUNCTIONS
Vcommon__Syms::~Vcommon__Syms()
{
}

Vcommon__Syms::Vcommon__Syms(VerilatedContext* contextp, const char* namep,Vcommon* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
    , TOP__pipeline(Verilated::catName(namep, "pipeline"))
    , TOP__pipeline__inst_if_stage(Verilated::catName(namep, "pipeline.inst_if_stage"))
    , TOP__pipeline__inst_if_stage__inst_pc(Verilated::catName(namep, "pipeline.inst_if_stage.inst_pc"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.pipeline = &TOP__pipeline;
    TOP__pipeline.inst_if_stage = &TOP__pipeline__inst_if_stage;
    TOP__pipeline__inst_if_stage.inst_pc = &TOP__pipeline__inst_if_stage__inst_pc;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__pipeline.__Vconfigure(this, true);
    TOP__pipeline__inst_if_stage.__Vconfigure(this, true);
    TOP__pipeline__inst_if_stage__inst_pc.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_pipeline__inst_if_stage__inst_pc.configure(this, name(), "pipeline.inst_if_stage.inst_pc", "inst_pc", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_pipeline__inst_if_stage__inst_pc.varInsert(__Vfinal,"pc", &(TOP__pipeline__inst_if_stage__inst_pc.pc), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
    }
}
