// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMUL2__pch.h"

//============================================================
// Constructors

VMUL2::VMUL2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMUL2__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , final_sum{vlSymsp->TOP.final_sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMUL2::VMUL2(const char* _vcname__)
    : VMUL2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMUL2::~VMUL2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMUL2___024root___eval_debug_assertions(VMUL2___024root* vlSelf);
#endif  // VL_DEBUG
void VMUL2___024root___eval_static(VMUL2___024root* vlSelf);
void VMUL2___024root___eval_initial(VMUL2___024root* vlSelf);
void VMUL2___024root___eval_settle(VMUL2___024root* vlSelf);
void VMUL2___024root___eval(VMUL2___024root* vlSelf);

void VMUL2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMUL2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMUL2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMUL2___024root___eval_static(&(vlSymsp->TOP));
        VMUL2___024root___eval_initial(&(vlSymsp->TOP));
        VMUL2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMUL2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMUL2::eventsPending() { return false; }

uint64_t VMUL2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMUL2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMUL2___024root___eval_final(VMUL2___024root* vlSelf);

VL_ATTR_COLD void VMUL2::final() {
    VMUL2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMUL2::hierName() const { return vlSymsp->name(); }
const char* VMUL2::modelName() const { return "VMUL2"; }
unsigned VMUL2::threads() const { return 1; }
void VMUL2::prepareClone() const { contextp()->prepareClone(); }
void VMUL2::atClone() const {
    contextp()->threadPoolpOnClone();
}
