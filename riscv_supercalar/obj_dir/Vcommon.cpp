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
    , IQ0_rs1_addr{vlSymsp->TOP.IQ0_rs1_addr}
    , IQ0_rs2_addr{vlSymsp->TOP.IQ0_rs2_addr}
    , IQ1_rs1_addr{vlSymsp->TOP.IQ1_rs1_addr}
    , IQ1_rs2_addr{vlSymsp->TOP.IQ1_rs2_addr}
    , MEM_rs1_addr{vlSymsp->TOP.MEM_rs1_addr}
    , MEM_rs2_addr{vlSymsp->TOP.MEM_rs2_addr}
    , writeback0_need_to_wb{vlSymsp->TOP.writeback0_need_to_wb}
    , writeback1_need_to_wb{vlSymsp->TOP.writeback1_need_to_wb}
    , writeback2_need_to_wb{vlSymsp->TOP.writeback2_need_to_wb}
    , writeback3_need_to_wb{vlSymsp->TOP.writeback3_need_to_wb}
    , writeback0_prd{vlSymsp->TOP.writeback0_prd}
    , writeback1_prd{vlSymsp->TOP.writeback1_prd}
    , writeback2_prd{vlSymsp->TOP.writeback2_prd}
    , writeback3_prd{vlSymsp->TOP.writeback3_prd}
    , IQ0_rs1_data{vlSymsp->TOP.IQ0_rs1_data}
    , IQ0_rs2_data{vlSymsp->TOP.IQ0_rs2_data}
    , IQ1_rs1_data{vlSymsp->TOP.IQ1_rs1_data}
    , IQ1_rs2_data{vlSymsp->TOP.IQ1_rs2_data}
    , MEM_rs1_data{vlSymsp->TOP.MEM_rs1_data}
    , MEM_rs2_data{vlSymsp->TOP.MEM_rs2_data}
    , writeback0_data{vlSymsp->TOP.writeback0_data}
    , writeback1_data{vlSymsp->TOP.writeback1_data}
    , writeback2_data{vlSymsp->TOP.writeback2_data}
    , writeback3_data{vlSymsp->TOP.writeback3_data}
    , prf_debug{vlSymsp->TOP.prf_debug}
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
