// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSabetzadeh.h for the primary calling header

#include "VSabetzadeh__pch.h"
#include "VSabetzadeh__Syms.h"
#include "VSabetzadeh___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSabetzadeh___024root___dump_triggers__ico(VSabetzadeh___024root* vlSelf);
#endif  // VL_DEBUG

void VSabetzadeh___024root___eval_triggers__ico(VSabetzadeh___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSabetzadeh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSabetzadeh___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSabetzadeh___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSabetzadeh___024root___dump_triggers__act(VSabetzadeh___024root* vlSelf);
#endif  // VL_DEBUG

void VSabetzadeh___024root___eval_triggers__act(VSabetzadeh___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSabetzadeh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSabetzadeh___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSabetzadeh___024root___dump_triggers__act(vlSelf);
    }
#endif
}
