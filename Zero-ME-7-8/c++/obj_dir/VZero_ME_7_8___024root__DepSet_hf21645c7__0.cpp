// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VZero_ME_7_8.h for the primary calling header

#include "VZero_ME_7_8__pch.h"
#include "VZero_ME_7_8___024root.h"

void VZero_ME_7_8___024root___ico_sequent__TOP__0(VZero_ME_7_8___024root* vlSelf);

void VZero_ME_7_8___024root___eval_ico(VZero_ME_7_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VZero_ME_7_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZero_ME_7_8___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VZero_ME_7_8___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VZero_ME_7_8___024root___ico_sequent__TOP__0(VZero_ME_7_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VZero_ME_7_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZero_ME_7_8___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ Zero_ME_7_8__DOT__ECM_Carry;
    Zero_ME_7_8__DOT__ECM_Carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__exact_4to2_cout1;
    Zero_ME_7_8__DOT__exact_4to2_cout1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__exact_4to2_cout2;
    Zero_ME_7_8__DOT__exact_4to2_cout2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__exact_4to2_cout3;
    Zero_ME_7_8__DOT__exact_4to2_cout3 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_FA_1__carry;
    Zero_ME_7_8__DOT____Vcellout__u_FA_1__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_FA_1__sum;
    Zero_ME_7_8__DOT____Vcellout__u_FA_1__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x3;
    Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x3 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x2;
    Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x1;
    Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_FA_2__carry;
    Zero_ME_7_8__DOT____Vcellout__u_FA_2__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_FA_2__sum;
    Zero_ME_7_8__DOT____Vcellout__u_FA_2__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x2;
    Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x1;
    Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_HA_1__carry;
    Zero_ME_7_8__DOT____Vcellout__u_HA_1__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_HA_1__sum;
    Zero_ME_7_8__DOT____Vcellout__u_HA_1__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_HA_1__x2;
    Zero_ME_7_8__DOT____Vcellinp__u_HA_1__x2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_HA_1__x1;
    Zero_ME_7_8__DOT____Vcellinp__u_HA_1__x1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_1__x3;
    Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_1__x3 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_1__C2;
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_1__C2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_1__C1;
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_1__C1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C2;
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C1;
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_3__C2;
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_3__C2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_3__C1;
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_3__C1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_only_dual_carry_compressor_3__x4;
    Zero_ME_7_8__DOT____Vcellinp__u_only_dual_carry_compressor_3__x4 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__carry;
    Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__sum;
    Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__stage2_exact_4to2_cout1;
    Zero_ME_7_8__DOT__stage2_exact_4to2_cout1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__stage2_exact_4to2_cout2;
    Zero_ME_7_8__DOT__stage2_exact_4to2_cout2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__stage2_exact_4to2_cout3;
    Zero_ME_7_8__DOT__stage2_exact_4to2_cout3 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__stage2_exact_4to2_cout4;
    Zero_ME_7_8__DOT__stage2_exact_4to2_cout4 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum;
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2;
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__carry;
    Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__carry = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__sum;
    Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__sum = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x2;
    Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x1;
    Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__cout_HA_stage3_1;
    Zero_ME_7_8__DOT__cout_HA_stage3_1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__cout_FA_stage3_1;
    Zero_ME_7_8__DOT__cout_FA_stage3_1 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__cout_FA_stage3_2;
    Zero_ME_7_8__DOT__cout_FA_stage3_2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__cout_FA_stage3_3;
    Zero_ME_7_8__DOT__cout_FA_stage3_3 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__cout_FA_stage3_4;
    Zero_ME_7_8__DOT__cout_FA_stage3_4 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__cout_FA_stage3_5;
    Zero_ME_7_8__DOT__cout_FA_stage3_5 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__cout_FA_stage3_6;
    Zero_ME_7_8__DOT__cout_FA_stage3_6 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__cout_FA_stage3_7;
    Zero_ME_7_8__DOT__cout_FA_stage3_7 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____Vcellinp__u_FA_stage3_8__x2;
    Zero_ME_7_8__DOT____Vcellinp__u_FA_stage3_8__x2 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_12;
    Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_12 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_16;
    Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_16 = 0;
    CData/*3:0*/ Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_22;
    Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_22 = 0;
    CData/*3:0*/ Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_23;
    Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_23 = 0;
    CData/*1:0*/ Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_24;
    Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_24 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    // Body
    Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_1__x3 
        = (1U & ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                       >> 4U)));
    Zero_ME_7_8__DOT____Vcellinp__u_FA_stage3_8__x2 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 7U));
    Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 6U)));
    Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x2 
        = (IData)((((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4 
        = (IData)((((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4 
        = (IData)((((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 5U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 6U));
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_1__C2 
        = (1U & (IData)(((3U == (3U & (IData)(vlSelf->a))) 
                         & (0x30U == (0x30U & (IData)(vlSelf->b))))));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4 
        = (IData)((((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x1 = (IData)(
                                                       (((IData)(vlSelf->a) 
                                                         >> 7U) 
                                                        & ((IData)(vlSelf->b) 
                                                           >> 4U)));
    Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x2 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 6U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 5U)));
    Zero_ME_7_8__DOT____Vcellinp__u_HA_1__x1 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 6U)));
    Zero_ME_7_8__DOT____Vcellinp__u_HA_1__x2 = (IData)(
                                                       (((IData)(vlSelf->a) 
                                                         >> 2U) 
                                                        & ((IData)(vlSelf->b) 
                                                           >> 7U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_22 
        = ((((IData)((((IData)(vlSelf->a) >> 7U) & (IData)(vlSelf->b))) 
             << 3U) | ((4U & (((IData)(vlSelf->a) >> 4U) 
                              & ((IData)(vlSelf->b) 
                                 << 2U))) | ((2U & 
                                              (((IData)(vlSelf->a) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->b) 
                                                  << 1U))) 
                                             | (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 4U) 
                                                   & (IData)(vlSelf->b)))))) 
           | ((8U & (((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                                   << 2U))) 
              | ((4U & (((IData)(vlSelf->a) >> 3U) 
                        & ((IData)(vlSelf->b) << 1U))) 
                 | ((2U & (((IData)(vlSelf->a) >> 3U) 
                           & (IData)(vlSelf->b))) | 
                    (1U & (((IData)(vlSelf->a) >> 3U) 
                           & ((IData)(vlSelf->b) >> 1U)))))));
    Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_23 
        = (((8U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                                 << 1U))) 
            | ((4U & (((IData)(vlSelf->a) >> 2U) & (IData)(vlSelf->b))) 
               | ((2U & (((IData)(vlSelf->a) >> 2U) 
                         & ((IData)(vlSelf->b) >> 1U))) 
                  | (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                           >> 2U))))) | ((8U & (((IData)(vlSelf->a) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->b))) 
                                         | ((4U & (
                                                   ((IData)(vlSelf->a) 
                                                    & (IData)(vlSelf->b)) 
                                                   >> 1U)) 
                                            | ((2U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 2U))) 
                                               | (1U 
                                                  & (((IData)(vlSelf->a) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->b) 
                                                        >> 3U)))))));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 4U));
    Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x1 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 5U)));
    Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x2 = (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 2U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 6U)));
    Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x3 = (IData)(
                                                       (((IData)(vlSelf->a) 
                                                         >> 1U) 
                                                        & ((IData)(vlSelf->b) 
                                                           >> 7U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    Zero_ME_7_8__DOT____Vcellinp__u_only_dual_carry_compressor_3__x4 
        = (1U & ((((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                                >> 6U)) 
                 | ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                          >> 7U))));
    Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_12 
        = (1U & (((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_16 
        = (1U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 3U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 5U));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 2U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 1U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Zero_ME_7_8__DOT____Vcellout__u_HA_1__sum = ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_HA_1__x1) 
                                                 ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_HA_1__x2));
    Zero_ME_7_8__DOT____Vcellout__u_HA_1__carry = ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_HA_1__x1) 
                                                   & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_HA_1__x2));
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C1 
        = (1U & (((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_22) 
                  | (IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_23)) 
                 >> 2U));
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_1__C1 
        = (1U & (((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_22) 
                  | (IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_23)) 
                 >> 1U));
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_3__C1 
        = (1U & (((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_22) 
                  | (IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_23)) 
                 >> 3U));
    Zero_ME_7_8__DOT____Vcellout__u_FA_1__sum = ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x1) 
                                                 ^ 
                                                 ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x2) 
                                                  ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x3)));
    Zero_ME_7_8__DOT____Vcellout__u_FA_1__carry = (
                                                   ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x1) 
                                                    & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x2)) 
                                                   | (((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x2) 
                                                       | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x1)) 
                                                      & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_1__x3)));
    Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_24 
        = ((((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_12) 
             << 1U) | (1U & (((IData)(vlSelf->a) >> 2U) 
                             & ((IData)(vlSelf->b) 
                                >> 4U)))) | (((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_16) 
                                              << 1U) 
                                             | (1U 
                                                & (((IData)(vlSelf->a) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 5U)))));
    Zero_ME_7_8__DOT__ECM_Carry = (((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_12) 
                                    | (IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_16)) 
                                   & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_only_dual_carry_compressor_3__x4));
    Zero_ME_7_8__DOT__exact_4to2_cout3 = (((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                           & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2)) 
                                          | ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3) 
                                             & ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                                | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2))));
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
           ^ ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3)));
    Zero_ME_7_8__DOT__exact_4to2_cout2 = (((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
                                           & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2)) 
                                          | ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3) 
                                             & ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
                                                | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2))));
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
           ^ ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3)));
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
           ^ ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3)));
    Zero_ME_7_8__DOT__exact_4to2_cout1 = (((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                                           & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2)) 
                                          | ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3) 
                                             & ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                                                | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2))));
    Zero_ME_7_8__DOT__cout_HA_stage3_1 = ((IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_1__C1) 
                                          & (IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_1__C2));
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_3__C2 
        = (((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_24) 
            >> 1U) & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_only_dual_carry_compressor_3__x4));
    Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C2 
        = (1U & ((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_24) 
                 & ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                          >> 6U))));
    Zero_ME_7_8__DOT____Vcellout__u_FA_2__carry = (
                                                   ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x1) 
                                                    & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x2)) 
                                                   | (((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x2) 
                                                       | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x1)) 
                                                      & (IData)(Zero_ME_7_8__DOT__exact_4to2_cout3)));
    Zero_ME_7_8__DOT____Vcellout__u_FA_2__sum = ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x1) 
                                                 ^ 
                                                 ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_2__x2) 
                                                  ^ (IData)(Zero_ME_7_8__DOT__exact_4to2_cout3)));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry 
        = (((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)) 
           | ((IData)(Zero_ME_7_8__DOT__exact_4to2_cout2) 
              & ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4))));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum 
        = ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Zero_ME_7_8__DOT__exact_4to2_cout2) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum 
        = ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Zero_ME_7_8__DOT__ECM_Carry) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4)));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry 
        = (((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4)) 
           | ((IData)(Zero_ME_7_8__DOT__ECM_Carry) 
              & ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4))));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry 
        = (((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)) 
           | ((IData)(Zero_ME_7_8__DOT__exact_4to2_cout1) 
              & ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4))));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum 
        = ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Zero_ME_7_8__DOT__exact_4to2_cout1) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)));
    Zero_ME_7_8__DOT__cout_FA_stage3_1 = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C1) 
                                           & (IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C2)) 
                                          | (((IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C2) 
                                              | (IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C1)) 
                                             & (IData)(Zero_ME_7_8__DOT__cout_HA_stage3_1)));
    Zero_ME_7_8__DOT__stage2_exact_4to2_cout4 = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_2__carry) 
                                                  & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2)) 
                                                 | ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3) 
                                                    & ((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_2__carry) 
                                                       | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2))));
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_2__carry) 
           ^ ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3)));
    Zero_ME_7_8__DOT__stage2_exact_4to2_cout3 = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                                  & (IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_2__sum)) 
                                                 | ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3) 
                                                    & ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                                       | (IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_2__sum))));
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
           ^ ((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_2__sum) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3)));
    Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__carry 
        = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
            & (IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_1__sum)) 
           | (((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_1__sum) 
               | (IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum)) 
              & (IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_3__C1)));
    Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__sum 
        = ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
           ^ ((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_1__sum) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_3__C1)));
    Zero_ME_7_8__DOT__stage2_exact_4to2_cout2 = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
                                                  & (IData)(Zero_ME_7_8__DOT____Vcellout__u_HA_1__carry)) 
                                                 | ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum) 
                                                    & ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
                                                       | (IData)(Zero_ME_7_8__DOT____Vcellout__u_HA_1__carry))));
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
           ^ ((IData)(Zero_ME_7_8__DOT____Vcellout__u_HA_1__carry) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum)));
    Zero_ME_7_8__DOT__stage2_exact_4to2_cout1 = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
                                                  & (IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_1__carry)) 
                                                 | ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum) 
                                                    & ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
                                                       | (IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_1__carry))));
    Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
           ^ ((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_1__carry) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum)));
    Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__carry 
        = (((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x1) 
            & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x2)) 
           | (((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x2) 
               | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x1)) 
              & (IData)(Zero_ME_7_8__DOT__stage2_exact_4to2_cout4)));
    Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__sum 
        = ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x1) 
           ^ ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_3__x2) 
              ^ (IData)(Zero_ME_7_8__DOT__stage2_exact_4to2_cout4)));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry 
        = (((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4)) 
           | ((IData)(Zero_ME_7_8__DOT__stage2_exact_4to2_cout3) 
              & ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4))));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum 
        = ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Zero_ME_7_8__DOT__stage2_exact_4to2_cout3) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4)));
    Zero_ME_7_8__DOT__cout_FA_stage3_2 = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__sum) 
                                           & (IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_3__C2)) 
                                          | (((IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_3__C2) 
                                              | (IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__sum)) 
                                             & (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_1)));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry 
        = (((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4)) 
           | ((IData)(Zero_ME_7_8__DOT__stage2_exact_4to2_cout2) 
              & ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4))));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum 
        = ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Zero_ME_7_8__DOT__stage2_exact_4to2_cout2) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4)));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry 
        = (((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4)) 
           | ((IData)(Zero_ME_7_8__DOT__stage2_exact_4to2_cout1) 
              & ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4))));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum 
        = ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Zero_ME_7_8__DOT__stage2_exact_4to2_cout1) 
              ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4)));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry 
        = ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           & (IData)(Zero_ME_7_8__DOT____Vcellout__u_HA_1__sum));
    Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum 
        = ((IData)(Zero_ME_7_8__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ (IData)(Zero_ME_7_8__DOT____Vcellout__u_HA_1__sum));
    Zero_ME_7_8__DOT__cout_FA_stage3_3 = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__carry) 
                                           & (IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum)) 
                                          | (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                              | (IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__carry)) 
                                             & (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_2)));
    Zero_ME_7_8__DOT__cout_FA_stage3_4 = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                           & (IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum)) 
                                          | (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                              | (IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry)) 
                                             & (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_3)));
    Zero_ME_7_8__DOT__cout_FA_stage3_5 = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                           & (IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum)) 
                                          | (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                              | (IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry)) 
                                             & (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_4)));
    Zero_ME_7_8__DOT__cout_FA_stage3_6 = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                           & (IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum)) 
                                          | (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                              | (IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry)) 
                                             & (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_5)));
    Zero_ME_7_8__DOT__cout_FA_stage3_7 = (((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                           & (IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__sum)) 
                                          | (((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__sum) 
                                              | (IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry)) 
                                             & (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_6)));
    vlSelf->final_sum = (8U | (((((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__carry) 
                                  & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_stage3_8__x2)) 
                                 | (((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_stage3_8__x2) 
                                     | (IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__carry)) 
                                    & (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_7))) 
                                << 0xfU) | ((((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__carry) 
                                              ^ ((IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_stage3_8__x2) 
                                                 ^ (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_7))) 
                                             << 0xeU) 
                                            | ((((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                                 ^ 
                                                 ((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_3__sum) 
                                                  ^ (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_6))) 
                                                << 0xdU) 
                                               | ((((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                                    ^ 
                                                    ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                                     ^ (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_5))) 
                                                   << 0xcU) 
                                                  | ((((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                                       ^ 
                                                       ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                                        ^ (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_4))) 
                                                      << 0xbU) 
                                                     | ((((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                                          ^ 
                                                          ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                                           ^ (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_3))) 
                                                         << 0xaU) 
                                                        | ((((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__carry) 
                                                             ^ 
                                                             ((IData)(Zero_ME_7_8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                                              ^ (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_2))) 
                                                            << 9U) 
                                                           | ((((IData)(Zero_ME_7_8__DOT____Vcellout__u_FA_stage2_2__sum) 
                                                                ^ 
                                                                ((IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_3__C2) 
                                                                 ^ (IData)(Zero_ME_7_8__DOT__cout_FA_stage3_1))) 
                                                               << 8U) 
                                                              | ((((IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C1) 
                                                                   ^ 
                                                                   ((IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_2__C2) 
                                                                    ^ (IData)(Zero_ME_7_8__DOT__cout_HA_stage3_1))) 
                                                                  << 7U) 
                                                                 | ((((IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_1__C1) 
                                                                      ^ (IData)(Zero_ME_7_8__DOT____Vcellout__u_only_dual_carry_compressor_1__C2)) 
                                                                     << 6U) 
                                                                    | ((0x20U 
                                                                        & ((((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_22) 
                                                                             & (IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_23)) 
                                                                            | (((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_23) 
                                                                                | (IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_22)) 
                                                                               & (IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_1__x3))) 
                                                                           << 5U)) 
                                                                       | (0x10U 
                                                                          & (((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_22) 
                                                                              ^ 
                                                                              ((IData)(Zero_ME_7_8__DOT____VdfgRegularize_h40bac332_0_23) 
                                                                               ^ (IData)(Zero_ME_7_8__DOT____Vcellinp__u_FA_stage2_1__x3))) 
                                                                             << 4U))))))))))))));
}

void VZero_ME_7_8___024root___eval_triggers__ico(VZero_ME_7_8___024root* vlSelf);

bool VZero_ME_7_8___024root___eval_phase__ico(VZero_ME_7_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VZero_ME_7_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZero_ME_7_8___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VZero_ME_7_8___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VZero_ME_7_8___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VZero_ME_7_8___024root___eval_act(VZero_ME_7_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VZero_ME_7_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZero_ME_7_8___024root___eval_act\n"); );
}

void VZero_ME_7_8___024root___eval_nba(VZero_ME_7_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VZero_ME_7_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZero_ME_7_8___024root___eval_nba\n"); );
}

void VZero_ME_7_8___024root___eval_triggers__act(VZero_ME_7_8___024root* vlSelf);

bool VZero_ME_7_8___024root___eval_phase__act(VZero_ME_7_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VZero_ME_7_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZero_ME_7_8___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VZero_ME_7_8___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VZero_ME_7_8___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VZero_ME_7_8___024root___eval_phase__nba(VZero_ME_7_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VZero_ME_7_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZero_ME_7_8___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VZero_ME_7_8___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VZero_ME_7_8___024root___dump_triggers__ico(VZero_ME_7_8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VZero_ME_7_8___024root___dump_triggers__nba(VZero_ME_7_8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VZero_ME_7_8___024root___dump_triggers__act(VZero_ME_7_8___024root* vlSelf);
#endif  // VL_DEBUG

void VZero_ME_7_8___024root___eval(VZero_ME_7_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VZero_ME_7_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZero_ME_7_8___024root___eval\n"); );
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
            VZero_ME_7_8___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/Zero_ME_7_8.v", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VZero_ME_7_8___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VZero_ME_7_8___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/Zero_ME_7_8.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VZero_ME_7_8___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../verilog/../verilog/Zero_ME_7_8.v", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VZero_ME_7_8___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VZero_ME_7_8___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VZero_ME_7_8___024root___eval_debug_assertions(VZero_ME_7_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VZero_ME_7_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VZero_ME_7_8___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
