// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VKumari.h for the primary calling header

#include "VKumari__pch.h"
#include "VKumari___024root.h"

void VKumari___024root___ico_sequent__TOP__0(VKumari___024root* vlSelf);

void VKumari___024root___eval_ico(VKumari___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumari__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumari___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VKumari___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VKumari___024root___ico_sequent__TOP__0(VKumari___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumari__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumari___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ Kumari__DOT__pp6;
    Kumari__DOT__pp6 = 0;
    CData/*7:0*/ Kumari__DOT__pp7;
    Kumari__DOT__pp7 = 0;
    CData/*0:0*/ Kumari__DOT__ECM;
    Kumari__DOT__ECM = 0;
    CData/*0:0*/ Kumari__DOT__exact_4to2_cout1;
    Kumari__DOT__exact_4to2_cout1 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 = 0;
    CData/*0:0*/ Kumari__DOT__exact_4to2_cout2;
    Kumari__DOT__exact_4to2_cout2 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 = 0;
    CData/*0:0*/ Kumari__DOT__exact_4to2_cout3;
    Kumari__DOT__exact_4to2_cout3 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1;
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_FA_1__carry;
    Kumari__DOT____Vcellout__u_FA_1__carry = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_FA_1__sum;
    Kumari__DOT____Vcellout__u_FA_1__sum = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_FA_1__x3;
    Kumari__DOT____Vcellinp__u_FA_1__x3 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_FA_1__x2;
    Kumari__DOT____Vcellinp__u_FA_1__x2 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_FA_1__x1;
    Kumari__DOT____Vcellinp__u_FA_1__x1 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_HA_1__carry;
    Kumari__DOT____Vcellout__u_HA_1__carry = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_HA_1__sum;
    Kumari__DOT____Vcellout__u_HA_1__sum = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_HA_1__x2;
    Kumari__DOT____Vcellinp__u_HA_1__x2 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_HA_1__x1;
    Kumari__DOT____Vcellinp__u_HA_1__x1 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_FA_2__carry;
    Kumari__DOT____Vcellout__u_FA_2__carry = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_FA_2__sum;
    Kumari__DOT____Vcellout__u_FA_2__sum = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_FA_2__x2;
    Kumari__DOT____Vcellinp__u_FA_2__x2 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellinp__u_FA_2__x1;
    Kumari__DOT____Vcellinp__u_FA_2__x1 = 0;
    CData/*0:0*/ Kumari__DOT__stage2_FA_cout;
    Kumari__DOT__stage2_FA_cout = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_FA_stage2_1__sum;
    Kumari__DOT____Vcellout__u_FA_stage2_1__sum = 0;
    CData/*0:0*/ Kumari__DOT__stage2_exact_4to2_cout1;
    Kumari__DOT__stage2_exact_4to2_cout1 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum = 0;
    CData/*0:0*/ Kumari__DOT__stage2_exact_4to2_cout2;
    Kumari__DOT__stage2_exact_4to2_cout2 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum = 0;
    CData/*0:0*/ Kumari__DOT__stage2_exact_4to2_cout3;
    Kumari__DOT__stage2_exact_4to2_cout3 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum = 0;
    CData/*0:0*/ Kumari__DOT__stage2_exact_4to2_cout4;
    Kumari__DOT__stage2_exact_4to2_cout4 = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_FA_stage2_2__carry;
    Kumari__DOT____Vcellout__u_FA_stage2_2__carry = 0;
    CData/*0:0*/ Kumari__DOT____Vcellout__u_FA_stage2_2__sum;
    Kumari__DOT____Vcellout__u_FA_stage2_2__sum = 0;
    CData/*0:0*/ Kumari__DOT__cout_HA_stage3_1;
    Kumari__DOT__cout_HA_stage3_1 = 0;
    CData/*0:0*/ Kumari__DOT__cout_FA_stage3_1;
    Kumari__DOT__cout_FA_stage3_1 = 0;
    CData/*0:0*/ Kumari__DOT__cout_FA_stage3_2;
    Kumari__DOT__cout_FA_stage3_2 = 0;
    CData/*0:0*/ Kumari__DOT__cout_FA_stage3_3;
    Kumari__DOT__cout_FA_stage3_3 = 0;
    CData/*0:0*/ Kumari__DOT__cout_HA_stage3_2;
    Kumari__DOT__cout_HA_stage3_2 = 0;
    CData/*0:0*/ Kumari__DOT__cout_HA_stage3_3;
    Kumari__DOT__cout_HA_stage3_3 = 0;
    CData/*0:0*/ Kumari__DOT__cout_FA_stage3_4;
    Kumari__DOT__cout_FA_stage3_4 = 0;
    CData/*0:0*/ Kumari__DOT__cout_FA_stage3_5;
    Kumari__DOT__cout_FA_stage3_5 = 0;
    CData/*0:0*/ Kumari__DOT__cout_FA_stage3_6;
    Kumari__DOT__cout_FA_stage3_6 = 0;
    CData/*0:0*/ Kumari__DOT__cout_FA_stage3_7;
    Kumari__DOT__cout_FA_stage3_7 = 0;
    CData/*0:0*/ Kumari__DOT____VdfgRegularize_h94734ef3_0_34;
    Kumari__DOT____VdfgRegularize_h94734ef3_0_34 = 0;
    CData/*0:0*/ Kumari__DOT____VdfgRegularize_h94734ef3_0_35;
    Kumari__DOT____VdfgRegularize_h94734ef3_0_35 = 0;
    CData/*0:0*/ Kumari__DOT____VdfgRegularize_h94734ef3_0_36;
    Kumari__DOT____VdfgRegularize_h94734ef3_0_36 = 0;
    CData/*0:0*/ Kumari__DOT____VdfgRegularize_h94734ef3_0_38;
    Kumari__DOT____VdfgRegularize_h94734ef3_0_38 = 0;
    CData/*0:0*/ Kumari__DOT____VdfgRegularize_h94734ef3_0_39;
    Kumari__DOT____VdfgRegularize_h94734ef3_0_39 = 0;
    CData/*0:0*/ Kumari__DOT____VdfgRegularize_h94734ef3_0_41;
    Kumari__DOT____VdfgRegularize_h94734ef3_0_41 = 0;
    CData/*0:0*/ Kumari__DOT____VdfgRegularize_h94734ef3_0_42;
    Kumari__DOT____VdfgRegularize_h94734ef3_0_42 = 0;
    CData/*0:0*/ Kumari__DOT____VdfgRegularize_h94734ef3_0_43;
    Kumari__DOT____VdfgRegularize_h94734ef3_0_43 = 0;
    CData/*0:0*/ Kumari__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumari__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumari__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumari__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumari__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumari__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumari__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumari__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumari__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumari__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumari__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumari__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Kumari__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Kumari__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    // Body
    vlSelf->Kumari__DOT__stage1_pp0[0U] = (1U & ((((IData)(vlSelf->a) 
                                                   >> 4U) 
                                                  & (IData)(vlSelf->b)) 
                                                 | ((((IData)(vlSelf->a) 
                                                      >> 3U) 
                                                     & ((IData)(vlSelf->b) 
                                                        >> 1U)) 
                                                    | ((((IData)(vlSelf->a) 
                                                         & (IData)(vlSelf->b)) 
                                                        >> 2U) 
                                                       | (((IData)(vlSelf->a) 
                                                           >> 1U) 
                                                          & ((IData)(vlSelf->b) 
                                                             >> 3U))))));
    vlSelf->Kumari__DOT__stage1_pp0[1U] = (1U & ((((IData)(vlSelf->a) 
                                                   >> 5U) 
                                                  & (IData)(vlSelf->b)) 
                                                 | ((((IData)(vlSelf->a) 
                                                      >> 4U) 
                                                     & ((IData)(vlSelf->b) 
                                                        >> 1U)) 
                                                    | ((((IData)(vlSelf->a) 
                                                         >> 3U) 
                                                        & ((IData)(vlSelf->b) 
                                                           >> 2U)) 
                                                       | (((IData)(vlSelf->a) 
                                                           >> 2U) 
                                                          & ((IData)(vlSelf->b) 
                                                             >> 3U))))));
    vlSelf->Kumari__DOT__stage1_pp0[2U] = (1U & ((((IData)(vlSelf->a) 
                                                   >> 6U) 
                                                  & (IData)(vlSelf->b)) 
                                                 | ((((IData)(vlSelf->a) 
                                                      >> 5U) 
                                                     & ((IData)(vlSelf->b) 
                                                        >> 1U)) 
                                                    | ((((IData)(vlSelf->a) 
                                                         >> 4U) 
                                                        & ((IData)(vlSelf->b) 
                                                           >> 2U)) 
                                                       | (((IData)(vlSelf->a) 
                                                           & (IData)(vlSelf->b)) 
                                                          >> 3U)))));
    vlSelf->Kumari__DOT__stage1_pp1[8U] = (IData)((
                                                   ((IData)(vlSelf->a) 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 5U)));
    vlSelf->Kumari__DOT__stage1_pp1[0U] = (1U & ((IData)(vlSelf->a) 
                                                 & ((IData)(vlSelf->b) 
                                                    >> 4U)));
    Kumari__DOT____VdfgRegularize_h94734ef3_0_36 = 
        (1U & ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                     >> 5U)));
    Kumari__DOT____VdfgRegularize_h94734ef3_0_35 = 
        (1U & (((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                             >> 5U)));
    Kumari__DOT____VdfgRegularize_h94734ef3_0_43 = 
        (1U & ((((IData)(vlSelf->a) >> 7U) & (IData)(vlSelf->b)) 
               | ((((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                                 >> 1U)) 
                  | ((((IData)(vlSelf->a) >> 5U) & 
                      ((IData)(vlSelf->b) >> 2U)) | 
                     (((IData)(vlSelf->a) >> 4U) & 
                      ((IData)(vlSelf->b) >> 3U))))));
    Kumari__DOT____VdfgRegularize_h94734ef3_0_34 = 
        (1U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                             >> 5U)));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 4U));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    Kumari__DOT____Vcellinp__u_FA_2__x2 = (1U & (((IData)(vlSelf->a) 
                                                  >> 6U) 
                                                 & ((IData)(vlSelf->b) 
                                                    >> 5U)));
    Kumari__DOT____Vcellinp__u_FA_2__x1 = (IData)((
                                                   ((IData)(vlSelf->a) 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 4U)));
    Kumari__DOT____Vcellinp__u_FA_1__x1 = (1U & (((IData)(vlSelf->a) 
                                                  >> 3U) 
                                                 & ((IData)(vlSelf->b) 
                                                    >> 5U)));
    Kumari__DOT____VdfgRegularize_h94734ef3_0_39 = 
        (1U & ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                     >> 6U)));
    Kumari__DOT____VdfgRegularize_h94734ef3_0_38 = 
        (1U & (((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                             >> 6U)));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 1U)));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Kumari__DOT____Vcellinp__u_HA_1__x1 = (1U & (((IData)(vlSelf->a) 
                                                  >> 3U) 
                                                 & ((IData)(vlSelf->b) 
                                                    >> 6U)));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 2U)));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 5U));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 3U)));
    Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Kumari__DOT____VdfgRegularize_h94734ef3_0_41 = 
        ((IData)(vlSelf->a) & ((IData)(vlSelf->b) >> 7U));
    Kumari__DOT____Vcellinp__u_FA_1__x2 = (1U & (((IData)(vlSelf->a) 
                                                  >> 2U) 
                                                 & ((IData)(vlSelf->b) 
                                                    >> 6U)));
    Kumari__DOT____Vcellinp__u_HA_1__x2 = (IData)((
                                                   ((IData)(vlSelf->a) 
                                                    >> 2U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 7U)));
    Kumari__DOT____Vcellinp__u_FA_1__x3 = (IData)((
                                                   ((IData)(vlSelf->a) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 7U)));
    vlSelf->Kumari__DOT__stage1_pp1[1U] = (1U & ((((IData)(vlSelf->a) 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->b) 
                                                     >> 4U)) 
                                                 | (IData)(Kumari__DOT____VdfgRegularize_h94734ef3_0_36)));
    vlSelf->Kumari__DOT__stage1_pp0[3U] = Kumari__DOT____VdfgRegularize_h94734ef3_0_43;
    vlSelf->Kumari__DOT__stage1_pp1[2U] = (1U & ((((IData)(vlSelf->a) 
                                                   >> 2U) 
                                                  & ((IData)(vlSelf->b) 
                                                     >> 4U)) 
                                                 | ((IData)(Kumari__DOT____VdfgRegularize_h94734ef3_0_35) 
                                                    | (IData)(Kumari__DOT____VdfgRegularize_h94734ef3_0_39))));
    Kumari__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
           ^ ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2) 
              ^ (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3)));
    Kumari__DOT__exact_4to2_cout1 = (((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                                      & (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2)) 
                                     | ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3) 
                                        & ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                                           | (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2))));
    Kumari__DOT__exact_4to2_cout2 = (((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
                                      & (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2)) 
                                     | ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3) 
                                        & ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
                                           | (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2))));
    Kumari__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
           ^ ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2) 
              ^ (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3)));
    Kumari__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
           ^ ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2) 
              ^ (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3)));
    Kumari__DOT__exact_4to2_cout3 = (((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                      & (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2)) 
                                     | ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3) 
                                        & ((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                           | (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2))));
    Kumari__DOT____VdfgRegularize_h94734ef3_0_42 = 
        (1U & ((((IData)(vlSelf->a) >> 3U) & ((IData)(vlSelf->b) 
                                              >> 4U)) 
               | ((IData)(Kumari__DOT____VdfgRegularize_h94734ef3_0_34) 
                  | ((IData)(Kumari__DOT____VdfgRegularize_h94734ef3_0_38) 
                     | (IData)(Kumari__DOT____VdfgRegularize_h94734ef3_0_41)))));
    Kumari__DOT__pp6 = (((IData)((((IData)(vlSelf->a) 
                                   >> 7U) & ((IData)(vlSelf->b) 
                                             >> 6U))) 
                         << 7U) | ((0x40U & ((IData)(vlSelf->a) 
                                             & (IData)(vlSelf->b))) 
                                   | ((0x20U & ((IData)(vlSelf->a) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 1U))) 
                                      | (((IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4) 
                                          << 4U) | 
                                         (((IData)(Kumari__DOT____Vcellinp__u_HA_1__x1) 
                                           << 3U) | 
                                          (((IData)(Kumari__DOT____Vcellinp__u_FA_1__x2) 
                                            << 2U) 
                                           | (((IData)(Kumari__DOT____VdfgRegularize_h94734ef3_0_38) 
                                               << 1U) 
                                              | (IData)(Kumari__DOT____VdfgRegularize_h94734ef3_0_39))))))));
    Kumari__DOT____Vcellout__u_HA_1__sum = ((IData)(Kumari__DOT____Vcellinp__u_HA_1__x1) 
                                            ^ (IData)(Kumari__DOT____Vcellinp__u_HA_1__x2));
    Kumari__DOT____Vcellout__u_HA_1__carry = ((IData)(Kumari__DOT____Vcellinp__u_HA_1__x1) 
                                              & (IData)(Kumari__DOT____Vcellinp__u_HA_1__x2));
    Kumari__DOT____Vcellout__u_FA_1__sum = ((IData)(Kumari__DOT____Vcellinp__u_FA_1__x1) 
                                            ^ ((IData)(Kumari__DOT____Vcellinp__u_FA_1__x2) 
                                               ^ (IData)(Kumari__DOT____Vcellinp__u_FA_1__x3)));
    Kumari__DOT____Vcellout__u_FA_1__carry = (((IData)(Kumari__DOT____Vcellinp__u_FA_1__x1) 
                                               & (IData)(Kumari__DOT____Vcellinp__u_FA_1__x2)) 
                                              | (((IData)(Kumari__DOT____Vcellinp__u_FA_1__x2) 
                                                  | (IData)(Kumari__DOT____Vcellinp__u_FA_1__x1)) 
                                                 & (IData)(Kumari__DOT____Vcellinp__u_FA_1__x3)));
    Kumari__DOT__pp7 = ((0x80U & ((IData)(vlSelf->a) 
                                  & (IData)(vlSelf->b))) 
                        | (((IData)((((IData)(vlSelf->a) 
                                      >> 6U) & ((IData)(vlSelf->b) 
                                                >> 7U))) 
                            << 6U) | (((IData)((((IData)(vlSelf->a) 
                                                 >> 5U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 7U))) 
                                       << 5U) | (((IData)(
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
                                                    | (((IData)(Kumari__DOT____Vcellinp__u_HA_1__x2) 
                                                        << 2U) 
                                                       | (((IData)(Kumari__DOT____Vcellinp__u_FA_1__x3) 
                                                           << 1U) 
                                                          | (IData)(Kumari__DOT____VdfgRegularize_h94734ef3_0_41))))))));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum 
        = ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry 
        = ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           & (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry 
        = (((IData)(Kumari__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)) 
           | ((IData)(Kumari__DOT__exact_4to2_cout1) 
              & ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4))));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum 
        = ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumari__DOT__exact_4to2_cout1) 
              ^ (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry 
        = (((IData)(Kumari__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)) 
           | ((IData)(Kumari__DOT__exact_4to2_cout2) 
              & ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4))));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum 
        = ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumari__DOT__exact_4to2_cout2) 
              ^ (IData)(Kumari__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)));
    Kumari__DOT____Vcellout__u_FA_2__carry = (((IData)(Kumari__DOT____Vcellinp__u_FA_2__x1) 
                                               & (IData)(Kumari__DOT____Vcellinp__u_FA_2__x2)) 
                                              | (((IData)(Kumari__DOT____Vcellinp__u_FA_2__x2) 
                                                  | (IData)(Kumari__DOT____Vcellinp__u_FA_2__x1)) 
                                                 & (IData)(Kumari__DOT__exact_4to2_cout3)));
    Kumari__DOT____Vcellout__u_FA_2__sum = ((IData)(Kumari__DOT____Vcellinp__u_FA_2__x1) 
                                            ^ ((IData)(Kumari__DOT____Vcellinp__u_FA_2__x2) 
                                               ^ (IData)(Kumari__DOT__exact_4to2_cout3)));
    Kumari__DOT__ECM = ((IData)(Kumari__DOT____VdfgRegularize_h94734ef3_0_43) 
                        & (IData)(Kumari__DOT____VdfgRegularize_h94734ef3_0_42));
    vlSelf->Kumari__DOT__stage1_pp1[3U] = Kumari__DOT____VdfgRegularize_h94734ef3_0_42;
    vlSelf->Kumari__DOT__stage1_pp0[9U] = (1U & ((IData)(Kumari__DOT__pp6) 
                                                 >> 7U));
    vlSelf->Kumari__DOT__stage1_pp2[3U] = (1U & ((IData)(Kumari__DOT__pp6) 
                                                 >> 6U));
    vlSelf->Kumari__DOT__stage1_pp2[2U] = (1U & ((IData)(Kumari__DOT__pp6) 
                                                 >> 5U));
    vlSelf->Kumari__DOT__stage1_pp3[0U] = Kumari__DOT____Vcellout__u_HA_1__sum;
    vlSelf->Kumari__DOT__stage1_pp1[6U] = Kumari__DOT____Vcellout__u_HA_1__carry;
    vlSelf->Kumari__DOT__stage1_pp1[4U] = Kumari__DOT____Vcellout__u_FA_1__sum;
    vlSelf->Kumari__DOT__stage1_pp1[5U] = Kumari__DOT____Vcellout__u_FA_1__carry;
    vlSelf->Kumari__DOT__stage1_pp3[3U] = (1U & ((IData)(Kumari__DOT__pp7) 
                                                 >> 5U));
    vlSelf->Kumari__DOT__stage1_pp3[2U] = (1U & ((IData)(Kumari__DOT__pp7) 
                                                 >> 4U));
    vlSelf->Kumari__DOT__stage1_pp3[1U] = (1U & ((IData)(Kumari__DOT__pp7) 
                                                 >> 3U));
    vlSelf->Kumari__DOT__stage1_pp0[0xaU] = (1U & ((IData)(Kumari__DOT__pp7) 
                                                   >> 7U));
    vlSelf->Kumari__DOT__stage1_pp1[9U] = (1U & ((IData)(Kumari__DOT__pp7) 
                                                 >> 6U));
    vlSelf->Kumari__DOT__stage1_pp0[4U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum;
    vlSelf->Kumari__DOT__stage1_pp0[5U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry;
    vlSelf->Kumari__DOT__stage1_pp0[6U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry;
    Kumari__DOT__stage2_exact_4to2_cout1 = (((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
                                             & (IData)(Kumari__DOT____Vcellout__u_FA_1__carry)) 
                                            | ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum) 
                                               & ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
                                                  | (IData)(Kumari__DOT____Vcellout__u_FA_1__carry))));
    Kumari__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
           ^ ((IData)(Kumari__DOT____Vcellout__u_FA_1__carry) 
              ^ (IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum)));
    vlSelf->Kumari__DOT__stage1_pp2[0U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum;
    vlSelf->Kumari__DOT__stage1_pp0[7U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry;
    Kumari__DOT__stage2_exact_4to2_cout2 = (((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
                                             & (IData)(Kumari__DOT____Vcellout__u_HA_1__carry)) 
                                            | ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum) 
                                               & ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
                                                  | (IData)(Kumari__DOT____Vcellout__u_HA_1__carry))));
    Kumari__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
           ^ ((IData)(Kumari__DOT____Vcellout__u_HA_1__carry) 
              ^ (IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum)));
    vlSelf->Kumari__DOT__stage1_pp2[1U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum;
    vlSelf->Kumari__DOT__stage1_pp0[8U] = Kumari__DOT____Vcellout__u_FA_2__carry;
    vlSelf->Kumari__DOT__stage1_pp1[7U] = Kumari__DOT____Vcellout__u_FA_2__sum;
    Kumari__DOT____Vcellout__u_FA_stage2_1__sum = ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
                                                   ^ 
                                                   ((IData)(Kumari__DOT____Vcellout__u_FA_1__sum) 
                                                    ^ (IData)(Kumari__DOT__ECM)));
    Kumari__DOT__stage2_FA_cout = (((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
                                    & (IData)(Kumari__DOT____Vcellout__u_FA_1__sum)) 
                                   | (((IData)(Kumari__DOT____Vcellout__u_FA_1__sum) 
                                       | (IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum)) 
                                      & (IData)(Kumari__DOT__ECM)));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry 
        = (((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & vlSelf->Kumari__DOT__stage1_pp3[1U]) 
           | ((IData)(Kumari__DOT__stage2_exact_4to2_cout1) 
              & ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | vlSelf->Kumari__DOT__stage1_pp3[1U])));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum 
        = ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumari__DOT__stage2_exact_4to2_cout1) 
              ^ vlSelf->Kumari__DOT__stage1_pp3[1U]));
    Kumari__DOT__stage2_exact_4to2_cout3 = (((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                             & (IData)(Kumari__DOT____Vcellout__u_FA_2__sum)) 
                                            | (vlSelf->Kumari__DOT__stage1_pp2
                                               [2U] 
                                               & ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                                  | (IData)(Kumari__DOT____Vcellout__u_FA_2__sum))));
    Kumari__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
           ^ ((IData)(Kumari__DOT____Vcellout__u_FA_2__sum) 
              ^ vlSelf->Kumari__DOT__stage1_pp2[2U]));
    vlSelf->Kumari__DOT__stage2_pp1[8U] = vlSelf->Kumari__DOT__stage1_pp0
        [0xaU];
    vlSelf->Kumari__DOT__stage2_pp0[3U] = vlSelf->Kumari__DOT__stage1_pp0
        [3U];
    vlSelf->Kumari__DOT__stage2_pp0[2U] = vlSelf->Kumari__DOT__stage1_pp0
        [2U];
    vlSelf->Kumari__DOT__stage2_pp0[1U] = vlSelf->Kumari__DOT__stage1_pp0
        [1U];
    vlSelf->Kumari__DOT__stage2_pp0[0U] = vlSelf->Kumari__DOT__stage1_pp0
        [0U];
    vlSelf->Kumari__DOT__stage2_pp1[3U] = vlSelf->Kumari__DOT__stage1_pp1
        [3U];
    vlSelf->Kumari__DOT__stage2_pp1[2U] = vlSelf->Kumari__DOT__stage1_pp1
        [2U];
    vlSelf->Kumari__DOT__stage2_pp1[1U] = vlSelf->Kumari__DOT__stage1_pp1
        [1U];
    vlSelf->Kumari__DOT__stage2_pp1[0U] = vlSelf->Kumari__DOT__stage1_pp1
        [0U];
    Kumari__DOT__stage2_exact_4to2_cout4 = (((IData)(Kumari__DOT____Vcellout__u_FA_2__carry) 
                                             & vlSelf->Kumari__DOT__stage1_pp1
                                             [8U]) 
                                            | (vlSelf->Kumari__DOT__stage1_pp2
                                               [3U] 
                                               & ((IData)(Kumari__DOT____Vcellout__u_FA_2__carry) 
                                                  | vlSelf->Kumari__DOT__stage1_pp1
                                                  [8U])));
    Kumari__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Kumari__DOT____Vcellout__u_FA_2__carry) 
           ^ (vlSelf->Kumari__DOT__stage1_pp1[8U] ^ 
              vlSelf->Kumari__DOT__stage1_pp2[3U]));
    vlSelf->Kumari__DOT__stage2_pp0[4U] = Kumari__DOT____Vcellout__u_FA_stage2_1__sum;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry 
        = (((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Kumari__DOT____Vcellout__u_HA_1__sum)) 
           | ((IData)(Kumari__DOT__stage2_FA_cout) 
              & ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Kumari__DOT____Vcellout__u_HA_1__sum))));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum 
        = ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumari__DOT__stage2_FA_cout) 
              ^ (IData)(Kumari__DOT____Vcellout__u_HA_1__sum)));
    vlSelf->Kumari__DOT__stage2_pp0[7U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry;
    vlSelf->Kumari__DOT__stage2_pp1[4U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum;
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry 
        = (((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & vlSelf->Kumari__DOT__stage1_pp3[2U]) 
           | ((IData)(Kumari__DOT__stage2_exact_4to2_cout2) 
              & ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | vlSelf->Kumari__DOT__stage1_pp3[2U])));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum 
        = ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumari__DOT__stage2_exact_4to2_cout2) 
              ^ vlSelf->Kumari__DOT__stage1_pp3[2U]));
    Kumari__DOT____Vcellout__u_FA_stage2_2__carry = 
        ((vlSelf->Kumari__DOT__stage1_pp0[9U] & vlSelf->Kumari__DOT__stage1_pp1
          [9U]) | ((vlSelf->Kumari__DOT__stage1_pp1
                    [9U] | vlSelf->Kumari__DOT__stage1_pp0
                    [9U]) & (IData)(Kumari__DOT__stage2_exact_4to2_cout4)));
    Kumari__DOT____Vcellout__u_FA_stage2_2__sum = (
                                                   vlSelf->Kumari__DOT__stage1_pp0
                                                   [9U] 
                                                   ^ 
                                                   (vlSelf->Kumari__DOT__stage1_pp1
                                                    [9U] 
                                                    ^ (IData)(Kumari__DOT__stage2_exact_4to2_cout4)));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry 
        = (((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & vlSelf->Kumari__DOT__stage1_pp3[3U]) 
           | ((IData)(Kumari__DOT__stage2_exact_4to2_cout3) 
              & ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | vlSelf->Kumari__DOT__stage1_pp3[3U])));
    Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum 
        = ((IData)(Kumari__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Kumari__DOT__stage2_exact_4to2_cout3) 
              ^ vlSelf->Kumari__DOT__stage1_pp3[3U]));
    vlSelf->Kumari__DOT__stage2_pp0[6U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry;
    vlSelf->Kumari__DOT__stage2_pp0[5U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum;
    vlSelf->Kumari__DOT__stage2_pp0[8U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry;
    vlSelf->Kumari__DOT__stage2_pp1[5U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum;
    vlSelf->Kumari__DOT__stage2_pp0[0xaU] = Kumari__DOT____Vcellout__u_FA_stage2_2__carry;
    vlSelf->Kumari__DOT__stage2_pp1[7U] = Kumari__DOT____Vcellout__u_FA_stage2_2__sum;
    vlSelf->Kumari__DOT__stage2_pp0[9U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry;
    vlSelf->Kumari__DOT__stage2_pp1[6U] = Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum;
    Kumari__DOT__cout_HA_stage3_1 = (vlSelf->Kumari__DOT__stage2_pp0
                                     [0U] & vlSelf->Kumari__DOT__stage2_pp1
                                     [0U]);
    Kumari__DOT__cout_FA_stage3_1 = ((vlSelf->Kumari__DOT__stage2_pp0
                                      [1U] & vlSelf->Kumari__DOT__stage2_pp1
                                      [1U]) | ((vlSelf->Kumari__DOT__stage2_pp1
                                                [1U] 
                                                | vlSelf->Kumari__DOT__stage2_pp0
                                                [1U]) 
                                               & (IData)(Kumari__DOT__cout_HA_stage3_1)));
    Kumari__DOT__cout_FA_stage3_2 = ((vlSelf->Kumari__DOT__stage2_pp0
                                      [2U] & vlSelf->Kumari__DOT__stage2_pp1
                                      [2U]) | ((vlSelf->Kumari__DOT__stage2_pp1
                                                [2U] 
                                                | vlSelf->Kumari__DOT__stage2_pp0
                                                [2U]) 
                                               & (IData)(Kumari__DOT__cout_FA_stage3_1)));
    Kumari__DOT__cout_FA_stage3_3 = ((vlSelf->Kumari__DOT__stage2_pp0
                                      [3U] & vlSelf->Kumari__DOT__stage2_pp1
                                      [3U]) | ((vlSelf->Kumari__DOT__stage2_pp1
                                                [3U] 
                                                | vlSelf->Kumari__DOT__stage2_pp0
                                                [3U]) 
                                               & (IData)(Kumari__DOT__cout_FA_stage3_2)));
    Kumari__DOT__cout_HA_stage3_2 = ((IData)(Kumari__DOT____Vcellout__u_FA_stage2_1__sum) 
                                     & (IData)(Kumari__DOT__cout_FA_stage3_3));
    Kumari__DOT__cout_HA_stage3_3 = ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                     & (IData)(Kumari__DOT__cout_HA_stage3_2));
    Kumari__DOT__cout_FA_stage3_4 = (((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                      & (IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum)) 
                                     | (((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                         | (IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry)) 
                                        & (IData)(Kumari__DOT__cout_HA_stage3_3)));
    Kumari__DOT__cout_FA_stage3_5 = (((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                      & (IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum)) 
                                     | (((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                         | (IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry)) 
                                        & (IData)(Kumari__DOT__cout_FA_stage3_4)));
    Kumari__DOT__cout_FA_stage3_6 = (((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                      & (IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum)) 
                                     | (((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                         | (IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry)) 
                                        & (IData)(Kumari__DOT__cout_FA_stage3_5)));
    Kumari__DOT__cout_FA_stage3_7 = (((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                      & (IData)(Kumari__DOT____Vcellout__u_FA_stage2_2__sum)) 
                                     | (((IData)(Kumari__DOT____Vcellout__u_FA_stage2_2__sum) 
                                         | (IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry)) 
                                        & (IData)(Kumari__DOT__cout_FA_stage3_6)));
    vlSelf->final_sum = (6U | (((((IData)(Kumari__DOT____Vcellout__u_FA_stage2_2__carry) 
                                  & vlSelf->Kumari__DOT__stage1_pp0
                                  [0xaU]) | ((vlSelf->Kumari__DOT__stage1_pp0
                                              [0xaU] 
                                              | (IData)(Kumari__DOT____Vcellout__u_FA_stage2_2__carry)) 
                                             & (IData)(Kumari__DOT__cout_FA_stage3_7))) 
                                << 0xfU) | ((((IData)(Kumari__DOT____Vcellout__u_FA_stage2_2__carry) 
                                              ^ (vlSelf->Kumari__DOT__stage1_pp0
                                                 [0xaU] 
                                                 ^ (IData)(Kumari__DOT__cout_FA_stage3_7))) 
                                             << 0xeU) 
                                            | ((((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                                 ^ 
                                                 ((IData)(Kumari__DOT____Vcellout__u_FA_stage2_2__sum) 
                                                  ^ (IData)(Kumari__DOT__cout_FA_stage3_6))) 
                                                << 0xdU) 
                                               | ((((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                                    ^ 
                                                    ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                                     ^ (IData)(Kumari__DOT__cout_FA_stage3_5))) 
                                                   << 0xcU) 
                                                  | ((((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                                       ^ 
                                                       ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                                        ^ (IData)(Kumari__DOT__cout_FA_stage3_4))) 
                                                      << 0xbU) 
                                                     | ((((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                                          ^ 
                                                          ((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum) 
                                                           ^ (IData)(Kumari__DOT__cout_HA_stage3_3))) 
                                                         << 0xaU) 
                                                        | ((((IData)(Kumari__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                                             ^ (IData)(Kumari__DOT__cout_HA_stage3_2)) 
                                                            << 9U) 
                                                           | ((((IData)(Kumari__DOT____Vcellout__u_FA_stage2_1__sum) 
                                                                ^ (IData)(Kumari__DOT__cout_FA_stage3_3)) 
                                                               << 8U) 
                                                              | (((vlSelf->Kumari__DOT__stage2_pp0
                                                                   [3U] 
                                                                   ^ 
                                                                   (vlSelf->Kumari__DOT__stage2_pp1
                                                                    [3U] 
                                                                    ^ (IData)(Kumari__DOT__cout_FA_stage3_2))) 
                                                                  << 7U) 
                                                                 | (((vlSelf->Kumari__DOT__stage2_pp0
                                                                      [2U] 
                                                                      ^ 
                                                                      (vlSelf->Kumari__DOT__stage2_pp1
                                                                       [2U] 
                                                                       ^ (IData)(Kumari__DOT__cout_FA_stage3_1))) 
                                                                     << 6U) 
                                                                    | (((vlSelf->Kumari__DOT__stage2_pp0
                                                                         [1U] 
                                                                         ^ 
                                                                         (vlSelf->Kumari__DOT__stage2_pp1
                                                                          [1U] 
                                                                          ^ (IData)(Kumari__DOT__cout_HA_stage3_1))) 
                                                                        << 5U) 
                                                                       | ((vlSelf->Kumari__DOT__stage2_pp0
                                                                           [0U] 
                                                                           ^ 
                                                                           vlSelf->Kumari__DOT__stage2_pp1
                                                                           [0U]) 
                                                                          << 4U)))))))))))));
}

void VKumari___024root___eval_triggers__ico(VKumari___024root* vlSelf);

bool VKumari___024root___eval_phase__ico(VKumari___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumari__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumari___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VKumari___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VKumari___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VKumari___024root___eval_act(VKumari___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumari__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumari___024root___eval_act\n"); );
}

void VKumari___024root___eval_nba(VKumari___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumari__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumari___024root___eval_nba\n"); );
}

void VKumari___024root___eval_triggers__act(VKumari___024root* vlSelf);

bool VKumari___024root___eval_phase__act(VKumari___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumari__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumari___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VKumari___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VKumari___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VKumari___024root___eval_phase__nba(VKumari___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumari__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumari___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VKumari___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VKumari___024root___dump_triggers__ico(VKumari___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VKumari___024root___dump_triggers__nba(VKumari___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VKumari___024root___dump_triggers__act(VKumari___024root* vlSelf);
#endif  // VL_DEBUG

void VKumari___024root___eval(VKumari___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumari__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumari___024root___eval\n"); );
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
            VKumari___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/Kumari.v", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VKumari___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VKumari___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/Kumari.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VKumari___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../verilog/../verilog/Kumari.v", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VKumari___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VKumari___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VKumari___024root___eval_debug_assertions(VKumari___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKumari__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKumari___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
