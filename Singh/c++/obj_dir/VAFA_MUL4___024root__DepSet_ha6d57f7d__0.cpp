// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAFA_MUL4.h for the primary calling header

#include "VAFA_MUL4__pch.h"
#include "VAFA_MUL4___024root.h"

void VAFA_MUL4___024root___ico_sequent__TOP__0(VAFA_MUL4___024root* vlSelf);

void VAFA_MUL4___024root___eval_ico(VAFA_MUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAFA_MUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAFA_MUL4___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VAFA_MUL4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VAFA_MUL4___024root___ico_sequent__TOP__0(VAFA_MUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAFA_MUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAFA_MUL4___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_HA_stage1_1__x2;
    AFA_MUL4__DOT____Vcellinp__u_HA_stage1_1__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_HA_stage1_1__x1;
    AFA_MUL4__DOT____Vcellinp__u_HA_stage1_1__x1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_UCAC3_4__x4;
    AFA_MUL4__DOT____Vcellinp__u_UCAC3_4__x4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_UCAC3_4__x2;
    AFA_MUL4__DOT____Vcellinp__u_UCAC3_4__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__stage1_AFA1_carry;
    AFA_MUL4__DOT__stage1_AFA1_carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT__ECM_Carry;
    AFA_MUL4__DOT__ECM_Carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT__exact_4to2_cout11;
    AFA_MUL4__DOT__exact_4to2_cout11 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x3;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x3 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__exact_4to2_cout12;
    AFA_MUL4__DOT__exact_4to2_cout12 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x3;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x3 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__exact_4to2_cout21;
    AFA_MUL4__DOT__exact_4to2_cout21 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__sum;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x3;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x3 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__exact_4to2_cout22;
    AFA_MUL4__DOT__exact_4to2_cout22 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__sum;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x3;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x3 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__exact_4to2_cout3;
    AFA_MUL4__DOT__exact_4to2_cout3 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_FA_stage1_1__carry;
    AFA_MUL4__DOT____Vcellout__u_FA_stage1_1__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_FA_stage1_1__sum;
    AFA_MUL4__DOT____Vcellout__u_FA_stage1_1__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x2;
    AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x1;
    AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__exact_4to2_cout4;
    AFA_MUL4__DOT__exact_4to2_cout4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__sum;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x3;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x3 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__carry;
    AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__sum;
    AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x2;
    AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x1;
    AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_HA_stage2_1__x2;
    AFA_MUL4__DOT____Vcellinp__u_HA_stage2_1__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_HA_stage2_1__x1;
    AFA_MUL4__DOT____Vcellinp__u_HA_stage2_1__x1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_AFA_stage2_1_carry;
    AFA_MUL4__DOT__u_AFA_stage2_1_carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_AFA_stage2_2_carry;
    AFA_MUL4__DOT__u_AFA_stage2_2_carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_AFA_stage2_3_carry;
    AFA_MUL4__DOT__u_AFA_stage2_3_carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_AFA_stage2_4_carry;
    AFA_MUL4__DOT__u_AFA_stage2_4_carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_AFA_stage2_5_carry;
    AFA_MUL4__DOT__u_AFA_stage2_5_carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_FA_stage2_1__carry;
    AFA_MUL4__DOT____Vcellout__u_FA_stage2_1__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__carry;
    AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__sum;
    AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT__stage2_exact_4to2_cout1;
    AFA_MUL4__DOT__stage2_exact_4to2_cout1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT__stage2_exact_4to2_cout2;
    AFA_MUL4__DOT__stage2_exact_4to2_cout2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__stage2_exact_4to2_cout3;
    AFA_MUL4__DOT__stage2_exact_4to2_cout3 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__stage2_exact_4to2_cout4;
    AFA_MUL4__DOT__stage2_exact_4to2_cout4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum;
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2;
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__carry;
    AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__carry = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__sum;
    AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__sum = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x2;
    AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x1;
    AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__cout_FA_stage3_1;
    AFA_MUL4__DOT__cout_FA_stage3_1 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__cout_FA_stage3_2;
    AFA_MUL4__DOT__cout_FA_stage3_2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__cout_FA_stage3_3;
    AFA_MUL4__DOT__cout_FA_stage3_3 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__cout_FA_stage3_4;
    AFA_MUL4__DOT__cout_FA_stage3_4 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__cout_FA_stage3_5;
    AFA_MUL4__DOT__cout_FA_stage3_5 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__cout_FA_stage3_6;
    AFA_MUL4__DOT__cout_FA_stage3_6 = 0;
    CData/*0:0*/ AFA_MUL4__DOT____Vcellinp__u_FA_stage3_7__x2;
    AFA_MUL4__DOT____Vcellinp__u_FA_stage3_7__x2 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0;
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0;
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0;
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_22__DOT____VdfgRegularize_h0d3b8a33_0_0;
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_22__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0;
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0;
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    // Body
    AFA_MUL4__DOT____Vcellinp__u_FA_stage3_7__x2 = 
        (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
               >> 7U));
    AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x1 = (IData)(
                                                           (((IData)(vlSelf->a) 
                                                             >> 7U) 
                                                            & ((IData)(vlSelf->b) 
                                                               >> 6U)));
    AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x2 = (IData)(
                                                           (((IData)(vlSelf->a) 
                                                             >> 6U) 
                                                            & ((IData)(vlSelf->b) 
                                                               >> 7U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4 
        = (IData)((((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4 
        = (IData)((((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 5U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 6U));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4 
        = (IData)((((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    AFA_MUL4__DOT____Vcellinp__u_HA_stage2_1__x1 = 
        (1U & (((IData)(vlSelf->a) >> 1U) & (IData)(vlSelf->b)));
    AFA_MUL4__DOT____Vcellinp__u_HA_stage2_1__x2 = 
        (1U & ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                     >> 1U)));
    AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x1 = (IData)(
                                                           (((IData)(vlSelf->a) 
                                                             >> 7U) 
                                                            & ((IData)(vlSelf->b) 
                                                               >> 4U)));
    AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x2 = 
        (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                             >> 5U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4 
        = ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                 >> 7U));
    AFA_MUL4__DOT____Vcellinp__u_HA_stage1_1__x1 = 
        (1U & (((IData)(vlSelf->a) >> 2U) & (IData)(vlSelf->b)));
    AFA_MUL4__DOT____Vcellinp__u_HA_stage1_1__x2 = 
        (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
               >> 1U));
    AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x1 = 
        (1U & (((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                             >> 6U)));
    AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x2 = (IData)(
                                                           (((IData)(vlSelf->a) 
                                                             >> 2U) 
                                                            & ((IData)(vlSelf->b) 
                                                               >> 7U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    AFA_MUL4__DOT__stage1_AFA1_carry = (1U & ((((IData)(vlSelf->a) 
                                                >> 2U) 
                                               & ((IData)(vlSelf->b) 
                                                  >> 4U)) 
                                              | (IData)(
                                                        ((3U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->a))) 
                                                         & (0x60U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->b)))))));
    AFA_MUL4__DOT____Vcellinp__u_UCAC3_4__x2 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 1U)));
    AFA_MUL4__DOT____Vcellinp__u_UCAC3_4__x4 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    & (IData)(vlSelf->b)) 
                                                   >> 3U));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 4U));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1 
        = (1U & (((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2 
        = (1U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x3 
        = (1U & (((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 3U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 5U));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & (IData)(vlSelf->b)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 1U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1 
        = (1U & (((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2 
        = (1U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x3 
        = (IData)((((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 2U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 1U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    AFA_MUL4__DOT__u_AFA_stage2_1_carry = (((IData)(AFA_MUL4__DOT____Vcellinp__u_HA_stage1_1__x1) 
                                            ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_HA_stage1_1__x2)) 
                                           | (((IData)(vlSelf->a) 
                                               & ((IData)(vlSelf->b) 
                                                  >> 2U)) 
                                              & ((IData)(AFA_MUL4__DOT____Vcellinp__u_HA_stage2_1__x1) 
                                                 & (IData)(AFA_MUL4__DOT____Vcellinp__u_HA_stage2_1__x2))));
    AFA_MUL4__DOT__ECM_Carry = (1U & ((((IData)(vlSelf->a) 
                                        >> 6U) & (IData)(vlSelf->b)) 
                                      | ((IData)(AFA_MUL4__DOT____Vcellinp__u_UCAC3_4__x2) 
                                         | ((((IData)(vlSelf->a) 
                                              >> 4U) 
                                             & ((IData)(vlSelf->b) 
                                                >> 2U)) 
                                            | (IData)(AFA_MUL4__DOT____Vcellinp__u_UCAC3_4__x4)))));
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1) 
           ^ ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x3)));
    AFA_MUL4__DOT__exact_4to2_cout12 = (((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1) 
                                         & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2)) 
                                        | ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x3) 
                                           & ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1) 
                                              | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2))));
    AFA_MUL4__DOT__exact_4to2_cout4 = (((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1) 
                                        & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2)) 
                                       | ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x3) 
                                          & ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1) 
                                             | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2))));
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1) 
           ^ ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x3)));
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1) 
           ^ ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x3)));
    AFA_MUL4__DOT__exact_4to2_cout11 = (((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1) 
                                         & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2)) 
                                        | ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x3) 
                                           & ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1) 
                                              | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2))));
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_22__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1) 
           ^ ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x3)));
    AFA_MUL4__DOT__exact_4to2_cout22 = (((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1) 
                                         & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2)) 
                                        | ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x3) 
                                           & ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1) 
                                              | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2))));
    AFA_MUL4__DOT__exact_4to2_cout3 = (((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                        & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2)) 
                                       | ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3) 
                                          & ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                             | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2))));
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
           ^ ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3)));
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1) 
           ^ ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x3)));
    AFA_MUL4__DOT__exact_4to2_cout21 = (((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1) 
                                         & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2)) 
                                        | ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x3) 
                                           & ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1) 
                                              | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2))));
    AFA_MUL4__DOT__u_AFA_stage2_2_carry = (1U & (((
                                                   ((IData)(vlSelf->a) 
                                                    >> 2U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 1U)) 
                                                  | ((IData)(vlSelf->a) 
                                                     & ((IData)(vlSelf->b) 
                                                        >> 3U))) 
                                                 | (((IData)(AFA_MUL4__DOT____Vcellinp__u_HA_stage1_1__x1) 
                                                     & (IData)(AFA_MUL4__DOT____Vcellinp__u_HA_stage1_1__x2)) 
                                                    & (IData)(AFA_MUL4__DOT__u_AFA_stage2_1_carry))));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum 
        = ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(AFA_MUL4__DOT__stage1_AFA1_carry) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4)));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry 
        = (((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4)) 
           | ((IData)(AFA_MUL4__DOT__stage1_AFA1_carry) 
              & ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4))));
    AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__carry 
        = (((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x1) 
            & (IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x2)) 
           | (((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x2) 
               | (IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x1)) 
              & (IData)(AFA_MUL4__DOT__exact_4to2_cout4)));
    AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__sum = 
        ((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x1) 
         ^ ((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_2__x2) 
            ^ (IData)(AFA_MUL4__DOT__exact_4to2_cout4)));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum 
        = ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(AFA_MUL4__DOT__ECM_Carry) ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4)));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry 
        = (((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4)) 
           | ((IData)(AFA_MUL4__DOT__ECM_Carry) & ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                                                   | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4))));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__sum 
        = ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_22__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ (IData)(AFA_MUL4__DOT__exact_4to2_cout12));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry 
        = ((IData)(AFA_MUL4__DOT__exact_4to2_cout12) 
           & (IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_22__DOT____VdfgRegularize_h0d3b8a33_0_0));
    AFA_MUL4__DOT____Vcellout__u_FA_stage1_1__sum = 
        ((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x1) 
         ^ ((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x2) 
            ^ (IData)(AFA_MUL4__DOT__exact_4to2_cout22)));
    AFA_MUL4__DOT____Vcellout__u_FA_stage1_1__carry 
        = (((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x1) 
            & (IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x2)) 
           | (((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x2) 
               | (IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage1_1__x1)) 
              & (IData)(AFA_MUL4__DOT__exact_4to2_cout22)));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry 
        = (((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4)) 
           | ((IData)(AFA_MUL4__DOT__exact_4to2_cout3) 
              & ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4))));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__sum 
        = ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(AFA_MUL4__DOT__exact_4to2_cout3) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4)));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__sum 
        = ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(AFA_MUL4__DOT__exact_4to2_cout11) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4)));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry 
        = (((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4)) 
           | ((IData)(AFA_MUL4__DOT__exact_4to2_cout11) 
              & ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4))));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry 
        = (((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)) 
           | ((IData)(AFA_MUL4__DOT__exact_4to2_cout21) 
              & ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4))));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum 
        = ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(AFA_MUL4__DOT__exact_4to2_cout21) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)));
    AFA_MUL4__DOT__u_AFA_stage2_3_carry = (1U & (((
                                                   ((IData)(vlSelf->a) 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 1U)) 
                                                  | (((IData)(vlSelf->a) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->b) 
                                                        >> 3U))) 
                                                 | (((IData)(vlSelf->a) 
                                                     & ((IData)(vlSelf->b) 
                                                        >> 4U)) 
                                                    & (IData)(AFA_MUL4__DOT__u_AFA_stage2_2_carry))));
    AFA_MUL4__DOT__stage2_exact_4to2_cout4 = (((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__carry) 
                                               & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2)) 
                                              | ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3) 
                                                 & ((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__carry) 
                                                    | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2))));
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__carry) 
           ^ ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3)));
    AFA_MUL4__DOT__stage2_exact_4to2_cout3 = (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry) 
                                               & (IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__sum)) 
                                              | ((IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3) 
                                                 & ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry) 
                                                    | (IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__sum))));
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry) 
           ^ ((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage1_2__sum) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3)));
    AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__carry 
        = (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry) 
            & (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry)) 
           | (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry) 
               | (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry)) 
              & (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__sum)));
    AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__sum = 
        ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry) 
         ^ ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry) 
            ^ (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__sum)));
    AFA_MUL4__DOT__stage2_exact_4to2_cout2 = (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                               & (IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage1_1__carry)) 
                                              | ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__sum) 
                                                 & ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                                    | (IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage1_1__carry))));
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
           ^ ((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage1_1__carry) 
              ^ (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__sum)));
    AFA_MUL4__DOT__stage2_exact_4to2_cout1 = (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry) 
                                               & (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry)) 
                                              | ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum) 
                                                 & ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry) 
                                                    | (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry))));
    AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry) 
           ^ ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry) 
              ^ (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum)));
    AFA_MUL4__DOT__u_AFA_stage2_4_carry = (1U & (((
                                                   ((IData)(vlSelf->a) 
                                                    >> 4U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 1U)) 
                                                  | (((IData)(vlSelf->a) 
                                                      >> 2U) 
                                                     & ((IData)(vlSelf->b) 
                                                        >> 3U))) 
                                                 | (((((IData)(vlSelf->a) 
                                                       >> 1U) 
                                                      & ((IData)(vlSelf->b) 
                                                         >> 4U)) 
                                                     | ((IData)(vlSelf->a) 
                                                        & ((IData)(vlSelf->b) 
                                                           >> 5U))) 
                                                    & (IData)(AFA_MUL4__DOT__u_AFA_stage2_3_carry))));
    AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__carry 
        = (((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x1) 
            & (IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x2)) 
           | (((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x2) 
               | (IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x1)) 
              & (IData)(AFA_MUL4__DOT__stage2_exact_4to2_cout4)));
    AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__sum = 
        ((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x1) 
         ^ ((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage2_3__x2) 
            ^ (IData)(AFA_MUL4__DOT__stage2_exact_4to2_cout4)));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry 
        = (((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4)) 
           | ((IData)(AFA_MUL4__DOT__stage2_exact_4to2_cout3) 
              & ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4))));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum 
        = ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(AFA_MUL4__DOT__stage2_exact_4to2_cout3) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4)));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry 
        = (((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4)) 
           | ((IData)(AFA_MUL4__DOT__stage2_exact_4to2_cout2) 
              & ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4))));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum 
        = ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(AFA_MUL4__DOT__stage2_exact_4to2_cout2) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4)));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry 
        = (((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4)) 
           | ((IData)(AFA_MUL4__DOT__stage2_exact_4to2_cout1) 
              & ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4))));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum 
        = ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(AFA_MUL4__DOT__stage2_exact_4to2_cout1) 
              ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4)));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry 
        = ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           & (IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage1_1__sum));
    AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum 
        = ((IData)(AFA_MUL4__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ (IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage1_1__sum));
    AFA_MUL4__DOT__u_AFA_stage2_5_carry = (((IData)(AFA_MUL4__DOT____Vcellinp__u_UCAC3_4__x2) 
                                            | (IData)(AFA_MUL4__DOT____Vcellinp__u_UCAC3_4__x4)) 
                                           | ((~ (IData)(AFA_MUL4__DOT__stage1_AFA1_carry)) 
                                              & (IData)(AFA_MUL4__DOT__u_AFA_stage2_4_carry)));
    AFA_MUL4__DOT____Vcellout__u_FA_stage2_1__carry 
        = (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum) 
            & (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum)) 
           | (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum) 
               | (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum)) 
              & (IData)(AFA_MUL4__DOT__u_AFA_stage2_5_carry)));
    AFA_MUL4__DOT__cout_FA_stage3_1 = (((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_1__carry) 
                                        & (IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__sum)) 
                                       | (((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__sum) 
                                           | (IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_1__carry)) 
                                          & (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__sum)));
    AFA_MUL4__DOT__cout_FA_stage3_2 = (((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__carry) 
                                        & (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum)) 
                                       | (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                           | (IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__carry)) 
                                          & (IData)(AFA_MUL4__DOT__cout_FA_stage3_1)));
    AFA_MUL4__DOT__cout_FA_stage3_3 = (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                        & (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum)) 
                                       | (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                           | (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry)) 
                                          & (IData)(AFA_MUL4__DOT__cout_FA_stage3_2)));
    AFA_MUL4__DOT__cout_FA_stage3_4 = (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                        & (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum)) 
                                       | (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                           | (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry)) 
                                          & (IData)(AFA_MUL4__DOT__cout_FA_stage3_3)));
    AFA_MUL4__DOT__cout_FA_stage3_5 = (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                        & (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum)) 
                                       | (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                           | (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry)) 
                                          & (IData)(AFA_MUL4__DOT__cout_FA_stage3_4)));
    AFA_MUL4__DOT__cout_FA_stage3_6 = (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                        & (IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__sum)) 
                                       | (((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__sum) 
                                           | (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry)) 
                                          & (IData)(AFA_MUL4__DOT__cout_FA_stage3_5)));
    vlSelf->final_sum = (((((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__carry) 
                            & (IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage3_7__x2)) 
                           | (((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage3_7__x2) 
                               | (IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__carry)) 
                              & (IData)(AFA_MUL4__DOT__cout_FA_stage3_6))) 
                          << 0xfU) | ((((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__carry) 
                                        ^ ((IData)(AFA_MUL4__DOT____Vcellinp__u_FA_stage3_7__x2) 
                                           ^ (IData)(AFA_MUL4__DOT__cout_FA_stage3_6))) 
                                       << 0xeU) | (
                                                   (((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                                     ^ 
                                                     ((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_3__sum) 
                                                      ^ (IData)(AFA_MUL4__DOT__cout_FA_stage3_5))) 
                                                    << 0xdU) 
                                                   | ((((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                                        ^ 
                                                        ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                                         ^ (IData)(AFA_MUL4__DOT__cout_FA_stage3_4))) 
                                                       << 0xcU) 
                                                      | ((((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                                           ^ 
                                                           ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                                            ^ (IData)(AFA_MUL4__DOT__cout_FA_stage3_3))) 
                                                          << 0xbU) 
                                                         | ((((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                                              ^ 
                                                              ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                                               ^ (IData)(AFA_MUL4__DOT__cout_FA_stage3_2))) 
                                                             << 0xaU) 
                                                            | ((((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__carry) 
                                                                 ^ 
                                                                 ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                                                  ^ (IData)(AFA_MUL4__DOT__cout_FA_stage3_1))) 
                                                                << 9U) 
                                                               | ((((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_1__carry) 
                                                                    ^ 
                                                                    ((IData)(AFA_MUL4__DOT____Vcellout__u_FA_stage2_2__sum) 
                                                                     ^ (IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__sum))) 
                                                                   << 8U) 
                                                                  | ((((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum) 
                                                                       ^ 
                                                                       ((IData)(AFA_MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum) 
                                                                        ^ (IData)(AFA_MUL4__DOT__u_AFA_stage2_5_carry))) 
                                                                      << 7U) 
                                                                     | ((0x40U 
                                                                         & ((~ (IData)(AFA_MUL4__DOT__u_AFA_stage2_5_carry)) 
                                                                            << 6U)) 
                                                                        | ((0x20U 
                                                                            & ((~ (IData)(AFA_MUL4__DOT__u_AFA_stage2_4_carry)) 
                                                                               << 5U)) 
                                                                           | ((0x10U 
                                                                               & ((~ (IData)(AFA_MUL4__DOT__u_AFA_stage2_3_carry)) 
                                                                                << 4U)) 
                                                                              | ((8U 
                                                                                & ((~ (IData)(AFA_MUL4__DOT__u_AFA_stage2_2_carry)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(AFA_MUL4__DOT__u_AFA_stage2_1_carry)) 
                                                                                << 2U)) 
                                                                                | ((((IData)(AFA_MUL4__DOT____Vcellinp__u_HA_stage2_1__x1) 
                                                                                ^ (IData)(AFA_MUL4__DOT____Vcellinp__u_HA_stage2_1__x2)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->a) 
                                                                                & (IData)(vlSelf->b))))))))))))))))));
}

void VAFA_MUL4___024root___eval_triggers__ico(VAFA_MUL4___024root* vlSelf);

bool VAFA_MUL4___024root___eval_phase__ico(VAFA_MUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAFA_MUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAFA_MUL4___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VAFA_MUL4___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VAFA_MUL4___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VAFA_MUL4___024root___eval_act(VAFA_MUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAFA_MUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAFA_MUL4___024root___eval_act\n"); );
}

void VAFA_MUL4___024root___eval_nba(VAFA_MUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAFA_MUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAFA_MUL4___024root___eval_nba\n"); );
}

void VAFA_MUL4___024root___eval_triggers__act(VAFA_MUL4___024root* vlSelf);

bool VAFA_MUL4___024root___eval_phase__act(VAFA_MUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAFA_MUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAFA_MUL4___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VAFA_MUL4___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VAFA_MUL4___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VAFA_MUL4___024root___eval_phase__nba(VAFA_MUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAFA_MUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAFA_MUL4___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VAFA_MUL4___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAFA_MUL4___024root___dump_triggers__ico(VAFA_MUL4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAFA_MUL4___024root___dump_triggers__nba(VAFA_MUL4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAFA_MUL4___024root___dump_triggers__act(VAFA_MUL4___024root* vlSelf);
#endif  // VL_DEBUG

void VAFA_MUL4___024root___eval(VAFA_MUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAFA_MUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAFA_MUL4___024root___eval\n"); );
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
            VAFA_MUL4___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/AFA_MUL4.v", 8, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VAFA_MUL4___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VAFA_MUL4___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/AFA_MUL4.v", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VAFA_MUL4___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../verilog/../verilog/AFA_MUL4.v", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VAFA_MUL4___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VAFA_MUL4___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VAFA_MUL4___024root___eval_debug_assertions(VAFA_MUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAFA_MUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAFA_MUL4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
