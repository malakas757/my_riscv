// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcommon__Syms.h"
#include "Vcommon.h"
#include "Vcommon___024root.h"
#include "Vcommon_if_stage.h"
#include "Vcommon___024unit.h"
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
    , TOP__if_stage(Verilated::catName(namep, "if_stage"))
    , TOP__if_stage__inst_pc(Verilated::catName(namep, "if_stage.inst_pc"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.if_stage = &TOP__if_stage;
    TOP__if_stage.inst_pc = &TOP__if_stage__inst_pc;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__if_stage.__Vconfigure(this, true);
    TOP__if_stage__inst_pc.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_if_stage__inst_pc.configure(this, name(), "if_stage.inst_pc", "inst_pc", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_if_stage__inst_pc.varInsert(__Vfinal,"pc", &(TOP__if_stage__inst_pc.pc), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
    }
}
