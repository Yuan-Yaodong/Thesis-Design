// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMingtao_hybrid.h for the primary calling header

#include "VMingtao_hybrid__pch.h"
#include "VMingtao_hybrid__Syms.h"
#include "VMingtao_hybrid___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMingtao_hybrid___024root___dump_triggers__stl(VMingtao_hybrid___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMingtao_hybrid___024root___eval_triggers__stl(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMingtao_hybrid___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
