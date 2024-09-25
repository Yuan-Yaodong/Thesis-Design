// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMingtao_hybrid.h for the primary calling header

#include "VMingtao_hybrid__pch.h"
#include "VMingtao_hybrid___024root.h"

void VMingtao_hybrid___024root___ico_sequent__TOP__0(VMingtao_hybrid___024root* vlSelf);

void VMingtao_hybrid___024root___eval_ico(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VMingtao_hybrid___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VMingtao_hybrid___024root___ico_sequent__TOP__0(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ Mingtao_hybrid__DOT__pp0;
    Mingtao_hybrid__DOT__pp0 = 0;
    CData/*4:0*/ Mingtao_hybrid__DOT__pp1;
    Mingtao_hybrid__DOT__pp1 = 0;
    CData/*7:0*/ Mingtao_hybrid__DOT__pp6;
    Mingtao_hybrid__DOT__pp6 = 0;
    CData/*7:0*/ Mingtao_hybrid__DOT__pp7;
    Mingtao_hybrid__DOT__pp7 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s2;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s1;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s2;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s1;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x4;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x4 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x3;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x3 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_2__s2;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_2__s2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_2__s1;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_2__s1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_2__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_2__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_2__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_2__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_2__s2;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_2__s2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_2__s1;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_2__s1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x4;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x4 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x3;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x3 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_3__s2;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_3__s2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_3__s1;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_3__s1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x4;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x4 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x3;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x3 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s2;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s1;
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x4;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x4 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x3;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x3 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__exact_4to2_cout1;
    Mingtao_hybrid__DOT__exact_4to2_cout1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__exact_4to2_cout2;
    Mingtao_hybrid__DOT__exact_4to2_cout2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__exact_4to2_cout3;
    Mingtao_hybrid__DOT__exact_4to2_cout3 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_FA_1__carry;
    Mingtao_hybrid__DOT____Vcellout__u_FA_1__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_FA_1__sum;
    Mingtao_hybrid__DOT____Vcellout__u_FA_1__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x3;
    Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x3 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_HA_1__carry;
    Mingtao_hybrid__DOT____Vcellout__u_HA_1__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_HA_1__sum;
    Mingtao_hybrid__DOT____Vcellout__u_HA_1__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_FA_2__carry;
    Mingtao_hybrid__DOT____Vcellout__u_FA_2__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_FA_2__sum;
    Mingtao_hybrid__DOT____Vcellout__u_FA_2__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x2;
    Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x1;
    Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_1__carry;
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_1__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_1__sum;
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_1__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_2__carry;
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_2__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_2__sum;
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_2__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__carry;
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__sum;
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__carry;
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__sum;
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__ECM;
    Mingtao_hybrid__DOT__ECM = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__carry;
    Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__sum;
    Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__stage2_exact_4to2_cout1;
    Mingtao_hybrid__DOT__stage2_exact_4to2_cout1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__stage2_exact_4to2_cout2;
    Mingtao_hybrid__DOT__stage2_exact_4to2_cout2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__stage2_exact_4to2_cout3;
    Mingtao_hybrid__DOT__stage2_exact_4to2_cout3 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__stage2_exact_4to2_cout4;
    Mingtao_hybrid__DOT__stage2_exact_4to2_cout4 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum;
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__carry;
    Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__carry = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__sum;
    Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__sum = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__cout_HA_stage3_1;
    Mingtao_hybrid__DOT__cout_HA_stage3_1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__cout_FA_stage3_1;
    Mingtao_hybrid__DOT__cout_FA_stage3_1 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__cout_FA_stage3_2;
    Mingtao_hybrid__DOT__cout_FA_stage3_2 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__cout_FA_stage3_3;
    Mingtao_hybrid__DOT__cout_FA_stage3_3 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__cout_FA_stage3_4;
    Mingtao_hybrid__DOT__cout_FA_stage3_4 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__cout_FA_stage3_5;
    Mingtao_hybrid__DOT__cout_FA_stage3_5 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__cout_FA_stage3_6;
    Mingtao_hybrid__DOT__cout_FA_stage3_6 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__cout_FA_stage3_7;
    Mingtao_hybrid__DOT__cout_FA_stage3_7 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__cout_FA_stage3_8;
    Mingtao_hybrid__DOT__cout_FA_stage3_8 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    // Body
    vlSelf->Mingtao_hybrid__DOT__stage1_pp1[8U] = (IData)(
                                                          (((IData)(vlSelf->a) 
                                                            >> 7U) 
                                                           & ((IData)(vlSelf->b) 
                                                              >> 5U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_2__x1 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 2U));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_2__x2 
        = (1U & (((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x3 
        = (1U & (((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x1 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 3U));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x2 
        = (1U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x4 
        = (1U & ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                       >> 5U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x1 
        = (1U & (((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x2 
        = (1U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x3 
        = (1U & (((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x2 
        = (1U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x1 
        = (1U & (((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x2 = (1U 
                                                   & (((IData)(vlSelf->a) 
                                                       >> 6U) 
                                                      & ((IData)(vlSelf->b) 
                                                         >> 5U)));
    Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x1 = (IData)(
                                                          (((IData)(vlSelf->a) 
                                                            >> 7U) 
                                                           & ((IData)(vlSelf->b) 
                                                              >> 4U)));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 4U));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x1 = (1U 
                                                   & (((IData)(vlSelf->a) 
                                                       >> 3U) 
                                                      & ((IData)(vlSelf->b) 
                                                         >> 5U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x4 
        = (1U & ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                       >> 6U)));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x3 
        = (1U & (((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x1 = (1U 
                                                   & (((IData)(vlSelf->a) 
                                                       >> 3U) 
                                                      & ((IData)(vlSelf->b) 
                                                         >> 6U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & (IData)(vlSelf->b)));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 2U)));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x1 
        = (1U & (((IData)(vlSelf->a) >> 6U) & (IData)(vlSelf->b)));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 5U));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 3U)));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 1U)));
    Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x2 = (1U 
                                                   & (((IData)(vlSelf->a) 
                                                       >> 2U) 
                                                      & ((IData)(vlSelf->b) 
                                                         >> 6U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x2 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 1U)));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x4 
        = ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                 >> 7U));
    Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x2 = (IData)(
                                                          (((IData)(vlSelf->a) 
                                                            >> 2U) 
                                                           & ((IData)(vlSelf->b) 
                                                              >> 7U)));
    Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x3 = (IData)(
                                                          (((IData)(vlSelf->a) 
                                                            >> 1U) 
                                                           & ((IData)(vlSelf->b) 
                                                              >> 7U)));
    Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 1U)));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_2__s1 
        = (1U & (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_2__x1) 
                  & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_2__x2)) 
                 | ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                          >> 4U))));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_2__s2 
        = ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_2__x1) 
           | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_2__x2));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_2__s1 
        = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x1) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x2)) 
           | ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x3) 
              | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x4)));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_2__s2 
        = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x3) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x4)) 
           | ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x1) 
              | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_2__x2)));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_3__s1 
        = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x1) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x2)) 
           | ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x3) 
              | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x4)));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_3__s2 
        = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x3) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x4)) 
           | ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x1) 
              | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x2)));
    Mingtao_hybrid__DOT__exact_4to2_cout2 = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
                                              & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2)) 
                                             | ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3) 
                                                & ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
                                                   | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2))));
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
           ^ ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2) 
              ^ (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3)));
    Mingtao_hybrid__DOT__pp0 = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x1) 
                                 << 3U) | (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x1) 
                                            << 2U) 
                                           | ((2U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 4U) 
                                                & ((IData)(vlSelf->b) 
                                                   << 1U))) 
                                              | (1U 
                                                 & (((IData)(vlSelf->a) 
                                                     >> 4U) 
                                                    & (IData)(vlSelf->b))))));
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
           ^ ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2) 
              ^ (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3)));
    Mingtao_hybrid__DOT__exact_4to2_cout3 = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                              & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2)) 
                                             | ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3) 
                                                & ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                                   | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2))));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s1 
        = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x1) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x2)) 
           | ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x3) 
              | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x4)));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s2 
        = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x3) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x4)) 
           | ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x1) 
              | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x2)));
    Mingtao_hybrid__DOT__pp6 = (((IData)((((IData)(vlSelf->a) 
                                           >> 7U) & 
                                          ((IData)(vlSelf->b) 
                                           >> 6U))) 
                                 << 7U) | ((0x40U & 
                                            ((IData)(vlSelf->a) 
                                             & (IData)(vlSelf->b))) 
                                           | ((0x20U 
                                               & ((IData)(vlSelf->a) 
                                                  & ((IData)(vlSelf->b) 
                                                     >> 1U))) 
                                              | (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4) 
                                                  << 4U) 
                                                 | (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x1) 
                                                     << 3U) 
                                                    | (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x2) 
                                                        << 2U) 
                                                       | (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x3) 
                                                           << 1U) 
                                                          | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_3__x4))))))));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s1 
        = (1U & (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x1) 
                  & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x2)) 
                 | (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                                  >> 2U))));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s2 
        = ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x1) 
           | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x2));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s1 
        = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x1) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x2)) 
           | ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x3) 
              | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x4)));
    Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s2 
        = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x3) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x4)) 
           | ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x1) 
              | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x2)));
    Mingtao_hybrid__DOT____Vcellout__u_HA_1__sum = 
        ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x1) 
         ^ (IData)(Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x2));
    Mingtao_hybrid__DOT____Vcellout__u_HA_1__carry 
        = ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x1) 
           & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x2));
    Mingtao_hybrid__DOT____Vcellout__u_FA_1__sum = 
        ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x1) 
         ^ ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x2) 
            ^ (IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x3)));
    Mingtao_hybrid__DOT____Vcellout__u_FA_1__carry 
        = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x1) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x2)) 
           | (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x2) 
               | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x1)) 
              & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x3)));
    Mingtao_hybrid__DOT__pp7 = ((0x80U & ((IData)(vlSelf->a) 
                                          & (IData)(vlSelf->b))) 
                                | (((IData)((((IData)(vlSelf->a) 
                                              >> 6U) 
                                             & ((IData)(vlSelf->b) 
                                                >> 7U))) 
                                    << 6U) | (((IData)(
                                                       (((IData)(vlSelf->a) 
                                                         >> 5U) 
                                                        & ((IData)(vlSelf->b) 
                                                           >> 7U))) 
                                               << 5U) 
                                              | (((IData)(
                                                          (((IData)(vlSelf->a) 
                                                            >> 4U) 
                                                           & ((IData)(vlSelf->b) 
                                                              >> 7U))) 
                                                  << 4U) 
                                                 | (((IData)(
                                                             (((IData)(vlSelf->a) 
                                                               >> 3U) 
                                                              & ((IData)(vlSelf->b) 
                                                                 >> 7U))) 
                                                     << 3U) 
                                                    | (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_HA_1__x2) 
                                                        << 2U) 
                                                       | (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_1__x3) 
                                                           << 1U) 
                                                          | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_4__x4))))))));
    Mingtao_hybrid__DOT__pp1 = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                                 << 4U) | (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_4to2_1__x2) 
                                            << 3U) 
                                           | (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_Esposito_compressor_3to2_1__x2) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((IData)(vlSelf->a) 
                                                      >> 3U) 
                                                     & (IData)(vlSelf->b))) 
                                                 | (1U 
                                                    & (((IData)(vlSelf->a) 
                                                        >> 3U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 1U)))))));
    Mingtao_hybrid__DOT__exact_4to2_cout1 = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                                              & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2)) 
                                             | ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3) 
                                                & ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                                                   | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2))));
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
           ^ ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2) 
              ^ (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3)));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp2[0U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_2__s1;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp3[0U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_2__s2;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp2[1U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_2__s1;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp3[1U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_2__s2;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp2[2U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_3__s1;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp3[2U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_3__s2;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp0[1U] = (1U 
                                                   & ((IData)(Mingtao_hybrid__DOT__pp0) 
                                                      >> 1U));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp0[0U] = (1U 
                                                   & (IData)(Mingtao_hybrid__DOT__pp0));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum 
        = ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Mingtao_hybrid__DOT__exact_4to2_cout2) 
              ^ (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry 
        = (((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)) 
           | ((IData)(Mingtao_hybrid__DOT__exact_4to2_cout2) 
              & ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4))));
    Mingtao_hybrid__DOT____Vcellout__u_FA_2__carry 
        = (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x1) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x2)) 
           | (((IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x2) 
               | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x1)) 
              & (IData)(Mingtao_hybrid__DOT__exact_4to2_cout3)));
    Mingtao_hybrid__DOT____Vcellout__u_FA_2__sum = 
        ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x1) 
         ^ ((IData)(Mingtao_hybrid__DOT____Vcellinp__u_FA_2__x2) 
            ^ (IData)(Mingtao_hybrid__DOT__exact_4to2_cout3)));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp0[3U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s1;
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__carry 
        = ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s1) 
           | (IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s2));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp1[3U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s2;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp2[7U] = (1U 
                                                   & ((IData)(Mingtao_hybrid__DOT__pp6) 
                                                      >> 6U));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp2[6U] = (1U 
                                                   & ((IData)(Mingtao_hybrid__DOT__pp6) 
                                                      >> 5U));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp0[9U] = (1U 
                                                   & ((IData)(Mingtao_hybrid__DOT__pp6) 
                                                      >> 7U));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp0[2U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s1;
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__carry 
        = ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s1) 
           | (IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s2));
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__sum 
        = (1U & (~ ((~ ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_3__s1) 
                        | (IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_3__s2))) 
                    | ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s1) 
                       ^ (IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s2)))));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp1[2U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_1__s2;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp2[3U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s1;
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__sum 
        = (1U & (~ ((~ ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s1) 
                        | (IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s2))) 
                    | ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s1) 
                       ^ (IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_1__s2)))));
    Mingtao_hybrid__DOT__ECM = ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s1) 
                                & (IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s2));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp3[3U] = Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_4__s2;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp3[4U] = Mingtao_hybrid__DOT____Vcellout__u_HA_1__sum;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp1[6U] = Mingtao_hybrid__DOT____Vcellout__u_HA_1__carry;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp1[4U] = Mingtao_hybrid__DOT____Vcellout__u_FA_1__sum;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp1[5U] = Mingtao_hybrid__DOT____Vcellout__u_FA_1__carry;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp3[7U] = (1U 
                                                   & ((IData)(Mingtao_hybrid__DOT__pp7) 
                                                      >> 5U));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp3[6U] = (1U 
                                                   & ((IData)(Mingtao_hybrid__DOT__pp7) 
                                                      >> 4U));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp3[5U] = (1U 
                                                   & ((IData)(Mingtao_hybrid__DOT__pp7) 
                                                      >> 3U));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp0[0xaU] = 
        (1U & ((IData)(Mingtao_hybrid__DOT__pp7) >> 7U));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp1[9U] = (1U 
                                                   & ((IData)(Mingtao_hybrid__DOT__pp7) 
                                                      >> 6U));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp1[1U] = (1U 
                                                   & ((IData)(Mingtao_hybrid__DOT__pp1) 
                                                      >> 1U));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp1[0U] = (1U 
                                                   & (IData)(Mingtao_hybrid__DOT__pp1));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum 
        = ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Mingtao_hybrid__DOT__exact_4to2_cout1) 
              ^ (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry 
        = (((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)) 
           | ((IData)(Mingtao_hybrid__DOT__exact_4to2_cout1) 
              & ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4))));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum 
        = ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry 
        = ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           & (IData)(Mingtao_hybrid__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp2[5U] = Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp0[7U] = Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp0[8U] = Mingtao_hybrid__DOT____Vcellout__u_FA_2__carry;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp1[7U] = Mingtao_hybrid__DOT____Vcellout__u_FA_2__sum;
    vlSelf->Mingtao_hybrid__DOT__stage1_pp2[4U] = Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum;
    Mingtao_hybrid__DOT__stage2_exact_4to2_cout2 = 
        (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
          & (IData)(Mingtao_hybrid__DOT____Vcellout__u_HA_1__carry)) 
         | ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum) 
            & ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
               | (IData)(Mingtao_hybrid__DOT____Vcellout__u_HA_1__carry))));
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
           ^ ((IData)(Mingtao_hybrid__DOT____Vcellout__u_HA_1__carry) 
              ^ (IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum)));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp0[6U] = Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry;
    Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__carry 
        = (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
            & (IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_1__sum)) 
           | (((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_1__sum) 
               | (IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum)) 
              & (IData)(Mingtao_hybrid__DOT__ECM)));
    Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__sum 
        = ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
           ^ ((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_1__sum) 
              ^ (IData)(Mingtao_hybrid__DOT__ECM)));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp0[4U] = Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum;
    Mingtao_hybrid__DOT__stage2_exact_4to2_cout1 = 
        (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
          & (IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_1__carry)) 
         | ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum) 
            & ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
               | (IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_1__carry))));
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
           ^ ((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_1__carry) 
              ^ (IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum)));
    vlSelf->Mingtao_hybrid__DOT__stage1_pp0[5U] = Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry;
    Mingtao_hybrid__DOT__stage2_exact_4to2_cout4 = 
        (((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_2__carry) 
          & vlSelf->Mingtao_hybrid__DOT__stage1_pp1
          [8U]) | (vlSelf->Mingtao_hybrid__DOT__stage1_pp2
                   [7U] & ((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_2__carry) 
                           | vlSelf->Mingtao_hybrid__DOT__stage1_pp1
                           [8U])));
    Mingtao_hybrid__DOT__stage2_exact_4to2_cout3 = 
        (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
          & (IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_2__sum)) 
         | (vlSelf->Mingtao_hybrid__DOT__stage1_pp2
            [6U] & ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                    | (IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_2__sum))));
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_2__carry) 
           ^ (vlSelf->Mingtao_hybrid__DOT__stage1_pp1
              [8U] ^ vlSelf->Mingtao_hybrid__DOT__stage1_pp2
              [7U]));
    Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
           ^ ((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_2__sum) 
              ^ vlSelf->Mingtao_hybrid__DOT__stage1_pp2
              [6U]));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry 
        = (((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & vlSelf->Mingtao_hybrid__DOT__stage1_pp3
            [5U]) | ((IData)(Mingtao_hybrid__DOT__stage2_exact_4to2_cout1) 
                     & ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                        | vlSelf->Mingtao_hybrid__DOT__stage1_pp3
                        [5U])));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum 
        = ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Mingtao_hybrid__DOT__stage2_exact_4to2_cout1) 
              ^ vlSelf->Mingtao_hybrid__DOT__stage1_pp3
              [5U]));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry 
        = ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           & (IData)(Mingtao_hybrid__DOT____Vcellout__u_HA_1__sum));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum 
        = ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ (IData)(Mingtao_hybrid__DOT____Vcellout__u_HA_1__sum));
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_1__sum 
        = (1U & (~ ((~ ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_2__s1) 
                        | (IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_3to2_2__s2))) 
                    | (vlSelf->Mingtao_hybrid__DOT__stage1_pp0
                       [0U] ^ vlSelf->Mingtao_hybrid__DOT__stage1_pp1
                       [0U]))));
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_2__carry 
        = (vlSelf->Mingtao_hybrid__DOT__stage1_pp0[1U] 
           | vlSelf->Mingtao_hybrid__DOT__stage1_pp1
           [1U]);
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_1__carry 
        = (vlSelf->Mingtao_hybrid__DOT__stage1_pp0[0U] 
           | vlSelf->Mingtao_hybrid__DOT__stage1_pp1
           [0U]);
    Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_2__sum 
        = (1U & (~ ((~ ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_2__s1) 
                        | (IData)(Mingtao_hybrid__DOT____Vcellout__u_Esposito_compressor_4to2_2__s2))) 
                    | (vlSelf->Mingtao_hybrid__DOT__stage1_pp0
                       [1U] ^ vlSelf->Mingtao_hybrid__DOT__stage1_pp1
                       [1U]))));
    Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__carry 
        = ((vlSelf->Mingtao_hybrid__DOT__stage1_pp0
            [9U] & vlSelf->Mingtao_hybrid__DOT__stage1_pp1
            [9U]) | ((vlSelf->Mingtao_hybrid__DOT__stage1_pp1
                      [9U] | vlSelf->Mingtao_hybrid__DOT__stage1_pp0
                      [9U]) & (IData)(Mingtao_hybrid__DOT__stage2_exact_4to2_cout4)));
    Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__sum 
        = (vlSelf->Mingtao_hybrid__DOT__stage1_pp0[9U] 
           ^ (vlSelf->Mingtao_hybrid__DOT__stage1_pp1
              [9U] ^ (IData)(Mingtao_hybrid__DOT__stage2_exact_4to2_cout4)));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry 
        = (((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & vlSelf->Mingtao_hybrid__DOT__stage1_pp3
            [7U]) | ((IData)(Mingtao_hybrid__DOT__stage2_exact_4to2_cout3) 
                     & ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                        | vlSelf->Mingtao_hybrid__DOT__stage1_pp3
                        [7U])));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum 
        = ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Mingtao_hybrid__DOT__stage2_exact_4to2_cout3) 
              ^ vlSelf->Mingtao_hybrid__DOT__stage1_pp3
              [7U]));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry 
        = (((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & vlSelf->Mingtao_hybrid__DOT__stage1_pp3
            [6U]) | ((IData)(Mingtao_hybrid__DOT__stage2_exact_4to2_cout2) 
                     & ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                        | vlSelf->Mingtao_hybrid__DOT__stage1_pp3
                        [6U])));
    Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum 
        = ((IData)(Mingtao_hybrid__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Mingtao_hybrid__DOT__stage2_exact_4to2_cout2) 
              ^ vlSelf->Mingtao_hybrid__DOT__stage1_pp3
              [6U]));
    Mingtao_hybrid__DOT__cout_HA_stage3_1 = ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_2__sum) 
                                             & (IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_1__carry));
    Mingtao_hybrid__DOT__cout_FA_stage3_1 = (((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__sum) 
                                              & (IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_2__carry)) 
                                             | (((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__sum) 
                                                 | (IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_2__carry)) 
                                                & (IData)(Mingtao_hybrid__DOT__cout_HA_stage3_1)));
    Mingtao_hybrid__DOT__cout_FA_stage3_2 = (((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__sum) 
                                              & (IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__carry)) 
                                             | (((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__sum) 
                                                 | (IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__carry)) 
                                                & (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_1)));
    Mingtao_hybrid__DOT__cout_FA_stage3_3 = (((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__carry) 
                                              & (IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__sum)) 
                                             | (((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__sum) 
                                                 | (IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__carry)) 
                                                & (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_2)));
    Mingtao_hybrid__DOT__cout_FA_stage3_4 = (((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__carry) 
                                              & (IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum)) 
                                             | (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                                 | (IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__carry)) 
                                                & (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_3)));
    Mingtao_hybrid__DOT__cout_FA_stage3_5 = (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                              & (IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum)) 
                                             | (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                                 | (IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry)) 
                                                & (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_4)));
    Mingtao_hybrid__DOT__cout_FA_stage3_6 = (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                              & (IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum)) 
                                             | (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                                 | (IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry)) 
                                                & (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_5)));
    Mingtao_hybrid__DOT__cout_FA_stage3_7 = (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                              & (IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum)) 
                                             | (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                                 | (IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry)) 
                                                & (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_6)));
    Mingtao_hybrid__DOT__cout_FA_stage3_8 = (((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                              & (IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__sum)) 
                                             | (((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__sum) 
                                                 | (IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry)) 
                                                & (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_7)));
    vlSelf->final_sum = (6U | (((((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__carry) 
                                  & vlSelf->Mingtao_hybrid__DOT__stage1_pp0
                                  [0xaU]) | ((vlSelf->Mingtao_hybrid__DOT__stage1_pp0
                                              [0xaU] 
                                              | (IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__carry)) 
                                             & (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_8))) 
                                << 0xfU) | ((((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__carry) 
                                              ^ (vlSelf->Mingtao_hybrid__DOT__stage1_pp0
                                                 [0xaU] 
                                                 ^ (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_8))) 
                                             << 0xeU) 
                                            | ((((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                                 ^ 
                                                 ((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_2__sum) 
                                                  ^ (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_7))) 
                                                << 0xdU) 
                                               | ((((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                                    ^ 
                                                    ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                                     ^ (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_6))) 
                                                   << 0xcU) 
                                                  | ((((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                                       ^ 
                                                       ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                                        ^ (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_5))) 
                                                      << 0xbU) 
                                                     | ((((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                                          ^ 
                                                          ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                                           ^ (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_4))) 
                                                         << 0xaU) 
                                                        | ((((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__carry) 
                                                             ^ 
                                                             ((IData)(Mingtao_hybrid__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                                              ^ (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_3))) 
                                                            << 9U) 
                                                           | ((((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__carry) 
                                                                ^ 
                                                                ((IData)(Mingtao_hybrid__DOT____Vcellout__u_FA_stage2_1__sum) 
                                                                 ^ (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_2))) 
                                                               << 8U) 
                                                              | ((((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__carry) 
                                                                   ^ 
                                                                   ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_4__sum) 
                                                                    ^ (IData)(Mingtao_hybrid__DOT__cout_FA_stage3_1))) 
                                                                  << 7U) 
                                                                 | ((((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_2__carry) 
                                                                      ^ 
                                                                      ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_3__sum) 
                                                                       ^ (IData)(Mingtao_hybrid__DOT__cout_HA_stage3_1))) 
                                                                     << 6U) 
                                                                    | ((((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_2__sum) 
                                                                         ^ (IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_1__carry)) 
                                                                        << 5U) 
                                                                       | ((IData)(Mingtao_hybrid__DOT____Vcellout__u_Mingtao_compressor_1__sum) 
                                                                          << 4U)))))))))))));
}

void VMingtao_hybrid___024root___eval_triggers__ico(VMingtao_hybrid___024root* vlSelf);

bool VMingtao_hybrid___024root___eval_phase__ico(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMingtao_hybrid___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VMingtao_hybrid___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMingtao_hybrid___024root___eval_act(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_act\n"); );
}

void VMingtao_hybrid___024root___eval_nba(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_nba\n"); );
}

void VMingtao_hybrid___024root___eval_triggers__act(VMingtao_hybrid___024root* vlSelf);

bool VMingtao_hybrid___024root___eval_phase__act(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMingtao_hybrid___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMingtao_hybrid___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMingtao_hybrid___024root___eval_phase__nba(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMingtao_hybrid___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMingtao_hybrid___024root___dump_triggers__ico(VMingtao_hybrid___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMingtao_hybrid___024root___dump_triggers__nba(VMingtao_hybrid___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMingtao_hybrid___024root___dump_triggers__act(VMingtao_hybrid___024root* vlSelf);
#endif  // VL_DEBUG

void VMingtao_hybrid___024root___eval(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VMingtao_hybrid___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/Mingtao_hybrid.v", 8, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMingtao_hybrid___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMingtao_hybrid___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/Mingtao_hybrid.v", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMingtao_hybrid___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../verilog/../verilog/Mingtao_hybrid.v", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMingtao_hybrid___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMingtao_hybrid___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMingtao_hybrid___024root___eval_debug_assertions(VMingtao_hybrid___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMingtao_hybrid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMingtao_hybrid___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
