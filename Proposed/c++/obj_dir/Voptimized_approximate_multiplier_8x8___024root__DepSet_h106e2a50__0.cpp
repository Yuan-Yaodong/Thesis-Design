// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Voptimized_approximate_multiplier_8x8.h for the primary calling header

#include "Voptimized_approximate_multiplier_8x8__pch.h"
#include "Voptimized_approximate_multiplier_8x8__Syms.h"
#include "Voptimized_approximate_multiplier_8x8___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Voptimized_approximate_multiplier_8x8___024root___dump_triggers__ico(Voptimized_approximate_multiplier_8x8___024root* vlSelf);
#endif  // VL_DEBUG

void Voptimized_approximate_multiplier_8x8___024root___eval_triggers__ico(Voptimized_approximate_multiplier_8x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Voptimized_approximate_multiplier_8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voptimized_approximate_multiplier_8x8___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Voptimized_approximate_multiplier_8x8___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Voptimized_approximate_multiplier_8x8___024root___dump_triggers__act(Voptimized_approximate_multiplier_8x8___024root* vlSelf);
#endif  // VL_DEBUG

void Voptimized_approximate_multiplier_8x8___024root___eval_triggers__act(Voptimized_approximate_multiplier_8x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Voptimized_approximate_multiplier_8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voptimized_approximate_multiplier_8x8___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Voptimized_approximate_multiplier_8x8___024root___dump_triggers__act(vlSelf);
    }
#endif
}
