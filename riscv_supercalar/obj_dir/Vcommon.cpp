// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcommon.h"
#include "Vcommon__Syms.h"

//============================================================
// Constructors

Vcommon::Vcommon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcommon__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , sq_left{vlSymsp->TOP.sq_left}
    , disp2sq_instr0_valid{vlSymsp->TOP.disp2sq_instr0_valid}
    , disp2sq_instr1_valid{vlSymsp->TOP.disp2sq_instr1_valid}
    , disp2sq_instr0_robid{vlSymsp->TOP.disp2sq_instr0_robid}
    , disp2sq_instr1_robid{vlSymsp->TOP.disp2sq_instr1_robid}
    , disp2sq_instr0_pc{vlSymsp->TOP.disp2sq_instr0_pc}
    , disp2sq_instr1_pc{vlSymsp->TOP.disp2sq_instr1_pc}
    , lsuint_wb_valid{vlSymsp->TOP.lsuint_wb_valid}
    , lsuint_wb_is_store{vlSymsp->TOP.lsuint_wb_is_store}
    , retire0_valid{vlSymsp->TOP.retire0_valid}
    , retire1_valid{vlSymsp->TOP.retire1_valid}
    , retire0_robid{vlSymsp->TOP.retire0_robid}
    , retire1_robid{vlSymsp->TOP.retire1_robid}
    , retire_sq2mem_valid{vlSymsp->TOP.retire_sq2mem_valid}
    , flush_valid{vlSymsp->TOP.flush_valid}
    , flush_robid{vlSymsp->TOP.flush_robid}
    , lsuint_wb_data{vlSymsp->TOP.lsuint_wb_data}
    , lsuint_wb_addr{vlSymsp->TOP.lsuint_wb_addr}
    , lsuint_wb_robid{vlSymsp->TOP.lsuint_wb_robid}
    , retire_sq2mem_data{vlSymsp->TOP.retire_sq2mem_data}
    , retire_sq2mem_addr{vlSymsp->TOP.retire_sq2mem_addr}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcommon::Vcommon(const char* _vcname__)
    : Vcommon(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcommon::~Vcommon() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcommon___024root___eval_initial(Vcommon___024root* vlSelf);
void Vcommon___024root___eval_settle(Vcommon___024root* vlSelf);
void Vcommon___024root___eval(Vcommon___024root* vlSelf);
QData Vcommon___024root___change_request(Vcommon___024root* vlSelf);
#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf);
#endif  // VL_DEBUG
void Vcommon___024root___final(Vcommon___024root* vlSelf);

static void _eval_initial_loop(Vcommon__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcommon___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcommon___024root___eval_settle(&(vlSymsp->TOP));
        Vcommon___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcommon___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/mnt/hgfs/riscv/riscv_supercalar/storequeue.sv", 5, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcommon___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcommon::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcommon::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcommon___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcommon___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcommon___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/mnt/hgfs/riscv/riscv_supercalar/storequeue.sv", 5, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcommon___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vcommon::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcommon::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcommon::final() {
    Vcommon___024root___final(&(vlSymsp->TOP));
}
