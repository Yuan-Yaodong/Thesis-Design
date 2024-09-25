// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAFA_MUL4.h for the primary calling header

#include "VAFA_MUL4__pch.h"
#include "VAFA_MUL4__Syms.h"
#include "VAFA_MUL4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VAFA_MUL4___024root___dump_triggers__ico(VAFA_MUL4___024root* vlSelf);
#endif  // VL_DEBUG

void VAFA_MUL4___024root___eval_triggers__ico(VAFA_MUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAFA_MUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAFA_MUL4___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAFA_MUL4___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAFA_MUL4___024root___dump_triggers__act(VAFA_MUL4___024root* vlSelf);
#endif  // VL_DEBUG

void VAFA_MUL4___024root___eval_triggers__act(VAFA_MUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAFA_MUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAFA_MUL4___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAFA_MUL4___024root___dump_triggers__act(vlSelf);
    }
#endif
}
