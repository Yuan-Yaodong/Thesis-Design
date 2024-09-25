// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VKumar__pch.h"

//============================================================
// Constructors

VKumar::VKumar(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VKumar__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , final_sum{vlSymsp->TOP.final_sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VKumar::VKumar(const char* _vcname__)
    : VKumar(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VKumar::~VKumar() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VKumar___024root___eval_debug_assertions(VKumar___024root* vlSelf);
#endif  // VL_DEBUG
void VKumar___024root___eval_static(VKumar___024root* vlSelf);
void VKumar___024root___eval_initial(VKumar___024root* vlSelf);
void VKumar___024root___eval_settle(VKumar___024root* vlSelf);
void VKumar___024root___eval(VKumar___024root* vlSelf);

void VKumar::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VKumar::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VKumar___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VKumar___024root___eval_static(&(vlSymsp->TOP));
        VKumar___024root___eval_initial(&(vlSymsp->TOP));
        VKumar___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VKumar___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VKumar::eventsPending() { return false; }

uint64_t VKumar::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VKumar::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VKumar___024root___eval_final(VKumar___024root* vlSelf);

VL_ATTR_COLD void VKumar::final() {
    VKumar___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VKumar::hierName() const { return vlSymsp->name(); }
const char* VKumar::modelName() const { return "VKumar"; }
unsigned VKumar::threads() const { return 1; }
void VKumar::prepareClone() const { contextp()->prepareClone(); }
void VKumar::atClone() const {
    contextp()->threadPoolpOnClone();
}
