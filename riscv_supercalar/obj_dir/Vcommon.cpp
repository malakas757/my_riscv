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
    , flush_valid{vlSymsp->TOP.flush_valid}
    , IF_instr0_hit{vlSymsp->TOP.IF_instr0_hit}
    , IF_instr1_hit{vlSymsp->TOP.IF_instr1_hit}
    , IF_instr0_resp{vlSymsp->TOP.IF_instr0_resp}
    , instr0_predict_taken{vlSymsp->TOP.instr0_predict_taken}
    , instr1_predict_taken{vlSymsp->TOP.instr1_predict_taken}
    , EXE_is_BJ{vlSymsp->TOP.EXE_is_BJ}
    , EXE_update_GHSR{vlSymsp->TOP.EXE_update_GHSR}
    , EXE_branch_taken{vlSymsp->TOP.EXE_branch_taken}
    , current_instr0_GHSR{vlSymsp->TOP.current_instr0_GHSR}
    , current_instr1_GHSR{vlSymsp->TOP.current_instr1_GHSR}
    , EXE_GHSR_restore{vlSymsp->TOP.EXE_GHSR_restore}
    , IF_instr0_pc{vlSymsp->TOP.IF_instr0_pc}
    , IF_instr1_pc{vlSymsp->TOP.IF_instr1_pc}
    , EXE_branch_addr{vlSymsp->TOP.EXE_branch_addr}
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
#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf);
#endif  // VL_DEBUG
void Vcommon___024root___final(Vcommon___024root* vlSelf);

static void _eval_initial_loop(Vcommon__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcommon___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcommon___024root___eval_settle(&(vlSymsp->TOP));
        Vcommon___024root___eval(&(vlSymsp->TOP));
    } while (0);
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
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcommon___024root___eval(&(vlSymsp->TOP));
    } while (0);
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
