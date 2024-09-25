// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAFA_MUL4__pch.h"

//============================================================
// Constructors

VAFA_MUL4::VAFA_MUL4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAFA_MUL4__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , final_sum{vlSymsp->TOP.final_sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VAFA_MUL4::VAFA_MUL4(const char* _vcname__)
    : VAFA_MUL4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAFA_MUL4::~VAFA_MUL4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAFA_MUL4___024root___eval_debug_assertions(VAFA_MUL4___024root* vlSelf);
#endif  // VL_DEBUG
void VAFA_MUL4___024root___eval_static(VAFA_MUL4___024root* vlSelf);
void VAFA_MUL4___024root___eval_initial(VAFA_MUL4___024root* vlSelf);
void VAFA_MUL4___024root___eval_settle(VAFA_MUL4___024root* vlSelf);
void VAFA_MUL4___024root___eval(VAFA_MUL4___024root* vlSelf);

void VAFA_MUL4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAFA_MUL4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAFA_MUL4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAFA_MUL4___024root___eval_static(&(vlSymsp->TOP));
        VAFA_MUL4___024root___eval_initial(&(vlSymsp->TOP));
        VAFA_MUL4___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAFA_MUL4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VAFA_MUL4::eventsPending() { return false; }

uint64_t VAFA_MUL4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VAFA_MUL4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAFA_MUL4___024root___eval_final(VAFA_MUL4___024root* vlSelf);

VL_ATTR_COLD void VAFA_MUL4::final() {
    VAFA_MUL4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAFA_MUL4::hierName() const { return vlSymsp->name(); }
const char* VAFA_MUL4::modelName() const { return "VAFA_MUL4"; }
unsigned VAFA_MUL4::threads() const { return 1; }
void VAFA_MUL4::prepareClone() const { contextp()->prepareClone(); }
void VAFA_MUL4::atClone() const {
    contextp()->threadPoolpOnClone();
}
