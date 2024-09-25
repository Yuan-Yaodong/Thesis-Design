// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VKumari.h for the primary calling header

#include "VKumari__pch.h"
#include "VKumari__Syms.h"
#include "VKumari___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VKumari___024root___dump_triggers__ico(VKumari___024root* vlSelf);
#endif  // VL_DEBUG

void VKumari___024root___eval_triggers__ico(VKumari___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumari__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumari___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VKumari___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VKumari___024root___dump_triggers__act(VKumari___024root* vlSelf);
#endif  // VL_DEBUG

void VKumari___024root___eval_triggers__act(VKumari___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumari__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumari___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VKumari___024root___dump_triggers__act(vlSelf);
    }
#endif
}
