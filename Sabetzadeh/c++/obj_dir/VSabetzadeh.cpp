// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSabetzadeh__pch.h"

//============================================================
// Constructors

VSabetzadeh::VSabetzadeh(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSabetzadeh__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , final_sum{vlSymsp->TOP.final_sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSabetzadeh::VSabetzadeh(const char* _vcname__)
    : VSabetzadeh(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSabetzadeh::~VSabetzadeh() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSabetzadeh___024root___eval_debug_assertions(VSabetzadeh___024root* vlSelf);
#endif  // VL_DEBUG
void VSabetzadeh___024root___eval_static(VSabetzadeh___024root* vlSelf);
void VSabetzadeh___024root___eval_initial(VSabetzadeh___024root* vlSelf);
void VSabetzadeh___024root___eval_settle(VSabetzadeh___024root* vlSelf);
void VSabetzadeh___024root___eval(VSabetzadeh___024root* vlSelf);

void VSabetzadeh::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSabetzadeh::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSabetzadeh___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSabetzadeh___024root___eval_static(&(vlSymsp->TOP));
        VSabetzadeh___024root___eval_initial(&(vlSymsp->TOP));
        VSabetzadeh___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSabetzadeh___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSabetzadeh::eventsPending() { return false; }

uint64_t VSabetzadeh::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSabetzadeh::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSabetzadeh___024root___eval_final(VSabetzadeh___024root* vlSelf);

VL_ATTR_COLD void VSabetzadeh::final() {
    VSabetzadeh___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSabetzadeh::hierName() const { return vlSymsp->name(); }
const char* VSabetzadeh::modelName() const { return "VSabetzadeh"; }
unsigned VSabetzadeh::threads() const { return 1; }
void VSabetzadeh::prepareClone() const { contextp()->prepareClone(); }
void VSabetzadeh::atClone() const {
    contextp()->threadPoolpOnClone();
}
