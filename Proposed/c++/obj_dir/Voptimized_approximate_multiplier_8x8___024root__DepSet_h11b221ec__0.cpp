// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Voptimized_approximate_multiplier_8x8.h for the primary calling header

#include "Voptimized_approximate_multiplier_8x8__pch.h"
#include "Voptimized_approximate_multiplier_8x8___024root.h"

void Voptimized_approximate_multiplier_8x8___024root___ico_sequent__TOP__0(Voptimized_approximate_multiplier_8x8___024root* vlSelf);

void Voptimized_approximate_multiplier_8x8___024root___eval_ico(Voptimized_approximate_multiplier_8x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Voptimized_approximate_multiplier_8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voptimized_approximate_multiplier_8x8___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Voptimized_approximate_multiplier_8x8___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Voptimized_approximate_multiplier_8x8___024root___ico_sequent__TOP__0(Voptimized_approximate_multiplier_8x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Voptimized_approximate_multiplier_8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voptimized_approximate_multiplier_8x8___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_sum_compressor_2__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_sum_compressor_2__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_sum_compressor_3__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_sum_compressor_3__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_carry_compressor_2to1__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_carry_compressor_2to1__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_carry_compressor_3to1__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_carry_compressor_3to1__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__carry_4to1;
    optimized_approximate_multiplier_8x8__DOT__carry_4to1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout1;
    optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout2;
    optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout3;
    optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout3 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x3;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x3 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x2;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x1;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x2;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x1;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_HA_1__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_HA_1__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_HA_1__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_HA_1__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_HA_1__x2;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_HA_1__x2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_HA_1__x1;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_HA_1__x1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout1;
    optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout2;
    optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout3;
    optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout3 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout4;
    optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout4 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__carry;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__carry = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__sum;
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__sum = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x2;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x1;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__cout_HA_stage3_1;
    optimized_approximate_multiplier_8x8__DOT__cout_HA_stage3_1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_1;
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_1 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_2;
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__cout_HA_stage3_2;
    optimized_approximate_multiplier_8x8__DOT__cout_HA_stage3_2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_3;
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_3 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_4;
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_4 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_5;
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_5 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_6;
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_6 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_stage3_7__x2;
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_stage3_7__x2 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0;
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    // Body
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_stage3_7__x2 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 7U));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 6U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x2 
        = (IData)((((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4 
        = (IData)((((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4 
        = (IData)((((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_carry_compressor_3to1__carry 
        = (1U & ((((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                                >> 4U)) 
                 | ((((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                                   >> 5U)) 
                    | ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                             >> 6U)))));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_sum_compressor_3__sum 
        = (1U & ((((IData)(vlSelf->a) >> 7U) & (IData)(vlSelf->b)) 
                 | ((((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                                   >> 1U)) 
                    | ((((IData)(vlSelf->a) >> 5U) 
                        & ((IData)(vlSelf->b) >> 2U)) 
                       | (((IData)(vlSelf->a) >> 4U) 
                          & ((IData)(vlSelf->b) >> 3U))))));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 5U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 6U));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_carry_compressor_2to1__carry 
        = (1U & ((((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                                >> 4U)) 
                 | ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                          >> 5U))));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_sum_compressor_2__sum 
        = (1U & ((((IData)(vlSelf->a) >> 6U) & (IData)(vlSelf->b)) 
                 | ((((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                                   >> 1U)) 
                    | ((((IData)(vlSelf->a) >> 4U) 
                        & ((IData)(vlSelf->b) >> 2U)) 
                       | (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                          >> 3U)))));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4 
        = (IData)((((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 4U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 4U));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x1 
        = (1U & (((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x2 
        = (1U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x3 
        = (IData)((((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    optimized_approximate_multiplier_8x8__DOT__carry_4to1 
        = (1U & ((((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                                >> 4U)) 
                 | ((((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                                   >> 5U)) 
                    | ((((IData)(vlSelf->a) >> 1U) 
                        & ((IData)(vlSelf->b) >> 6U)) 
                       | ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                                >> 7U))))));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_HA_1__x1 
        = (1U & (((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_HA_1__x2 
        = (IData)((((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 3U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 5U));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 1U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 2U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    optimized_approximate_multiplier_8x8__DOT__cout_HA_stage3_1 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_carry_compressor_2to1__carry) 
           & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_sum_compressor_2__sum));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__sum 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x1) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x2) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x3)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__carry 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x1) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x2)) 
           | (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x2) 
               | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x1)) 
              & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_1__x3)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_HA_1__sum 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_HA_1__x1) 
           ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_HA_1__x2));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_HA_1__carry 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_HA_1__x1) 
           & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_HA_1__x2));
    optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout3 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2))));
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3)));
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3)));
    optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout1 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2))));
    optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout2 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2))));
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3)));
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_1 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_carry_compressor_3to1__carry) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_sum_compressor_3__sum)) 
           | (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_sum_compressor_3__sum) 
               | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_carry_compressor_3to1__carry)) 
              & (IData)(optimized_approximate_multiplier_8x8__DOT__cout_HA_stage3_1)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__carry 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x1) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x2)) 
           | (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x2) 
               | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x1)) 
              & (IData)(optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout3)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__sum 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x1) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_2__x2) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout3)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT__carry_4to1) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT__carry_4to1) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4))));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout2) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4))));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout2) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout1) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4))));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT__exact_4to2_cout1) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)));
    optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout4 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__carry) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__carry) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2))));
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__carry) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3)));
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_2 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__sum)) 
           | (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__sum) 
               | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum)) 
              & (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_1)));
    optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout3 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__sum)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__sum))));
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_2__sum) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3)));
    optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout2 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_HA_1__carry)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_HA_1__carry))));
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_HA_1__carry) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum)));
    optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout1 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__carry)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__carry))));
    optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__carry) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__carry 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x1) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x2)) 
           | (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x2) 
               | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x1)) 
              & (IData)(optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout4)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__sum 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x1) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_3__x2) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout4)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout3) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4))));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout3) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout2) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4))));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout2) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4)) 
           | ((IData)(optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout1) 
              & ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4))));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(optimized_approximate_multiplier_8x8__DOT__stage2_exact_4to2_cout1) 
              ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4)));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_HA_1__sum));
    optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_HA_1__sum));
    optimized_approximate_multiplier_8x8__DOT__cout_HA_stage3_2 
        = ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
           & (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_2));
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_3 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum)) 
           | (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
               | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry)) 
              & (IData)(optimized_approximate_multiplier_8x8__DOT__cout_HA_stage3_2)));
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_4 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum)) 
           | (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
               | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry)) 
              & (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_3)));
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_5 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum)) 
           | (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
               | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry)) 
              & (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_4)));
    optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_6 
        = (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
            & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__sum)) 
           | (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__sum) 
               | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry)) 
              & (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_5)));
    vlSelf->final_sum = (6U | (((((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__carry) 
                                  & (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_stage3_7__x2)) 
                                 | (((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_stage3_7__x2) 
                                     | (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__carry)) 
                                    & (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_6))) 
                                << 0xfU) | ((((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__carry) 
                                              ^ ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellinp__u_FA_stage3_7__x2) 
                                                 ^ (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_6))) 
                                             << 0xeU) 
                                            | ((((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                                 ^ 
                                                 ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_3__sum) 
                                                  ^ (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_5))) 
                                                << 0xdU) 
                                               | ((((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                                    ^ 
                                                    ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                                     ^ (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_4))) 
                                                   << 0xcU) 
                                                  | ((((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                                       ^ 
                                                       ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                                        ^ (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_3))) 
                                                      << 0xbU) 
                                                     | ((((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                                          ^ 
                                                          ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                                           ^ (IData)(optimized_approximate_multiplier_8x8__DOT__cout_HA_stage3_2))) 
                                                         << 0xaU) 
                                                        | ((((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                                             ^ (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_2)) 
                                                            << 9U) 
                                                           | ((((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
                                                                ^ 
                                                                ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_FA_1__sum) 
                                                                 ^ (IData)(optimized_approximate_multiplier_8x8__DOT__cout_FA_stage3_1))) 
                                                               << 8U) 
                                                              | ((((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_carry_compressor_3to1__carry) 
                                                                   ^ 
                                                                   ((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_sum_compressor_3__sum) 
                                                                    ^ (IData)(optimized_approximate_multiplier_8x8__DOT__cout_HA_stage3_1))) 
                                                                  << 7U) 
                                                                 | ((((IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_carry_compressor_2to1__carry) 
                                                                      ^ (IData)(optimized_approximate_multiplier_8x8__DOT____Vcellout__u_only_sum_compressor_2__sum)) 
                                                                     << 6U) 
                                                                    | (0x20U 
                                                                       & (((IData)(vlSelf->a) 
                                                                           & ((IData)(vlSelf->b) 
                                                                              << 5U)) 
                                                                          | ((((IData)(vlSelf->a) 
                                                                               << 1U) 
                                                                              & ((IData)(vlSelf->b) 
                                                                                << 4U)) 
                                                                             | ((((IData)(vlSelf->a) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->a) 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 2U)))))))))))))))));
}

void Voptimized_approximate_multiplier_8x8___024root___eval_triggers__ico(Voptimized_approximate_multiplier_8x8___024root* vlSelf);

bool Voptimized_approximate_multiplier_8x8___024root___eval_phase__ico(Voptimized_approximate_multiplier_8x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Voptimized_approximate_multiplier_8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voptimized_approximate_multiplier_8x8___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Voptimized_approximate_multiplier_8x8___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Voptimized_approximate_multiplier_8x8___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Voptimized_approximate_multiplier_8x8___024root___eval_act(Voptimized_approximate_multiplier_8x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Voptimized_approximate_multiplier_8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voptimized_approximate_multiplier_8x8___024root___eval_act\n"); );
}

void Voptimized_approximate_multiplier_8x8___024root___eval_nba(Voptimized_approximate_multiplier_8x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Voptimized_approximate_multiplier_8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voptimized_approximate_multiplier_8x8___024root___eval_nba\n"); );
}

void Voptimized_approximate_multiplier_8x8___024root___eval_triggers__act(Voptimized_approximate_multiplier_8x8___024root* vlSelf);

bool Voptimized_approximate_multiplier_8x8___024root___eval_phase__act(Voptimized_approximate_multiplier_8x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Voptimized_approximate_multiplier_8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voptimized_approximate_multiplier_8x8___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Voptimized_approximate_multiplier_8x8___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Voptimized_approximate_multiplier_8x8___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Voptimized_approximate_multiplier_8x8___024root___eval_phase__nba(Voptimized_approximate_multiplier_8x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Voptimized_approximate_multiplier_8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voptimized_approximate_multiplier_8x8___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Voptimized_approximate_multiplier_8x8___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Voptimized_approximate_multiplier_8x8___024root___dump_triggers__ico(Voptimized_approximate_multiplier_8x8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Voptimized_approximate_multiplier_8x8___024root___dump_triggers__nba(Voptimized_approximate_multiplier_8x8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Voptimized_approximate_multiplier_8x8___024root___dump_triggers__act(Voptimized_approximate_multiplier_8x8___024root* vlSelf);
#endif  // VL_DEBUG

void Voptimized_approximate_multiplier_8x8___024root___eval(Voptimized_approximate_multiplier_8x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Voptimized_approximate_multiplier_8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voptimized_approximate_multiplier_8x8___024root___eval\n"); );
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
            Voptimized_approximate_multiplier_8x8___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/optimized_approximate_multiplier_8x8.v", 8, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Voptimized_approximate_multiplier_8x8___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Voptimized_approximate_multiplier_8x8___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/optimized_approximate_multiplier_8x8.v", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Voptimized_approximate_multiplier_8x8___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../verilog/../verilog/optimized_approximate_multiplier_8x8.v", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Voptimized_approximate_multiplier_8x8___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Voptimized_approximate_multiplier_8x8___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Voptimized_approximate_multiplier_8x8___024root___eval_debug_assertions(Voptimized_approximate_multiplier_8x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Voptimized_approximate_multiplier_8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voptimized_approximate_multiplier_8x8___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
