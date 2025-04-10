// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcommon.h"
#include "Vcommon__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vcommon::Vcommon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcommon__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , writeback0_valid{vlSymsp->TOP.writeback0_valid}
    , writeback0_need_to_wb{vlSymsp->TOP.writeback0_need_to_wb}
    , writeback0_prd{vlSymsp->TOP.writeback0_prd}
    , writeback1_valid{vlSymsp->TOP.writeback1_valid}
    , writeback1_need_to_wb{vlSymsp->TOP.writeback1_need_to_wb}
    , writeback1_prd{vlSymsp->TOP.writeback1_prd}
    , writeback2_valid{vlSymsp->TOP.writeback2_valid}
    , writeback2_need_to_wb{vlSymsp->TOP.writeback2_need_to_wb}
    , writeback2_prd{vlSymsp->TOP.writeback2_prd}
    , writeback3_valid{vlSymsp->TOP.writeback3_valid}
    , writeback3_need_to_wb{vlSymsp->TOP.writeback3_need_to_wb}
    , writeback3_prd{vlSymsp->TOP.writeback3_prd}
    , writeback0_robid{vlSymsp->TOP.writeback0_robid}
    , writeback1_robid{vlSymsp->TOP.writeback1_robid}
    , writeback2_robid{vlSymsp->TOP.writeback2_robid}
    , writeback3_robid{vlSymsp->TOP.writeback3_robid}
    , writeback3_is_store{vlSymsp->TOP.writeback3_is_store}
    , mul_slot_busy{vlSymsp->TOP.mul_slot_busy}
    , flush_robid{vlSymsp->TOP.flush_robid}
    , flush_valid{vlSymsp->TOP.flush_valid}
    , writeback3_data{vlSymsp->TOP.writeback3_data}
    , writeback3_addr{vlSymsp->TOP.writeback3_addr}
    , pipeline{vlSymsp->TOP.pipeline}
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
            VL_FATAL_MT("/mnt/hgfs/riscv/riscv_supercalar/pipeline.sv", 6, "",
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
            VL_FATAL_MT("/mnt/hgfs/riscv/riscv_supercalar/pipeline.sv", 6, "",
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
