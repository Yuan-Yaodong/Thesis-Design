// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Voptimized_approximate_multiplier_8x8__pch.h"

//============================================================
// Constructors

Voptimized_approximate_multiplier_8x8::Voptimized_approximate_multiplier_8x8(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Voptimized_approximate_multiplier_8x8__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , final_sum{vlSymsp->TOP.final_sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Voptimized_approximate_multiplier_8x8::Voptimized_approximate_multiplier_8x8(const char* _vcname__)
    : Voptimized_approximate_multiplier_8x8(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Voptimized_approximate_multiplier_8x8::~Voptimized_approximate_multiplier_8x8() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Voptimized_approximate_multiplier_8x8___024root___eval_debug_assertions(Voptimized_approximate_multiplier_8x8___024root* vlSelf);
#endif  // VL_DEBUG
void Voptimized_approximate_multiplier_8x8___024root___eval_static(Voptimized_approximate_multiplier_8x8___024root* vlSelf);
void Voptimized_approximate_multiplier_8x8___024root___eval_initial(Voptimized_approximate_multiplier_8x8___024root* vlSelf);
void Voptimized_approximate_multiplier_8x8___024root___eval_settle(Voptimized_approximate_multiplier_8x8___024root* vlSelf);
void Voptimized_approximate_multiplier_8x8___024root___eval(Voptimized_approximate_multiplier_8x8___024root* vlSelf);

void Voptimized_approximate_multiplier_8x8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Voptimized_approximate_multiplier_8x8::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Voptimized_approximate_multiplier_8x8___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Voptimized_approximate_multiplier_8x8___024root___eval_static(&(vlSymsp->TOP));
        Voptimized_approximate_multiplier_8x8___024root___eval_initial(&(vlSymsp->TOP));
        Voptimized_approximate_multiplier_8x8___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Voptimized_approximate_multiplier_8x8___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Voptimized_approximate_multiplier_8x8::eventsPending() { return false; }

uint64_t Voptimized_approximate_multiplier_8x8::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Voptimized_approximate_multiplier_8x8::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Voptimized_approximate_multiplier_8x8___024root___eval_final(Voptimized_approximate_multiplier_8x8___024root* vlSelf);

VL_ATTR_COLD void Voptimized_approximate_multiplier_8x8::final() {
    Voptimized_approximate_multiplier_8x8___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Voptimized_approximate_multiplier_8x8::hierName() const { return vlSymsp->name(); }
const char* Voptimized_approximate_multiplier_8x8::modelName() const { return "Voptimized_approximate_multiplier_8x8"; }
unsigned Voptimized_approximate_multiplier_8x8::threads() const { return 1; }
void Voptimized_approximate_multiplier_8x8::prepareClone() const { contextp()->prepareClone(); }
void Voptimized_approximate_multiplier_8x8::atClone() const {
    contextp()->threadPoolpOnClone();
}
