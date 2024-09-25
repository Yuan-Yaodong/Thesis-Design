// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMingtao_hybrid.h for the primary calling header

#include "VMingtao_hybrid__pch.h"
#include "VMingtao_hybrid___024root.h"

VL_ATTR_COLD void VMingtao_hybrid___024root___eval_static(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_static\n"); );
}

VL_ATTR_COLD void VMingtao_hybrid___024root___eval_initial(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VMingtao_hybrid___024root___eval_final(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMingtao_hybrid___024root___dump_triggers__stl(VMingtao_hybrid___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMingtao_hybrid___024root___eval_phase__stl(VMingtao_hybrid___024root* vlSelf);

VL_ATTR_COLD void VMingtao_hybrid___024root___eval_settle(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VMingtao_hybrid___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/Mingtao_hybrid.v", 8, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMingtao_hybrid___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMingtao_hybrid___024root___dump_triggers__stl(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VMingtao_hybrid___024root___ico_sequent__TOP__0(VMingtao_hybrid___024root* vlSelf);

VL_ATTR_COLD void VMingtao_hybrid___024root___eval_stl(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VMingtao_hybrid___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VMingtao_hybrid___024root___eval_triggers__stl(VMingtao_hybrid___024root* vlSelf);

VL_ATTR_COLD bool VMingtao_hybrid___024root___eval_phase__stl(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMingtao_hybrid___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VMingtao_hybrid___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMingtao_hybrid___024root___dump_triggers__ico(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMingtao_hybrid___024root___dump_triggers__act(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMingtao_hybrid___024root___dump_triggers__nba(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMingtao_hybrid___024root___ctor_var_reset(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->final_sum = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->Mingtao_hybrid__DOT__stage1_pp0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->Mingtao_hybrid__DOT__stage1_pp1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Mingtao_hybrid__DOT__stage1_pp2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Mingtao_hybrid__DOT__stage1_pp3[__Vi0] = VL_RAND_RESET_I(1);
    }
}
