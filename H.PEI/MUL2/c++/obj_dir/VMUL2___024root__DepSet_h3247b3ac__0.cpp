// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMUL2.h for the primary calling header

#include "VMUL2__pch.h"
#include "VMUL2__Syms.h"
#include "VMUL2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMUL2___024root___dump_triggers__ico(VMUL2___024root* vlSelf);
#endif  // VL_DEBUG

void VMUL2___024root___eval_triggers__ico(VMUL2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMUL2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUL2___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMUL2___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMUL2___024root___dump_triggers__act(VMUL2___024root* vlSelf);
#endif  // VL_DEBUG

void VMUL2___024root___eval_triggers__act(VMUL2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMUL2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUL2___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMUL2___024root___dump_triggers__act(vlSelf);
    }
#endif
}
