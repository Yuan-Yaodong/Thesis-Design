// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMUL4.h for the primary calling header

#include "VMUL4__pch.h"
#include "VMUL4___024root.h"

void VMUL4___024root___ico_sequent__TOP__0(VMUL4___024root* vlSelf);

void VMUL4___024root___eval_ico(VMUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUL4___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VMUL4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VMUL4___024root___ico_sequent__TOP__0(VMUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUL4___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ MUL4__DOT____Vcellout__u_HA_stage1_1__carry;
    MUL4__DOT____Vcellout__u_HA_stage1_1__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_HA_stage1_1__sum;
    MUL4__DOT____Vcellout__u_HA_stage1_1__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_HA_stage1_1__x2;
    MUL4__DOT____Vcellinp__u_HA_stage1_1__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_HA_stage1_1__x1;
    MUL4__DOT____Vcellinp__u_HA_stage1_1__x1 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_UCAC3_1__sum;
    MUL4__DOT____Vcellout__u_UCAC3_1__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_UCAC3_2__sum;
    MUL4__DOT____Vcellout__u_UCAC3_2__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_UCAC3_3__sum;
    MUL4__DOT____Vcellout__u_UCAC3_3__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_UCAC3_4__sum;
    MUL4__DOT____Vcellout__u_UCAC3_4__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_UCAC3_4__x4;
    MUL4__DOT____Vcellinp__u_UCAC3_4__x4 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_UCAC3_4__x2;
    MUL4__DOT____Vcellinp__u_UCAC3_4__x2 = 0;
    CData/*0:0*/ MUL4__DOT__stage1_FA1_carry;
    MUL4__DOT__stage1_FA1_carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_FA_stage1_1__sum;
    MUL4__DOT____Vcellout__u_FA_stage1_1__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_stage1_1__x3;
    MUL4__DOT____Vcellinp__u_FA_stage1_1__x3 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_stage1_1__x2;
    MUL4__DOT____Vcellinp__u_FA_stage1_1__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_stage1_1__x1;
    MUL4__DOT____Vcellinp__u_FA_stage1_1__x1 = 0;
    CData/*0:0*/ MUL4__DOT__ECM_Carry;
    MUL4__DOT__ECM_Carry = 0;
    CData/*0:0*/ MUL4__DOT__exact_4to2_cout11;
    MUL4__DOT__exact_4to2_cout11 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x3;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x3 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1 = 0;
    CData/*0:0*/ MUL4__DOT__exact_4to2_cout12;
    MUL4__DOT__exact_4to2_cout12 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x3;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x3 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1 = 0;
    CData/*0:0*/ MUL4__DOT__exact_4to2_cout21;
    MUL4__DOT__exact_4to2_cout21 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__sum;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x3;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x3 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1 = 0;
    CData/*0:0*/ MUL4__DOT__exact_4to2_cout22;
    MUL4__DOT__exact_4to2_cout22 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__sum;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x3;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x3 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1 = 0;
    CData/*0:0*/ MUL4__DOT__exact_4to2_cout3;
    MUL4__DOT__exact_4to2_cout3 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_FA_stage1_2__carry;
    MUL4__DOT____Vcellout__u_FA_stage1_2__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_FA_stage1_2__sum;
    MUL4__DOT____Vcellout__u_FA_stage1_2__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_stage1_2__x2;
    MUL4__DOT____Vcellinp__u_FA_stage1_2__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_stage1_2__x1;
    MUL4__DOT____Vcellinp__u_FA_stage1_2__x1 = 0;
    CData/*0:0*/ MUL4__DOT__exact_4to2_cout4;
    MUL4__DOT__exact_4to2_cout4 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__sum;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x3;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x3 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_FA_stage1_3__carry;
    MUL4__DOT____Vcellout__u_FA_stage1_3__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_FA_stage1_3__sum;
    MUL4__DOT____Vcellout__u_FA_stage1_3__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_stage1_3__x2;
    MUL4__DOT____Vcellinp__u_FA_stage1_3__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_stage1_3__x1;
    MUL4__DOT____Vcellinp__u_FA_stage1_3__x1 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_FA_stage2_1__carry;
    MUL4__DOT____Vcellout__u_FA_stage2_1__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_FA_stage2_1__sum;
    MUL4__DOT____Vcellout__u_FA_stage2_1__sum = 0;
    CData/*0:0*/ MUL4__DOT__stage2_exact_4to2_cout1;
    MUL4__DOT__stage2_exact_4to2_cout1 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum = 0;
    CData/*0:0*/ MUL4__DOT__stage2_exact_4to2_cout2;
    MUL4__DOT__stage2_exact_4to2_cout2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4 = 0;
    CData/*0:0*/ MUL4__DOT__stage2_exact_4to2_cout3;
    MUL4__DOT__stage2_exact_4to2_cout3 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3 = 0;
    CData/*0:0*/ MUL4__DOT__stage2_exact_4to2_cout4;
    MUL4__DOT__stage2_exact_4to2_cout4 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum;
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2;
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_FA_3__carry;
    MUL4__DOT____Vcellout__u_FA_3__carry = 0;
    CData/*0:0*/ MUL4__DOT____Vcellout__u_FA_3__sum;
    MUL4__DOT____Vcellout__u_FA_3__sum = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_3__x2;
    MUL4__DOT____Vcellinp__u_FA_3__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_3__x1;
    MUL4__DOT____Vcellinp__u_FA_3__x1 = 0;
    CData/*0:0*/ MUL4__DOT__cout_HA_stage3_1;
    MUL4__DOT__cout_HA_stage3_1 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_HA_stage3_1__x2;
    MUL4__DOT____Vcellinp__u_HA_stage3_1__x2 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_HA_stage3_1__x1;
    MUL4__DOT____Vcellinp__u_HA_stage3_1__x1 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_1;
    MUL4__DOT__cout_FA_stage3_1 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_stage3_1__x2;
    MUL4__DOT____Vcellinp__u_FA_stage3_1__x2 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_2;
    MUL4__DOT__cout_FA_stage3_2 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_3;
    MUL4__DOT__cout_FA_stage3_3 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_stage3_3__x2;
    MUL4__DOT____Vcellinp__u_FA_stage3_3__x2 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_4;
    MUL4__DOT__cout_FA_stage3_4 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_stage3_4__x2;
    MUL4__DOT____Vcellinp__u_FA_stage3_4__x2 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_5;
    MUL4__DOT__cout_FA_stage3_5 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_6;
    MUL4__DOT__cout_FA_stage3_6 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_7;
    MUL4__DOT__cout_FA_stage3_7 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_8;
    MUL4__DOT__cout_FA_stage3_8 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_9;
    MUL4__DOT__cout_FA_stage3_9 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_10;
    MUL4__DOT__cout_FA_stage3_10 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_11;
    MUL4__DOT__cout_FA_stage3_11 = 0;
    CData/*0:0*/ MUL4__DOT__cout_FA_stage3_12;
    MUL4__DOT__cout_FA_stage3_12 = 0;
    CData/*0:0*/ MUL4__DOT____Vcellinp__u_FA_stage3_13__x2;
    MUL4__DOT____Vcellinp__u_FA_stage3_13__x2 = 0;
    CData/*0:0*/ MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0;
    MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0;
    MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0;
    MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ MUL4__DOT__u_exact_4to2_compressor_stage1_22__DOT____VdfgRegularize_h0d3b8a33_0_0;
    MUL4__DOT__u_exact_4to2_compressor_stage1_22__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0;
    MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ MUL4__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    MUL4__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0;
    MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    // Body
    MUL4__DOT____Vcellinp__u_FA_stage3_13__x2 = (1U 
                                                 & (((IData)(vlSelf->a) 
                                                     & (IData)(vlSelf->b)) 
                                                    >> 7U));
    MUL4__DOT____Vcellinp__u_FA_3__x1 = (IData)((((IData)(vlSelf->a) 
                                                  >> 7U) 
                                                 & ((IData)(vlSelf->b) 
                                                    >> 6U)));
    MUL4__DOT____Vcellinp__u_FA_3__x2 = (IData)((((IData)(vlSelf->a) 
                                                  >> 6U) 
                                                 & ((IData)(vlSelf->b) 
                                                    >> 7U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4 
        = (IData)((((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4 
        = (IData)((((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 5U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 6U));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4 
        = (IData)((((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    MUL4__DOT____Vcellinp__u_FA_stage3_4__x2 = (1U 
                                                & ((((IData)(vlSelf->a) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelf->b) 
                                                       >> 4U)) 
                                                   | ((IData)(vlSelf->a) 
                                                      & ((IData)(vlSelf->b) 
                                                         >> 5U))));
    MUL4__DOT____Vcellout__u_UCAC3_3__sum = (1U & (
                                                   (((IData)(vlSelf->a) 
                                                     >> 4U) 
                                                    & ((IData)(vlSelf->b) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->a) 
                                                       >> 2U) 
                                                      & ((IData)(vlSelf->b) 
                                                         >> 3U))));
    MUL4__DOT____Vcellinp__u_FA_stage3_3__x2 = (1U 
                                                & ((IData)(vlSelf->a) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 4U)));
    MUL4__DOT____Vcellout__u_UCAC3_2__sum = (1U & (
                                                   (((IData)(vlSelf->a) 
                                                     >> 3U) 
                                                    & ((IData)(vlSelf->b) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->a) 
                                                       >> 1U) 
                                                      & ((IData)(vlSelf->b) 
                                                         >> 3U))));
    MUL4__DOT____Vcellout__u_UCAC3_1__sum = (1U & (
                                                   (((IData)(vlSelf->a) 
                                                     >> 2U) 
                                                    & ((IData)(vlSelf->b) 
                                                       >> 1U)) 
                                                   | ((IData)(vlSelf->a) 
                                                      & ((IData)(vlSelf->b) 
                                                         >> 3U))));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    MUL4__DOT____Vcellinp__u_FA_stage3_1__x2 = (1U 
                                                & ((IData)(vlSelf->a) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 2U)));
    MUL4__DOT____Vcellinp__u_HA_stage3_1__x1 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->b)));
    MUL4__DOT____Vcellinp__u_HA_stage3_1__x2 = (1U 
                                                & ((IData)(vlSelf->a) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 1U)));
    MUL4__DOT____Vcellinp__u_FA_stage1_3__x1 = (IData)(
                                                       (((IData)(vlSelf->a) 
                                                         >> 7U) 
                                                        & ((IData)(vlSelf->b) 
                                                           >> 4U)));
    MUL4__DOT____Vcellinp__u_FA_stage1_3__x2 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 6U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 5U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4 
        = ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                 >> 7U));
    MUL4__DOT____Vcellinp__u_HA_stage1_1__x1 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 2U) 
                                                   & (IData)(vlSelf->b)));
    MUL4__DOT____Vcellinp__u_HA_stage1_1__x2 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    & (IData)(vlSelf->b)) 
                                                   >> 1U));
    MUL4__DOT____Vcellinp__u_FA_stage1_2__x1 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 6U)));
    MUL4__DOT____Vcellinp__u_FA_stage1_2__x2 = (IData)(
                                                       (((IData)(vlSelf->a) 
                                                         >> 2U) 
                                                        & ((IData)(vlSelf->b) 
                                                           >> 7U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    MUL4__DOT____Vcellinp__u_UCAC3_4__x2 = (1U & (((IData)(vlSelf->a) 
                                                   >> 5U) 
                                                  & ((IData)(vlSelf->b) 
                                                     >> 1U)));
    MUL4__DOT____Vcellinp__u_UCAC3_4__x4 = (1U & (((IData)(vlSelf->a) 
                                                   & (IData)(vlSelf->b)) 
                                                  >> 3U));
    MUL4__DOT____Vcellinp__u_FA_stage1_1__x1 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 2U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 4U)));
    MUL4__DOT____Vcellinp__u_FA_stage1_1__x2 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 5U)));
    MUL4__DOT____Vcellinp__u_FA_stage1_1__x3 = (1U 
                                                & ((IData)(vlSelf->a) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 6U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 4U));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1 
        = (1U & (((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2 
        = (1U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x3 
        = (1U & (((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 3U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 5U));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & (IData)(vlSelf->b)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 1U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1 
        = (1U & (((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2 
        = (1U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x3 
        = (IData)((((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 2U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 1U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    MUL4__DOT__cout_HA_stage3_1 = ((IData)(MUL4__DOT____Vcellinp__u_HA_stage3_1__x1) 
                                   & (IData)(MUL4__DOT____Vcellinp__u_HA_stage3_1__x2));
    MUL4__DOT____Vcellout__u_HA_stage1_1__carry = ((IData)(MUL4__DOT____Vcellinp__u_HA_stage1_1__x1) 
                                                   & (IData)(MUL4__DOT____Vcellinp__u_HA_stage1_1__x2));
    MUL4__DOT____Vcellout__u_HA_stage1_1__sum = ((IData)(MUL4__DOT____Vcellinp__u_HA_stage1_1__x1) 
                                                 ^ (IData)(MUL4__DOT____Vcellinp__u_HA_stage1_1__x2));
    MUL4__DOT____Vcellout__u_UCAC3_4__sum = ((IData)(MUL4__DOT____Vcellinp__u_UCAC3_4__x2) 
                                             | (IData)(MUL4__DOT____Vcellinp__u_UCAC3_4__x4));
    MUL4__DOT__ECM_Carry = (1U & ((((IData)(vlSelf->a) 
                                    >> 6U) & (IData)(vlSelf->b)) 
                                  | ((IData)(MUL4__DOT____Vcellinp__u_UCAC3_4__x2) 
                                     | ((((IData)(vlSelf->a) 
                                          >> 4U) & 
                                         ((IData)(vlSelf->b) 
                                          >> 2U)) | (IData)(MUL4__DOT____Vcellinp__u_UCAC3_4__x4)))));
    MUL4__DOT____Vcellout__u_FA_stage1_1__sum = ((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_1__x1) 
                                                 ^ 
                                                 ((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_1__x2) 
                                                  ^ (IData)(MUL4__DOT____Vcellinp__u_FA_stage1_1__x3)));
    MUL4__DOT__stage1_FA1_carry = (((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_1__x1) 
                                    & (IData)(MUL4__DOT____Vcellinp__u_FA_stage1_1__x2)) 
                                   | (((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_1__x2) 
                                       | (IData)(MUL4__DOT____Vcellinp__u_FA_stage1_1__x1)) 
                                      & (IData)(MUL4__DOT____Vcellinp__u_FA_stage1_1__x3)));
    MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1) 
           ^ ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x3)));
    MUL4__DOT__exact_4to2_cout12 = (((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1) 
                                     & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2)) 
                                    | ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x3) 
                                       & ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x1) 
                                          | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x2))));
    MUL4__DOT__exact_4to2_cout4 = (((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1) 
                                    & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2)) 
                                   | ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x3) 
                                      & ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1) 
                                         | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2))));
    MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x1) 
           ^ ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x2) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x3)));
    MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1) 
           ^ ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x3)));
    MUL4__DOT__exact_4to2_cout11 = (((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1) 
                                     & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2)) 
                                    | ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x3) 
                                       & ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x1) 
                                          | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x2))));
    MUL4__DOT__u_exact_4to2_compressor_stage1_22__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1) 
           ^ ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x3)));
    MUL4__DOT__exact_4to2_cout22 = (((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1) 
                                     & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2)) 
                                    | ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x3) 
                                       & ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x1) 
                                          | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_22__x2))));
    MUL4__DOT__exact_4to2_cout3 = (((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                    & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2)) 
                                   | ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3) 
                                      & ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                         | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2))));
    MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
           ^ ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3)));
    MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1) 
           ^ ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x3)));
    MUL4__DOT__exact_4to2_cout21 = (((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1) 
                                     & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2)) 
                                    | ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x3) 
                                       & ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x1) 
                                          | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x2))));
    MUL4__DOT__cout_FA_stage3_1 = (((IData)(MUL4__DOT____Vcellout__u_HA_stage1_1__sum) 
                                    & (IData)(MUL4__DOT____Vcellinp__u_FA_stage3_1__x2)) 
                                   | (((IData)(MUL4__DOT____Vcellinp__u_FA_stage3_1__x2) 
                                       | (IData)(MUL4__DOT____Vcellout__u_HA_stage1_1__sum)) 
                                      & (IData)(MUL4__DOT__cout_HA_stage3_1)));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum 
        = ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(MUL4__DOT__stage1_FA1_carry) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4)));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry 
        = (((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4)) 
           | ((IData)(MUL4__DOT__stage1_FA1_carry) 
              & ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_12__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_12__x4))));
    MUL4__DOT____Vcellout__u_FA_stage1_3__carry = (
                                                   ((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_3__x1) 
                                                    & (IData)(MUL4__DOT____Vcellinp__u_FA_stage1_3__x2)) 
                                                   | (((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_3__x2) 
                                                       | (IData)(MUL4__DOT____Vcellinp__u_FA_stage1_3__x1)) 
                                                      & (IData)(MUL4__DOT__exact_4to2_cout4)));
    MUL4__DOT____Vcellout__u_FA_stage1_3__sum = ((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_3__x1) 
                                                 ^ 
                                                 ((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_3__x2) 
                                                  ^ (IData)(MUL4__DOT__exact_4to2_cout4)));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum 
        = ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(MUL4__DOT__ECM_Carry) ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4)));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry 
        = (((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4)) 
           | ((IData)(MUL4__DOT__ECM_Carry) & ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_11__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                                               | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_11__x4))));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__sum 
        = ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_22__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ (IData)(MUL4__DOT__exact_4to2_cout12));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry 
        = ((IData)(MUL4__DOT__exact_4to2_cout12) & (IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_22__DOT____VdfgRegularize_h0d3b8a33_0_0));
    MUL4__DOT____Vcellout__u_FA_stage1_2__sum = ((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_2__x1) 
                                                 ^ 
                                                 ((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_2__x2) 
                                                  ^ (IData)(MUL4__DOT__exact_4to2_cout22)));
    MUL4__DOT____Vcellout__u_FA_stage1_2__carry = (
                                                   ((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_2__x1) 
                                                    & (IData)(MUL4__DOT____Vcellinp__u_FA_stage1_2__x2)) 
                                                   | (((IData)(MUL4__DOT____Vcellinp__u_FA_stage1_2__x2) 
                                                       | (IData)(MUL4__DOT____Vcellinp__u_FA_stage1_2__x1)) 
                                                      & (IData)(MUL4__DOT__exact_4to2_cout22)));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry 
        = (((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4)) 
           | ((IData)(MUL4__DOT__exact_4to2_cout3) 
              & ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4))));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__sum 
        = ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(MUL4__DOT__exact_4to2_cout3) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_4__x4)));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__sum 
        = ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(MUL4__DOT__exact_4to2_cout11) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4)));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry 
        = (((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4)) 
           | ((IData)(MUL4__DOT__exact_4to2_cout11) 
              & ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_21__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_21__x4))));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry 
        = (((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)) 
           | ((IData)(MUL4__DOT__exact_4to2_cout21) 
              & ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4))));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum 
        = ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(MUL4__DOT__exact_4to2_cout21) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)));
    MUL4__DOT__cout_FA_stage3_2 = (((IData)(MUL4__DOT____Vcellout__u_UCAC3_1__sum) 
                                    & (IData)(MUL4__DOT____Vcellout__u_HA_stage1_1__carry)) 
                                   | (((IData)(MUL4__DOT____Vcellout__u_HA_stage1_1__carry) 
                                       | (IData)(MUL4__DOT____Vcellout__u_UCAC3_1__sum)) 
                                      & (IData)(MUL4__DOT__cout_FA_stage3_1)));
    MUL4__DOT__stage2_exact_4to2_cout4 = (((IData)(MUL4__DOT____Vcellout__u_FA_stage1_3__carry) 
                                           & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2)) 
                                          | ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3) 
                                             & ((IData)(MUL4__DOT____Vcellout__u_FA_stage1_3__carry) 
                                                | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2))));
    MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(MUL4__DOT____Vcellout__u_FA_stage1_3__carry) 
           ^ ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3)));
    MUL4__DOT__stage2_exact_4to2_cout3 = (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry) 
                                           & (IData)(MUL4__DOT____Vcellout__u_FA_stage1_3__sum)) 
                                          | ((IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3) 
                                             & ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry) 
                                                | (IData)(MUL4__DOT____Vcellout__u_FA_stage1_3__sum))));
    MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__carry) 
           ^ ((IData)(MUL4__DOT____Vcellout__u_FA_stage1_3__sum) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3)));
    MUL4__DOT____Vcellout__u_FA_stage2_1__carry = (
                                                   ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry) 
                                                    & (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry)) 
                                                   | (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry) 
                                                       | (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry)) 
                                                      & (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__sum)));
    MUL4__DOT____Vcellout__u_FA_stage2_1__sum = ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__carry) 
                                                 ^ 
                                                 ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__carry) 
                                                  ^ (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__sum)));
    MUL4__DOT__stage2_exact_4to2_cout2 = (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                           & (IData)(MUL4__DOT____Vcellout__u_FA_stage1_2__carry)) 
                                          | ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__sum) 
                                             & ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                                | (IData)(MUL4__DOT____Vcellout__u_FA_stage1_2__carry))));
    MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
           ^ ((IData)(MUL4__DOT____Vcellout__u_FA_stage1_2__carry) 
              ^ (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_4__sum)));
    MUL4__DOT__stage2_exact_4to2_cout1 = (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry) 
                                           & (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry)) 
                                          | ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum) 
                                             & ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry) 
                                                | (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry))));
    MUL4__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_21__carry) 
           ^ ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__carry) 
              ^ (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum)));
    MUL4__DOT__cout_FA_stage3_3 = (((IData)(MUL4__DOT____Vcellout__u_UCAC3_2__sum) 
                                    & (IData)(MUL4__DOT____Vcellinp__u_FA_stage3_3__x2)) 
                                   | (((IData)(MUL4__DOT____Vcellinp__u_FA_stage3_3__x2) 
                                       | (IData)(MUL4__DOT____Vcellout__u_UCAC3_2__sum)) 
                                      & (IData)(MUL4__DOT__cout_FA_stage3_2)));
    MUL4__DOT____Vcellout__u_FA_3__carry = (((IData)(MUL4__DOT____Vcellinp__u_FA_3__x1) 
                                             & (IData)(MUL4__DOT____Vcellinp__u_FA_3__x2)) 
                                            | (((IData)(MUL4__DOT____Vcellinp__u_FA_3__x2) 
                                                | (IData)(MUL4__DOT____Vcellinp__u_FA_3__x1)) 
                                               & (IData)(MUL4__DOT__stage2_exact_4to2_cout4)));
    MUL4__DOT____Vcellout__u_FA_3__sum = ((IData)(MUL4__DOT____Vcellinp__u_FA_3__x1) 
                                          ^ ((IData)(MUL4__DOT____Vcellinp__u_FA_3__x2) 
                                             ^ (IData)(MUL4__DOT__stage2_exact_4to2_cout4)));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry 
        = (((IData)(MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4)) 
           | ((IData)(MUL4__DOT__stage2_exact_4to2_cout3) 
              & ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4))));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum 
        = ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(MUL4__DOT__stage2_exact_4to2_cout3) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4)));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry 
        = (((IData)(MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4)) 
           | ((IData)(MUL4__DOT__stage2_exact_4to2_cout2) 
              & ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4))));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum 
        = ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(MUL4__DOT__stage2_exact_4to2_cout2) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4)));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry 
        = (((IData)(MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4)) 
           | ((IData)(MUL4__DOT__stage2_exact_4to2_cout1) 
              & ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4))));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum 
        = ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(MUL4__DOT__stage2_exact_4to2_cout1) 
              ^ (IData)(MUL4__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4)));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry 
        = ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           & (IData)(MUL4__DOT____Vcellout__u_FA_stage1_2__sum));
    MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum 
        = ((IData)(MUL4__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ (IData)(MUL4__DOT____Vcellout__u_FA_stage1_2__sum));
    MUL4__DOT__cout_FA_stage3_4 = (((IData)(MUL4__DOT____Vcellout__u_UCAC3_3__sum) 
                                    & (IData)(MUL4__DOT____Vcellinp__u_FA_stage3_4__x2)) 
                                   | (((IData)(MUL4__DOT____Vcellinp__u_FA_stage3_4__x2) 
                                       | (IData)(MUL4__DOT____Vcellout__u_UCAC3_3__sum)) 
                                      & (IData)(MUL4__DOT__cout_FA_stage3_3)));
    MUL4__DOT__cout_FA_stage3_5 = (((IData)(MUL4__DOT____Vcellout__u_UCAC3_4__sum) 
                                    & (IData)(MUL4__DOT____Vcellout__u_FA_stage1_1__sum)) 
                                   | (((IData)(MUL4__DOT____Vcellout__u_FA_stage1_1__sum) 
                                       | (IData)(MUL4__DOT____Vcellout__u_UCAC3_4__sum)) 
                                      & (IData)(MUL4__DOT__cout_FA_stage3_4)));
    MUL4__DOT__cout_FA_stage3_6 = (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum) 
                                    & (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum)) 
                                   | (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum) 
                                       | (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum)) 
                                      & (IData)(MUL4__DOT__cout_FA_stage3_5)));
    MUL4__DOT__cout_FA_stage3_7 = (((IData)(MUL4__DOT____Vcellout__u_FA_stage2_1__sum) 
                                    & (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__sum)) 
                                   | (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__sum) 
                                       | (IData)(MUL4__DOT____Vcellout__u_FA_stage2_1__sum)) 
                                      & (IData)(MUL4__DOT__cout_FA_stage3_6)));
    MUL4__DOT__cout_FA_stage3_8 = (((IData)(MUL4__DOT____Vcellout__u_FA_stage2_1__carry) 
                                    & (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum)) 
                                   | (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                       | (IData)(MUL4__DOT____Vcellout__u_FA_stage2_1__carry)) 
                                      & (IData)(MUL4__DOT__cout_FA_stage3_7)));
    MUL4__DOT__cout_FA_stage3_9 = (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                    & (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum)) 
                                   | (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                       | (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry)) 
                                      & (IData)(MUL4__DOT__cout_FA_stage3_8)));
    MUL4__DOT__cout_FA_stage3_10 = (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                     & (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum)) 
                                    | (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                        | (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry)) 
                                       & (IData)(MUL4__DOT__cout_FA_stage3_9)));
    MUL4__DOT__cout_FA_stage3_11 = (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                     & (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum)) 
                                    | (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                        | (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry)) 
                                       & (IData)(MUL4__DOT__cout_FA_stage3_10)));
    MUL4__DOT__cout_FA_stage3_12 = (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                     & (IData)(MUL4__DOT____Vcellout__u_FA_3__sum)) 
                                    | (((IData)(MUL4__DOT____Vcellout__u_FA_3__sum) 
                                        | (IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry)) 
                                       & (IData)(MUL4__DOT__cout_FA_stage3_11)));
    vlSelf->final_sum = (((((IData)(MUL4__DOT____Vcellout__u_FA_3__carry) 
                            & (IData)(MUL4__DOT____Vcellinp__u_FA_stage3_13__x2)) 
                           | (((IData)(MUL4__DOT____Vcellinp__u_FA_stage3_13__x2) 
                               | (IData)(MUL4__DOT____Vcellout__u_FA_3__carry)) 
                              & (IData)(MUL4__DOT__cout_FA_stage3_12))) 
                          << 0xfU) | ((((IData)(MUL4__DOT____Vcellout__u_FA_3__carry) 
                                        ^ ((IData)(MUL4__DOT____Vcellinp__u_FA_stage3_13__x2) 
                                           ^ (IData)(MUL4__DOT__cout_FA_stage3_12))) 
                                       << 0xeU) | (
                                                   (((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                                     ^ 
                                                     ((IData)(MUL4__DOT____Vcellout__u_FA_3__sum) 
                                                      ^ (IData)(MUL4__DOT__cout_FA_stage3_11))) 
                                                    << 0xdU) 
                                                   | ((((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                                        ^ 
                                                        ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                                         ^ (IData)(MUL4__DOT__cout_FA_stage3_10))) 
                                                       << 0xcU) 
                                                      | ((((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                                           ^ 
                                                           ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                                            ^ (IData)(MUL4__DOT__cout_FA_stage3_9))) 
                                                          << 0xbU) 
                                                         | ((((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                                              ^ 
                                                              ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                                               ^ (IData)(MUL4__DOT__cout_FA_stage3_8))) 
                                                             << 0xaU) 
                                                            | ((((IData)(MUL4__DOT____Vcellout__u_FA_stage2_1__carry) 
                                                                 ^ 
                                                                 ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                                                  ^ (IData)(MUL4__DOT__cout_FA_stage3_7))) 
                                                                << 9U) 
                                                               | ((((IData)(MUL4__DOT____Vcellout__u_FA_stage2_1__sum) 
                                                                    ^ 
                                                                    ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_22__sum) 
                                                                     ^ (IData)(MUL4__DOT__cout_FA_stage3_6))) 
                                                                   << 8U) 
                                                                  | ((((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_11__sum) 
                                                                       ^ 
                                                                       ((IData)(MUL4__DOT____Vcellout__u_exact_4to2_compressor_stage1_12__sum) 
                                                                        ^ (IData)(MUL4__DOT__cout_FA_stage3_5))) 
                                                                      << 7U) 
                                                                     | ((((IData)(MUL4__DOT____Vcellout__u_UCAC3_4__sum) 
                                                                          ^ 
                                                                          ((IData)(MUL4__DOT____Vcellout__u_FA_stage1_1__sum) 
                                                                           ^ (IData)(MUL4__DOT__cout_FA_stage3_4))) 
                                                                         << 6U) 
                                                                        | ((((IData)(MUL4__DOT____Vcellout__u_UCAC3_3__sum) 
                                                                             ^ 
                                                                             ((IData)(MUL4__DOT____Vcellinp__u_FA_stage3_4__x2) 
                                                                              ^ (IData)(MUL4__DOT__cout_FA_stage3_3))) 
                                                                            << 5U) 
                                                                           | ((((IData)(MUL4__DOT____Vcellout__u_UCAC3_2__sum) 
                                                                                ^ 
                                                                                ((IData)(MUL4__DOT____Vcellinp__u_FA_stage3_3__x2) 
                                                                                ^ (IData)(MUL4__DOT__cout_FA_stage3_2))) 
                                                                               << 4U) 
                                                                              | ((((IData)(MUL4__DOT____Vcellout__u_UCAC3_1__sum) 
                                                                                ^ 
                                                                                ((IData)(MUL4__DOT____Vcellout__u_HA_stage1_1__carry) 
                                                                                ^ (IData)(MUL4__DOT__cout_FA_stage3_1))) 
                                                                                << 3U) 
                                                                                | ((((IData)(MUL4__DOT____Vcellout__u_HA_stage1_1__sum) 
                                                                                ^ 
                                                                                ((IData)(MUL4__DOT____Vcellinp__u_FA_stage3_1__x2) 
                                                                                ^ (IData)(MUL4__DOT__cout_HA_stage3_1))) 
                                                                                << 2U) 
                                                                                | ((((IData)(MUL4__DOT____Vcellinp__u_HA_stage3_1__x1) 
                                                                                ^ (IData)(MUL4__DOT____Vcellinp__u_HA_stage3_1__x2)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->a) 
                                                                                & (IData)(vlSelf->b))))))))))))))))));
}

void VMUL4___024root___eval_triggers__ico(VMUL4___024root* vlSelf);

bool VMUL4___024root___eval_phase__ico(VMUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUL4___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMUL4___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VMUL4___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMUL4___024root___eval_act(VMUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUL4___024root___eval_act\n"); );
}

void VMUL4___024root___eval_nba(VMUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUL4___024root___eval_nba\n"); );
}

void VMUL4___024root___eval_triggers__act(VMUL4___024root* vlSelf);

bool VMUL4___024root___eval_phase__act(VMUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUL4___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMUL4___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMUL4___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMUL4___024root___eval_phase__nba(VMUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUL4___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMUL4___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMUL4___024root___dump_triggers__ico(VMUL4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMUL4___024root___dump_triggers__nba(VMUL4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMUL4___024root___dump_triggers__act(VMUL4___024root* vlSelf);
#endif  // VL_DEBUG

void VMUL4___024root___eval(VMUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUL4___024root___eval\n"); );
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
            VMUL4___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/MUL4.v", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMUL4___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMUL4___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/MUL4.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMUL4___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../verilog/../verilog/MUL4.v", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMUL4___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMUL4___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMUL4___024root___eval_debug_assertions(VMUL4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMUL4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUL4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
