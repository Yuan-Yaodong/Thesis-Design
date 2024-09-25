// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VKumar.h for the primary calling header

#include "VKumar__pch.h"
#include "VKumar___024root.h"

void VKumar___024root___ico_sequent__TOP__0(VKumar___024root* vlSelf);

void VKumar___024root___eval_ico(VKumar___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumar__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumar___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VKumar___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VKumar___024root___ico_sequent__TOP__0(VKumar___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumar__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumar___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ Kumar__DOT__exact_4to2_cout1;
    Kumar__DOT__exact_4to2_cout1 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_FA_1__carry;
    Kumar__DOT____Vcellout__u_FA_1__carry = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_FA_1__sum;
    Kumar__DOT____Vcellout__u_FA_1__sum = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_FA_1__x3;
    Kumar__DOT____Vcellinp__u_FA_1__x3 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_FA_1__x2;
    Kumar__DOT____Vcellinp__u_FA_1__x2 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_FA_1__x1;
    Kumar__DOT____Vcellinp__u_FA_1__x1 = 0;
    CData/*0:0*/ Kumar__DOT__exact_4to2_cout2;
    Kumar__DOT__exact_4to2_cout2 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_HA_1__carry;
    Kumar__DOT____Vcellout__u_HA_1__carry = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_HA_1__sum;
    Kumar__DOT____Vcellout__u_HA_1__sum = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_HA_1__x2;
    Kumar__DOT____Vcellinp__u_HA_1__x2 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_HA_1__x1;
    Kumar__DOT____Vcellinp__u_HA_1__x1 = 0;
    CData/*0:0*/ Kumar__DOT__exact_4to2_cout3;
    Kumar__DOT__exact_4to2_cout3 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_FA_2__carry;
    Kumar__DOT____Vcellout__u_FA_2__carry = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_FA_2__sum;
    Kumar__DOT____Vcellout__u_FA_2__sum = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_FA_2__x2;
    Kumar__DOT____Vcellinp__u_FA_2__x2 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_FA_2__x1;
    Kumar__DOT____Vcellinp__u_FA_2__x1 = 0;
    CData/*0:0*/ Kumar__DOT__ECM;
    Kumar__DOT__ECM = 0;
    CData/*0:0*/ Kumar__DOT__stage2_FA_cout;
    Kumar__DOT__stage2_FA_cout = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_FA_stage2_1__sum;
    Kumar__DOT____Vcellout__u_FA_stage2_1__sum = 0;
    CData/*0:0*/ Kumar__DOT__stage2_exact_4to2_cout1;
    Kumar__DOT__stage2_exact_4to2_cout1 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum = 0;
    CData/*0:0*/ Kumar__DOT__stage2_exact_4to2_cout2;
    Kumar__DOT__stage2_exact_4to2_cout2 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4 = 0;
    CData/*0:0*/ Kumar__DOT__stage2_exact_4to2_cout3;
    Kumar__DOT__stage2_exact_4to2_cout3 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3 = 0;
    CData/*0:0*/ Kumar__DOT__stage2_exact_4to2_cout4;
    Kumar__DOT__stage2_exact_4to2_cout4 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum;
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2;
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_FA_stage2_2__carry;
    Kumar__DOT____Vcellout__u_FA_stage2_2__carry = 0;
    CData/*0:0*/ Kumar__DOT____Vcellout__u_FA_stage2_2__sum;
    Kumar__DOT____Vcellout__u_FA_stage2_2__sum = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_FA_stage2_2__x2;
    Kumar__DOT____Vcellinp__u_FA_stage2_2__x2 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_FA_stage2_2__x1;
    Kumar__DOT____Vcellinp__u_FA_stage2_2__x1 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_HA_stage3_1__x2;
    Kumar__DOT____Vcellinp__u_HA_stage3_1__x2 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_HA_stage3_1__x1;
    Kumar__DOT____Vcellinp__u_HA_stage3_1__x1 = 0;
    CData/*0:0*/ Kumar__DOT__cout_HA_stage3_2;
    Kumar__DOT__cout_HA_stage3_2 = 0;
    CData/*0:0*/ Kumar__DOT__cout_HA_stage3_3;
    Kumar__DOT__cout_HA_stage3_3 = 0;
    CData/*0:0*/ Kumar__DOT__cout_FA_stage3_1;
    Kumar__DOT__cout_FA_stage3_1 = 0;
    CData/*0:0*/ Kumar__DOT__cout_FA_stage3_2;
    Kumar__DOT__cout_FA_stage3_2 = 0;
    CData/*0:0*/ Kumar__DOT__cout_FA_stage3_3;
    Kumar__DOT__cout_FA_stage3_3 = 0;
    CData/*0:0*/ Kumar__DOT__cout_FA_stage3_4;
    Kumar__DOT__cout_FA_stage3_4 = 0;
    CData/*0:0*/ Kumar__DOT____Vcellinp__u_FA_stage3_5__x2;
    Kumar__DOT____Vcellinp__u_FA_stage3_5__x2 = 0;
    CData/*0:0*/ Kumar__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumar__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumar__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumar__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumar__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumar__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumar__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumar__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumar__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumar__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumar__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumar__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumar__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumar__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    // Body
    Kumar__DOT____Vcellinp__u_FA_stage3_5__x2 = (1U 
                                                 & (((IData)(vlSelf->a) 
                                                     & (IData)(vlSelf->b)) 
                                                    >> 7U));
    Kumar__DOT____Vcellinp__u_FA_stage2_2__x1 = (IData)(
                                                        (((IData)(vlSelf->a) 
                                                          >> 7U) 
                                                         & ((IData)(vlSelf->b) 
                                                            >> 6U)));
    Kumar__DOT____Vcellinp__u_FA_stage2_2__x2 = (IData)(
                                                        (((IData)(vlSelf->a) 
                                                          >> 6U) 
                                                         & ((IData)(vlSelf->b) 
                                                            >> 7U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4 
        = (IData)((((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4 
        = (IData)((((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 5U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 6U));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4 
        = (IData)((((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                                 >> 7U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    Kumar__DOT____Vcellinp__u_FA_2__x1 = (IData)((((IData)(vlSelf->a) 
                                                   >> 7U) 
                                                  & ((IData)(vlSelf->b) 
                                                     >> 4U)));
    Kumar__DOT____Vcellinp__u_FA_2__x2 = (1U & (((IData)(vlSelf->a) 
                                                 >> 6U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 5U)));
    Kumar__DOT____Vcellinp__u_HA_stage3_1__x1 = (1U 
                                                 & ((((IData)(vlSelf->a) 
                                                      >> 7U) 
                                                     & (IData)(vlSelf->b)) 
                                                    | ((((IData)(vlSelf->a) 
                                                         >> 6U) 
                                                        & ((IData)(vlSelf->b) 
                                                           >> 1U)) 
                                                       | ((((IData)(vlSelf->a) 
                                                            >> 5U) 
                                                           & ((IData)(vlSelf->b) 
                                                              >> 2U)) 
                                                          | (((IData)(vlSelf->a) 
                                                              >> 4U) 
                                                             & ((IData)(vlSelf->b) 
                                                                >> 3U))))));
    Kumar__DOT____Vcellinp__u_HA_stage3_1__x2 = (1U 
                                                 & ((((IData)(vlSelf->a) 
                                                      >> 3U) 
                                                     & ((IData)(vlSelf->b) 
                                                        >> 4U)) 
                                                    | ((((IData)(vlSelf->a) 
                                                         >> 2U) 
                                                        & ((IData)(vlSelf->b) 
                                                           >> 5U)) 
                                                       | ((((IData)(vlSelf->a) 
                                                            >> 1U) 
                                                           & ((IData)(vlSelf->b) 
                                                              >> 6U)) 
                                                          | ((IData)(vlSelf->a) 
                                                             & ((IData)(vlSelf->b) 
                                                                >> 7U))))));
    Kumar__DOT____Vcellinp__u_HA_1__x1 = (1U & (((IData)(vlSelf->a) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 6U)));
    Kumar__DOT____Vcellinp__u_HA_1__x2 = (IData)((((IData)(vlSelf->a) 
                                                   >> 2U) 
                                                  & ((IData)(vlSelf->b) 
                                                     >> 7U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 4U));
    Kumar__DOT____Vcellinp__u_FA_1__x1 = (1U & (((IData)(vlSelf->a) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 5U)));
    Kumar__DOT____Vcellinp__u_FA_1__x2 = (1U & (((IData)(vlSelf->a) 
                                                 >> 2U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 6U)));
    Kumar__DOT____Vcellinp__u_FA_1__x3 = (IData)((((IData)(vlSelf->a) 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->b) 
                                                     >> 7U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 3U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 5U));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 2U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 1U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Kumar__DOT__ECM = ((IData)(Kumar__DOT____Vcellinp__u_HA_stage3_1__x1) 
                       & (IData)(Kumar__DOT____Vcellinp__u_HA_stage3_1__x2));
    Kumar__DOT____Vcellout__u_HA_1__sum = ((IData)(Kumar__DOT____Vcellinp__u_HA_1__x1) 
                                           ^ (IData)(Kumar__DOT____Vcellinp__u_HA_1__x2));
    Kumar__DOT____Vcellout__u_HA_1__carry = ((IData)(Kumar__DOT____Vcellinp__u_HA_1__x1) 
                                             & (IData)(Kumar__DOT____Vcellinp__u_HA_1__x2));
    Kumar__DOT____Vcellout__u_FA_1__sum = ((IData)(Kumar__DOT____Vcellinp__u_FA_1__x1) 
                                           ^ ((IData)(Kumar__DOT____Vcellinp__u_FA_1__x2) 
                                              ^ (IData)(Kumar__DOT____Vcellinp__u_FA_1__x3)));
    Kumar__DOT____Vcellout__u_FA_1__carry = (((IData)(Kumar__DOT____Vcellinp__u_FA_1__x1) 
                                              & (IData)(Kumar__DOT____Vcellinp__u_FA_1__x2)) 
                                             | (((IData)(Kumar__DOT____Vcellinp__u_FA_1__x2) 
                                                 | (IData)(Kumar__DOT____Vcellinp__u_FA_1__x1)) 
                                                & (IData)(Kumar__DOT____Vcellinp__u_FA_1__x3)));
    Kumar__DOT__exact_4to2_cout3 = (((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                     & (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2)) 
                                    | ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3) 
                                       & ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                          | (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2))));
    Kumar__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
           ^ ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2) 
              ^ (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3)));
    Kumar__DOT__exact_4to2_cout2 = (((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
                                     & (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2)) 
                                    | ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3) 
                                       & ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
                                          | (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2))));
    Kumar__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
           ^ ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2) 
              ^ (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3)));
    Kumar__DOT__exact_4to2_cout1 = (((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                                     & (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2)) 
                                    | ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3) 
                                       & ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                                          | (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2))));
    Kumar__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
           ^ ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2) 
              ^ (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3)));
    Kumar__DOT____Vcellout__u_FA_2__carry = (((IData)(Kumar__DOT____Vcellinp__u_FA_2__x1) 
                                              & (IData)(Kumar__DOT____Vcellinp__u_FA_2__x2)) 
                                             | (((IData)(Kumar__DOT____Vcellinp__u_FA_2__x2) 
                                                 | (IData)(Kumar__DOT____Vcellinp__u_FA_2__x1)) 
                                                & (IData)(Kumar__DOT__exact_4to2_cout3)));
    Kumar__DOT____Vcellout__u_FA_2__sum = ((IData)(Kumar__DOT____Vcellinp__u_FA_2__x1) 
                                           ^ ((IData)(Kumar__DOT____Vcellinp__u_FA_2__x2) 
                                              ^ (IData)(Kumar__DOT__exact_4to2_cout3)));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry 
        = (((IData)(Kumar__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)) 
           | ((IData)(Kumar__DOT__exact_4to2_cout2) 
              & ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4))));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum 
        = ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumar__DOT__exact_4to2_cout2) 
              ^ (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry 
        = (((IData)(Kumar__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)) 
           | ((IData)(Kumar__DOT__exact_4to2_cout1) 
              & ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4))));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum 
        = ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumar__DOT__exact_4to2_cout1) 
              ^ (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum 
        = ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry 
        = ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           & (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4));
    Kumar__DOT__stage2_exact_4to2_cout4 = (((IData)(Kumar__DOT____Vcellout__u_FA_2__carry) 
                                            & (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2)) 
                                           | ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3) 
                                              & ((IData)(Kumar__DOT____Vcellout__u_FA_2__carry) 
                                                 | (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2))));
    Kumar__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumar__DOT____Vcellout__u_FA_2__carry) 
           ^ ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x2) 
              ^ (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x3)));
    Kumar__DOT__stage2_exact_4to2_cout3 = (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                            & (IData)(Kumar__DOT____Vcellout__u_FA_2__sum)) 
                                           | ((IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3) 
                                              & ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                                 | (IData)(Kumar__DOT____Vcellout__u_FA_2__sum))));
    Kumar__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
           ^ ((IData)(Kumar__DOT____Vcellout__u_FA_2__sum) 
              ^ (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x3)));
    Kumar__DOT__stage2_exact_4to2_cout2 = (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
                                            & (IData)(Kumar__DOT____Vcellout__u_HA_1__carry)) 
                                           | ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum) 
                                              & ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
                                                 | (IData)(Kumar__DOT____Vcellout__u_HA_1__carry))));
    Kumar__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
           ^ ((IData)(Kumar__DOT____Vcellout__u_HA_1__carry) 
              ^ (IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum)));
    Kumar__DOT____Vcellout__u_FA_stage2_1__sum = ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
                                                  ^ 
                                                  ((IData)(Kumar__DOT____Vcellout__u_FA_1__sum) 
                                                   ^ (IData)(Kumar__DOT__ECM)));
    Kumar__DOT__stage2_FA_cout = (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
                                   & (IData)(Kumar__DOT____Vcellout__u_FA_1__sum)) 
                                  | (((IData)(Kumar__DOT____Vcellout__u_FA_1__sum) 
                                      | (IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum)) 
                                     & (IData)(Kumar__DOT__ECM)));
    Kumar__DOT__stage2_exact_4to2_cout1 = (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
                                            & (IData)(Kumar__DOT____Vcellout__u_FA_1__carry)) 
                                           | ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum) 
                                              & ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
                                                 | (IData)(Kumar__DOT____Vcellout__u_FA_1__carry))));
    Kumar__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
           ^ ((IData)(Kumar__DOT____Vcellout__u_FA_1__carry) 
              ^ (IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum)));
    Kumar__DOT____Vcellout__u_FA_stage2_2__carry = 
        (((IData)(Kumar__DOT____Vcellinp__u_FA_stage2_2__x1) 
          & (IData)(Kumar__DOT____Vcellinp__u_FA_stage2_2__x2)) 
         | (((IData)(Kumar__DOT____Vcellinp__u_FA_stage2_2__x2) 
             | (IData)(Kumar__DOT____Vcellinp__u_FA_stage2_2__x1)) 
            & (IData)(Kumar__DOT__stage2_exact_4to2_cout4)));
    Kumar__DOT____Vcellout__u_FA_stage2_2__sum = ((IData)(Kumar__DOT____Vcellinp__u_FA_stage2_2__x1) 
                                                  ^ 
                                                  ((IData)(Kumar__DOT____Vcellinp__u_FA_stage2_2__x2) 
                                                   ^ (IData)(Kumar__DOT__stage2_exact_4to2_cout4)));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry 
        = (((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4)) 
           | ((IData)(Kumar__DOT__stage2_exact_4to2_cout3) 
              & ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4))));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum 
        = ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumar__DOT__stage2_exact_4to2_cout3) 
              ^ (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_4__x4)));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry 
        = (((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4)) 
           | ((IData)(Kumar__DOT__stage2_exact_4to2_cout2) 
              & ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4))));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum 
        = ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumar__DOT__stage2_exact_4to2_cout2) 
              ^ (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_3__x4)));
    Kumar__DOT__cout_HA_stage3_2 = ((IData)(Kumar__DOT____Vcellout__u_FA_stage2_1__sum) 
                                    & (IData)(Kumar__DOT__ECM));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry 
        = (((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4)) 
           | ((IData)(Kumar__DOT__stage2_exact_4to2_cout1) 
              & ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4))));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum 
        = ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumar__DOT__stage2_exact_4to2_cout1) 
              ^ (IData)(Kumar__DOT____Vcellinp__u_exact_4to2_compressor_stage2_2__x4)));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry 
        = (((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Kumar__DOT____Vcellout__u_HA_1__sum)) 
           | ((IData)(Kumar__DOT__stage2_FA_cout) & 
              ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
               | (IData)(Kumar__DOT____Vcellout__u_HA_1__sum))));
    Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum 
        = ((IData)(Kumar__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumar__DOT__stage2_FA_cout) ^ (IData)(Kumar__DOT____Vcellout__u_HA_1__sum)));
    Kumar__DOT__cout_HA_stage3_3 = ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                    & (IData)(Kumar__DOT__cout_HA_stage3_2));
    Kumar__DOT__cout_FA_stage3_1 = (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                     & (IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum)) 
                                    | (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                        | (IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry)) 
                                       & (IData)(Kumar__DOT__cout_HA_stage3_3)));
    Kumar__DOT__cout_FA_stage3_2 = (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                     & (IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum)) 
                                    | (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                        | (IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry)) 
                                       & (IData)(Kumar__DOT__cout_FA_stage3_1)));
    Kumar__DOT__cout_FA_stage3_3 = (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                     & (IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum)) 
                                    | (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                        | (IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry)) 
                                       & (IData)(Kumar__DOT__cout_FA_stage3_2)));
    Kumar__DOT__cout_FA_stage3_4 = (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                     & (IData)(Kumar__DOT____Vcellout__u_FA_stage2_2__sum)) 
                                    | (((IData)(Kumar__DOT____Vcellout__u_FA_stage2_2__sum) 
                                        | (IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry)) 
                                       & (IData)(Kumar__DOT__cout_FA_stage3_3)));
    vlSelf->final_sum = (((((IData)(Kumar__DOT____Vcellout__u_FA_stage2_2__carry) 
                            & (IData)(Kumar__DOT____Vcellinp__u_FA_stage3_5__x2)) 
                           | (((IData)(Kumar__DOT____Vcellinp__u_FA_stage3_5__x2) 
                               | (IData)(Kumar__DOT____Vcellout__u_FA_stage2_2__carry)) 
                              & (IData)(Kumar__DOT__cout_FA_stage3_4))) 
                          << 0xfU) | ((((IData)(Kumar__DOT____Vcellout__u_FA_stage2_2__carry) 
                                        ^ ((IData)(Kumar__DOT____Vcellinp__u_FA_stage3_5__x2) 
                                           ^ (IData)(Kumar__DOT__cout_FA_stage3_4))) 
                                       << 0xeU) | (
                                                   (((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                                     ^ 
                                                     ((IData)(Kumar__DOT____Vcellout__u_FA_stage2_2__sum) 
                                                      ^ (IData)(Kumar__DOT__cout_FA_stage3_3))) 
                                                    << 0xdU) 
                                                   | ((((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                                        ^ 
                                                        ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                                         ^ (IData)(Kumar__DOT__cout_FA_stage3_2))) 
                                                       << 0xcU) 
                                                      | ((((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                                           ^ 
                                                           ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                                            ^ (IData)(Kumar__DOT__cout_FA_stage3_1))) 
                                                          << 0xbU) 
                                                         | ((((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                                              ^ 
                                                              ((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                                               ^ (IData)(Kumar__DOT__cout_HA_stage3_3))) 
                                                             << 0xaU) 
                                                            | ((((IData)(Kumar__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                                                 ^ (IData)(Kumar__DOT__cout_HA_stage3_2)) 
                                                                << 9U) 
                                                               | ((((IData)(Kumar__DOT____Vcellout__u_FA_stage2_1__sum) 
                                                                    ^ (IData)(Kumar__DOT__ECM)) 
                                                                   << 8U) 
                                                                  | ((((IData)(Kumar__DOT____Vcellinp__u_HA_stage3_1__x1) 
                                                                       ^ (IData)(Kumar__DOT____Vcellinp__u_HA_stage3_1__x2)) 
                                                                      << 7U) 
                                                                     | ((0x40U 
                                                                         & (((IData)(vlSelf->a) 
                                                                             & ((IData)(vlSelf->b) 
                                                                                << 6U)) 
                                                                            | ((((IData)(vlSelf->a) 
                                                                                << 1U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 5U)) 
                                                                               | ((((IData)(vlSelf->a) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 4U)) 
                                                                                | ((((IData)(vlSelf->a) 
                                                                                & (IData)(vlSelf->b)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->a) 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 2U)) 
                                                                                | ((((IData)(vlSelf->a) 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->a) 
                                                                                << 6U) 
                                                                                & (IData)(vlSelf->b))))))))) 
                                                                        | ((0x20U 
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
                                                                                | ((((IData)(vlSelf->a) 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 2U)) 
                                                                                | ((((IData)(vlSelf->a) 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->a) 
                                                                                << 5U) 
                                                                                & (IData)(vlSelf->b)))))))) 
                                                                           | ((0x10U 
                                                                               & (((IData)(vlSelf->a) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 4U)) 
                                                                                | ((((IData)(vlSelf->a) 
                                                                                << 1U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 3U)) 
                                                                                | ((((IData)(vlSelf->a) 
                                                                                & (IData)(vlSelf->b)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->a) 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->a) 
                                                                                << 4U) 
                                                                                & (IData)(vlSelf->b))))))) 
                                                                              | ((8U 
                                                                                & (((IData)(vlSelf->a) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 3U)) 
                                                                                | ((((IData)(vlSelf->a) 
                                                                                << 1U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 2U)) 
                                                                                | ((((IData)(vlSelf->a) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->a) 
                                                                                << 3U) 
                                                                                & (IData)(vlSelf->b)))))) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->a) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 2U)) 
                                                                                | ((((IData)(vlSelf->a) 
                                                                                & (IData)(vlSelf->b)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSelf->a) 
                                                                                << 2U) 
                                                                                & (IData)(vlSelf->b))))) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->a) 
                                                                                & ((IData)(vlSelf->b) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->a) 
                                                                                << 1U) 
                                                                                & (IData)(vlSelf->b)))) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->a) 
                                                                                & (IData)(vlSelf->b))))))))))))))))));
}

void VKumar___024root___eval_triggers__ico(VKumar___024root* vlSelf);

bool VKumar___024root___eval_phase__ico(VKumar___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumar__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumar___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VKumar___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VKumar___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VKumar___024root___eval_act(VKumar___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumar__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumar___024root___eval_act\n"); );
}

void VKumar___024root___eval_nba(VKumar___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumar__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumar___024root___eval_nba\n"); );
}

void VKumar___024root___eval_triggers__act(VKumar___024root* vlSelf);

bool VKumar___024root___eval_phase__act(VKumar___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumar__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumar___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VKumar___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VKumar___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VKumar___024root___eval_phase__nba(VKumar___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumar__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumar___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VKumar___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VKumar___024root___dump_triggers__ico(VKumar___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VKumar___024root___dump_triggers__nba(VKumar___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VKumar___024root___dump_triggers__act(VKumar___024root* vlSelf);
#endif  // VL_DEBUG

void VKumar___024root___eval(VKumar___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumar__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumar___024root___eval\n"); );
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
            VKumar___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/Kumar.v", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VKumar___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VKumar___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/Kumar.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VKumar___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../verilog/../verilog/Kumar.v", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VKumar___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VKumar___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VKumar___024root___eval_debug_assertions(VKumar___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumar__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumar___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
