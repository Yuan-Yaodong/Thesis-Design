// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSabetzadeh.h for the primary calling header

#include "VSabetzadeh__pch.h"
#include "VSabetzadeh___024root.h"

void VSabetzadeh___024root___ico_sequent__TOP__0(VSabetzadeh___024root* vlSelf);

void VSabetzadeh___024root___eval_ico(VSabetzadeh___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSabetzadeh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSabetzadeh___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VSabetzadeh___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VSabetzadeh___024root___ico_sequent__TOP__0(VSabetzadeh___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSabetzadeh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSabetzadeh___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ Sabetzadeh__DOT__pp6;
    Sabetzadeh__DOT__pp6 = 0;
    CData/*7:0*/ Sabetzadeh__DOT__pp7;
    Sabetzadeh__DOT__pp7 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__ECM_Carry_1;
    Sabetzadeh__DOT__ECM_Carry_1 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__ECM_Carry_2;
    Sabetzadeh__DOT__ECM_Carry_2 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__exact_4to2_cout1;
    Sabetzadeh__DOT__exact_4to2_cout1 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__exact_4to2_cout2;
    Sabetzadeh__DOT__exact_4to2_cout2 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__exact_4to2_cout3;
    Sabetzadeh__DOT__exact_4to2_cout3 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1;
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_FA_1__carry;
    Sabetzadeh__DOT____Vcellout__u_FA_1__carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_FA_1__sum;
    Sabetzadeh__DOT____Vcellout__u_FA_1__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_FA_1__x3;
    Sabetzadeh__DOT____Vcellinp__u_FA_1__x3 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_FA_1__x2;
    Sabetzadeh__DOT____Vcellinp__u_FA_1__x2 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_FA_1__x1;
    Sabetzadeh__DOT____Vcellinp__u_FA_1__x1 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_FA_2__carry;
    Sabetzadeh__DOT____Vcellout__u_FA_2__carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_FA_2__sum;
    Sabetzadeh__DOT____Vcellout__u_FA_2__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_FA_2__x2;
    Sabetzadeh__DOT____Vcellinp__u_FA_2__x2 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_FA_2__x1;
    Sabetzadeh__DOT____Vcellinp__u_FA_2__x1 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_HA_1__carry;
    Sabetzadeh__DOT____Vcellout__u_HA_1__carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_HA_1__sum;
    Sabetzadeh__DOT____Vcellout__u_HA_1__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_HA_1__x2;
    Sabetzadeh__DOT____Vcellinp__u_HA_1__x2 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellinp__u_HA_1__x1;
    Sabetzadeh__DOT____Vcellinp__u_HA_1__x1 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__stage2_FA_carry;
    Sabetzadeh__DOT__stage2_FA_carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_FA_stage2_1__sum;
    Sabetzadeh__DOT____Vcellout__u_FA_stage2_1__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT__stage2_exact_4to2_cout1;
    Sabetzadeh__DOT__stage2_exact_4to2_cout1 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT__stage2_exact_4to2_cout2;
    Sabetzadeh__DOT__stage2_exact_4to2_cout2 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT__stage2_exact_4to2_cout3;
    Sabetzadeh__DOT__stage2_exact_4to2_cout3 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT__stage2_exact_4to2_cout4;
    Sabetzadeh__DOT__stage2_exact_4to2_cout4 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__carry;
    Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__carry = 0;
    CData/*0:0*/ Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__sum;
    Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__sum = 0;
    CData/*0:0*/ Sabetzadeh__DOT__cout_HA_stage3_1;
    Sabetzadeh__DOT__cout_HA_stage3_1 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__cout_FA_stage3_1;
    Sabetzadeh__DOT__cout_FA_stage3_1 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__cout_FA_stage3_2;
    Sabetzadeh__DOT__cout_FA_stage3_2 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__cout_FA_stage3_3;
    Sabetzadeh__DOT__cout_FA_stage3_3 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_15;
    Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_15 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_18;
    Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_18 = 0;
    CData/*0:0*/ Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_20;
    Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_20 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    CData/*0:0*/ Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0;
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 = 0;
    // Body
    Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_15 
        = (1U & (((IData)(vlSelf->a) >> 2U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    vlSelf->Sabetzadeh__DOT__stage1_pp1[4U] = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 7U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 5U)));
    Sabetzadeh__DOT__ECM_Carry_1 = (1U & ((((IData)(vlSelf->a) 
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
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 4U));
    Sabetzadeh__DOT____Vcellinp__u_FA_2__x2 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 6U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 5U)));
    Sabetzadeh__DOT____Vcellinp__u_FA_2__x1 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 7U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 4U)));
    Sabetzadeh__DOT____Vcellinp__u_FA_1__x1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 5U)));
    Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_18 
        = (1U & (((IData)(vlSelf->a) >> 1U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 5U)));
    Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_20 
        = ((IData)(vlSelf->a) & ((IData)(vlSelf->b) 
                                 >> 7U));
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 1U)));
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 2U)));
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3 
        = (1U & (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 >> 5U));
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 3U)));
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Sabetzadeh__DOT____Vcellinp__u_FA_1__x2 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 2U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 6U)));
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4 
        = (1U & (((IData)(vlSelf->a) >> 4U) & ((IData)(vlSelf->b) 
                                               >> 6U)));
    Sabetzadeh__DOT____Vcellinp__u_HA_1__x1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 6U)));
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1 
        = (IData)((((IData)(vlSelf->a) >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 2U)));
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2 
        = (1U & (((IData)(vlSelf->a) >> 6U) & ((IData)(vlSelf->b) 
                                               >> 3U)));
    Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3 
        = (1U & (((IData)(vlSelf->a) >> 5U) & ((IData)(vlSelf->b) 
                                               >> 4U)));
    Sabetzadeh__DOT____Vcellinp__u_FA_1__x3 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 1U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 7U)));
    Sabetzadeh__DOT____Vcellinp__u_HA_1__x2 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 2U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 7U)));
    Sabetzadeh__DOT__ECM_Carry_2 = (1U & ((((IData)(vlSelf->a) 
                                            >> 3U) 
                                           & ((IData)(vlSelf->b) 
                                              >> 4U)) 
                                          | ((IData)(Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_15) 
                                             | ((IData)(Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_18) 
                                                | (IData)(Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_20)))));
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
           ^ ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2) 
              ^ (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3)));
    Sabetzadeh__DOT__exact_4to2_cout1 = (((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                                          & (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2)) 
                                         | ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x3) 
                                            & ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x1) 
                                               | (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x2))));
    Sabetzadeh__DOT__exact_4to2_cout3 = (((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                          & (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2)) 
                                         | ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3) 
                                            & ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
                                               | (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2))));
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x1) 
           ^ ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x2) 
              ^ (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x3)));
    Sabetzadeh__DOT__pp6 = (((IData)((((IData)(vlSelf->a) 
                                       >> 7U) & ((IData)(vlSelf->b) 
                                                 >> 6U))) 
                             << 6U) | ((0x20U & (((IData)(vlSelf->a) 
                                                  & (IData)(vlSelf->b)) 
                                                 >> 1U)) 
                                       | ((0x10U & 
                                           (((IData)(vlSelf->a) 
                                             >> 1U) 
                                            & ((IData)(vlSelf->b) 
                                               >> 2U))) 
                                          | (((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4) 
                                              << 3U) 
                                             | (((IData)(Sabetzadeh__DOT____Vcellinp__u_HA_1__x1) 
                                                 << 2U) 
                                                | (((IData)(Sabetzadeh__DOT____Vcellinp__u_FA_1__x2) 
                                                    << 1U) 
                                                   | (IData)(Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_18)))))));
    Sabetzadeh__DOT__exact_4to2_cout2 = (((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
                                          & (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2)) 
                                         | ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3) 
                                            & ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
                                               | (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2))));
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x1) 
           ^ ((IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x2) 
              ^ (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x3)));
    Sabetzadeh__DOT____Vcellout__u_FA_1__sum = ((IData)(Sabetzadeh__DOT____Vcellinp__u_FA_1__x1) 
                                                ^ ((IData)(Sabetzadeh__DOT____Vcellinp__u_FA_1__x2) 
                                                   ^ (IData)(Sabetzadeh__DOT____Vcellinp__u_FA_1__x3)));
    Sabetzadeh__DOT____Vcellout__u_FA_1__carry = (((IData)(Sabetzadeh__DOT____Vcellinp__u_FA_1__x1) 
                                                   & (IData)(Sabetzadeh__DOT____Vcellinp__u_FA_1__x2)) 
                                                  | (((IData)(Sabetzadeh__DOT____Vcellinp__u_FA_1__x2) 
                                                      | (IData)(Sabetzadeh__DOT____Vcellinp__u_FA_1__x1)) 
                                                     & (IData)(Sabetzadeh__DOT____Vcellinp__u_FA_1__x3)));
    Sabetzadeh__DOT____Vcellout__u_HA_1__sum = ((IData)(Sabetzadeh__DOT____Vcellinp__u_HA_1__x1) 
                                                ^ (IData)(Sabetzadeh__DOT____Vcellinp__u_HA_1__x2));
    Sabetzadeh__DOT____Vcellout__u_HA_1__carry = ((IData)(Sabetzadeh__DOT____Vcellinp__u_HA_1__x1) 
                                                  & (IData)(Sabetzadeh__DOT____Vcellinp__u_HA_1__x2));
    Sabetzadeh__DOT__pp7 = ((0x80U & ((IData)(vlSelf->a) 
                                      & (IData)(vlSelf->b))) 
                            | (((IData)((((IData)(vlSelf->a) 
                                          >> 6U) & 
                                         ((IData)(vlSelf->b) 
                                          >> 7U))) 
                                << 6U) | (((IData)(
                                                   (((IData)(vlSelf->a) 
                                                     >> 5U) 
                                                    & ((IData)(vlSelf->b) 
                                                       >> 7U))) 
                                           << 5U) | 
                                          (((IData)(
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
                                              | (((IData)(Sabetzadeh__DOT____Vcellinp__u_HA_1__x2) 
                                                  << 2U) 
                                                 | (((IData)(Sabetzadeh__DOT____Vcellinp__u_FA_1__x3) 
                                                     << 1U) 
                                                    | (IData)(Sabetzadeh__DOT____VdfgRegularize_h5fda460f_0_20))))))));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum 
        = ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Sabetzadeh__DOT__ECM_Carry_1) 
              ^ (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4)));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry 
        = (((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4)) 
           | ((IData)(Sabetzadeh__DOT__ECM_Carry_1) 
              & ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_1__x4))));
    Sabetzadeh__DOT____Vcellout__u_FA_2__carry = (((IData)(Sabetzadeh__DOT____Vcellinp__u_FA_2__x1) 
                                                   & (IData)(Sabetzadeh__DOT____Vcellinp__u_FA_2__x2)) 
                                                  | (((IData)(Sabetzadeh__DOT____Vcellinp__u_FA_2__x2) 
                                                      | (IData)(Sabetzadeh__DOT____Vcellinp__u_FA_2__x1)) 
                                                     & (IData)(Sabetzadeh__DOT__exact_4to2_cout3)));
    Sabetzadeh__DOT____Vcellout__u_FA_2__sum = ((IData)(Sabetzadeh__DOT____Vcellinp__u_FA_2__x1) 
                                                ^ ((IData)(Sabetzadeh__DOT____Vcellinp__u_FA_2__x2) 
                                                   ^ (IData)(Sabetzadeh__DOT__exact_4to2_cout3)));
    vlSelf->Sabetzadeh__DOT__stage1_pp0[5U] = (1U & 
                                               ((IData)(Sabetzadeh__DOT__pp6) 
                                                >> 6U));
    vlSelf->Sabetzadeh__DOT__stage1_pp2[3U] = (1U & 
                                               ((IData)(Sabetzadeh__DOT__pp6) 
                                                >> 5U));
    vlSelf->Sabetzadeh__DOT__stage1_pp2[2U] = (1U & 
                                               ((IData)(Sabetzadeh__DOT__pp6) 
                                                >> 4U));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry 
        = (((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)) 
           | ((IData)(Sabetzadeh__DOT__exact_4to2_cout2) 
              & ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4))));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum 
        = ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Sabetzadeh__DOT__exact_4to2_cout2) 
              ^ (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_3__x4)));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry 
        = (((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)) 
           | ((IData)(Sabetzadeh__DOT__exact_4to2_cout1) 
              & ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4))));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum 
        = ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage1_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Sabetzadeh__DOT__exact_4to2_cout1) 
              ^ (IData)(Sabetzadeh__DOT____Vcellinp__u_exact_4to2_compressor_stage1_2__x4)));
    vlSelf->Sabetzadeh__DOT__stage1_pp1[0U] = Sabetzadeh__DOT____Vcellout__u_FA_1__sum;
    vlSelf->Sabetzadeh__DOT__stage1_pp1[1U] = Sabetzadeh__DOT____Vcellout__u_FA_1__carry;
    vlSelf->Sabetzadeh__DOT__stage1_pp3[0U] = Sabetzadeh__DOT____Vcellout__u_HA_1__sum;
    vlSelf->Sabetzadeh__DOT__stage1_pp1[2U] = Sabetzadeh__DOT____Vcellout__u_HA_1__carry;
    vlSelf->Sabetzadeh__DOT__stage1_pp0[6U] = (1U & 
                                               ((IData)(Sabetzadeh__DOT__pp7) 
                                                >> 7U));
    vlSelf->Sabetzadeh__DOT__stage1_pp1[5U] = (1U & 
                                               ((IData)(Sabetzadeh__DOT__pp7) 
                                                >> 6U));
    vlSelf->Sabetzadeh__DOT__stage1_pp3[3U] = (1U & 
                                               ((IData)(Sabetzadeh__DOT__pp7) 
                                                >> 5U));
    vlSelf->Sabetzadeh__DOT__stage1_pp3[2U] = (1U & 
                                               ((IData)(Sabetzadeh__DOT__pp7) 
                                                >> 4U));
    vlSelf->Sabetzadeh__DOT__stage1_pp3[1U] = (1U & 
                                               ((IData)(Sabetzadeh__DOT__pp7) 
                                                >> 3U));
    Sabetzadeh__DOT____Vcellout__u_FA_stage2_1__sum 
        = ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
           ^ ((IData)(Sabetzadeh__DOT____Vcellout__u_FA_1__sum) 
              ^ (IData)(Sabetzadeh__DOT__ECM_Carry_2)));
    vlSelf->Sabetzadeh__DOT__stage1_pp0[0U] = Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum;
    Sabetzadeh__DOT__stage2_FA_carry = (((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum) 
                                         & (IData)(Sabetzadeh__DOT____Vcellout__u_FA_1__sum)) 
                                        | (((IData)(Sabetzadeh__DOT____Vcellout__u_FA_1__sum) 
                                            | (IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__sum)) 
                                           & (IData)(Sabetzadeh__DOT__ECM_Carry_2)));
    vlSelf->Sabetzadeh__DOT__stage1_pp0[1U] = Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry;
    vlSelf->Sabetzadeh__DOT__stage1_pp0[4U] = Sabetzadeh__DOT____Vcellout__u_FA_2__carry;
    vlSelf->Sabetzadeh__DOT__stage1_pp1[3U] = Sabetzadeh__DOT____Vcellout__u_FA_2__sum;
    vlSelf->Sabetzadeh__DOT__stage1_pp0[3U] = Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry;
    vlSelf->Sabetzadeh__DOT__stage1_pp2[1U] = Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum;
    vlSelf->Sabetzadeh__DOT__stage1_pp0[2U] = Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry;
    Sabetzadeh__DOT__stage2_exact_4to2_cout2 = (((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
                                                 & (IData)(Sabetzadeh__DOT____Vcellout__u_HA_1__carry)) 
                                                | ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum) 
                                                   & ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
                                                      | (IData)(Sabetzadeh__DOT____Vcellout__u_HA_1__carry))));
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__carry) 
           ^ ((IData)(Sabetzadeh__DOT____Vcellout__u_HA_1__carry) 
              ^ (IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__sum)));
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
           ^ ((IData)(Sabetzadeh__DOT____Vcellout__u_FA_1__carry) 
              ^ (IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum)));
    Sabetzadeh__DOT__stage2_exact_4to2_cout1 = (((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
                                                 & (IData)(Sabetzadeh__DOT____Vcellout__u_FA_1__carry)) 
                                                | ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum) 
                                                   & ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_1__carry) 
                                                      | (IData)(Sabetzadeh__DOT____Vcellout__u_FA_1__carry))));
    vlSelf->Sabetzadeh__DOT__stage1_pp2[0U] = Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_2__sum;
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum 
        = ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Sabetzadeh__DOT__stage2_FA_carry) 
              ^ (IData)(Sabetzadeh__DOT____Vcellout__u_HA_1__sum)));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry 
        = (((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & (IData)(Sabetzadeh__DOT____Vcellout__u_HA_1__sum)) 
           | ((IData)(Sabetzadeh__DOT__stage2_FA_carry) 
              & ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_1__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | (IData)(Sabetzadeh__DOT____Vcellout__u_HA_1__sum))));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry 
        = (((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & vlSelf->Sabetzadeh__DOT__stage1_pp3[1U]) 
           | ((IData)(Sabetzadeh__DOT__stage2_exact_4to2_cout1) 
              & ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | vlSelf->Sabetzadeh__DOT__stage1_pp3
                 [1U])));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum 
        = ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_2__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Sabetzadeh__DOT__stage2_exact_4to2_cout1) 
              ^ vlSelf->Sabetzadeh__DOT__stage1_pp3
              [1U]));
    Sabetzadeh__DOT__stage2_exact_4to2_cout4 = (((IData)(Sabetzadeh__DOT____Vcellout__u_FA_2__carry) 
                                                 & vlSelf->Sabetzadeh__DOT__stage1_pp1
                                                 [4U]) 
                                                | (vlSelf->Sabetzadeh__DOT__stage1_pp2
                                                   [3U] 
                                                   & ((IData)(Sabetzadeh__DOT____Vcellout__u_FA_2__carry) 
                                                      | vlSelf->Sabetzadeh__DOT__stage1_pp1
                                                      [4U])));
    Sabetzadeh__DOT__stage2_exact_4to2_cout3 = (((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                                 & (IData)(Sabetzadeh__DOT____Vcellout__u_FA_2__sum)) 
                                                | (vlSelf->Sabetzadeh__DOT__stage1_pp2
                                                   [2U] 
                                                   & ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
                                                      | (IData)(Sabetzadeh__DOT____Vcellout__u_FA_2__sum))));
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Sabetzadeh__DOT____Vcellout__u_FA_2__carry) 
           ^ (vlSelf->Sabetzadeh__DOT__stage1_pp1[4U] 
              ^ vlSelf->Sabetzadeh__DOT__stage1_pp2
              [3U]));
    Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0 
        = ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage1_3__carry) 
           ^ ((IData)(Sabetzadeh__DOT____Vcellout__u_FA_2__sum) 
              ^ vlSelf->Sabetzadeh__DOT__stage1_pp2
              [2U]));
    Sabetzadeh__DOT__cout_HA_stage3_1 = ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                         & (IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum));
    Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__carry 
        = ((vlSelf->Sabetzadeh__DOT__stage1_pp0[5U] 
            & vlSelf->Sabetzadeh__DOT__stage1_pp1[5U]) 
           | ((vlSelf->Sabetzadeh__DOT__stage1_pp1[5U] 
               | vlSelf->Sabetzadeh__DOT__stage1_pp0
               [5U]) & (IData)(Sabetzadeh__DOT__stage2_exact_4to2_cout4)));
    Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__sum 
        = (vlSelf->Sabetzadeh__DOT__stage1_pp0[5U] 
           ^ (vlSelf->Sabetzadeh__DOT__stage1_pp1[5U] 
              ^ (IData)(Sabetzadeh__DOT__stage2_exact_4to2_cout4)));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry 
        = (((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & vlSelf->Sabetzadeh__DOT__stage1_pp3[3U]) 
           | ((IData)(Sabetzadeh__DOT__stage2_exact_4to2_cout3) 
              & ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | vlSelf->Sabetzadeh__DOT__stage1_pp3
                 [3U])));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum 
        = ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_4__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Sabetzadeh__DOT__stage2_exact_4to2_cout3) 
              ^ vlSelf->Sabetzadeh__DOT__stage1_pp3
              [3U]));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry 
        = (((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
            & vlSelf->Sabetzadeh__DOT__stage1_pp3[2U]) 
           | ((IData)(Sabetzadeh__DOT__stage2_exact_4to2_cout2) 
              & ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
                 | vlSelf->Sabetzadeh__DOT__stage1_pp3
                 [2U])));
    Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum 
        = ((IData)(Sabetzadeh__DOT__u_exact_4to2_compressor_stage2_3__DOT____VdfgRegularize_h0d3b8a33_0_0) 
           ^ ((IData)(Sabetzadeh__DOT__stage2_exact_4to2_cout2) 
              ^ vlSelf->Sabetzadeh__DOT__stage1_pp3
              [2U]));
    Sabetzadeh__DOT__cout_FA_stage3_1 = (((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                          & (IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum)) 
                                         | (((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                             | (IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry)) 
                                            & (IData)(Sabetzadeh__DOT__cout_HA_stage3_1)));
    Sabetzadeh__DOT__cout_FA_stage3_2 = (((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                          & (IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum)) 
                                         | (((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                             | (IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry)) 
                                            & (IData)(Sabetzadeh__DOT__cout_FA_stage3_1)));
    Sabetzadeh__DOT__cout_FA_stage3_3 = (((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                          & (IData)(Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__sum)) 
                                         | (((IData)(Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__sum) 
                                             | (IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry)) 
                                            & (IData)(Sabetzadeh__DOT__cout_FA_stage3_2)));
    vlSelf->final_sum = (6U | (((((IData)(Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__carry) 
                                  & vlSelf->Sabetzadeh__DOT__stage1_pp0
                                  [6U]) | ((vlSelf->Sabetzadeh__DOT__stage1_pp0
                                            [6U] | (IData)(Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__carry)) 
                                           & (IData)(Sabetzadeh__DOT__cout_FA_stage3_3))) 
                                << 0xfU) | ((((IData)(Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__carry) 
                                              ^ (vlSelf->Sabetzadeh__DOT__stage1_pp0
                                                 [6U] 
                                                 ^ (IData)(Sabetzadeh__DOT__cout_FA_stage3_3))) 
                                             << 0xeU) 
                                            | ((((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__carry) 
                                                 ^ 
                                                 ((IData)(Sabetzadeh__DOT____Vcellout__u_FA_stage2_2__sum) 
                                                  ^ (IData)(Sabetzadeh__DOT__cout_FA_stage3_2))) 
                                                << 0xdU) 
                                               | ((((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__carry) 
                                                    ^ 
                                                    ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_4__sum) 
                                                     ^ (IData)(Sabetzadeh__DOT__cout_FA_stage3_1))) 
                                                   << 0xcU) 
                                                  | ((((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__carry) 
                                                       ^ 
                                                       ((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_3__sum) 
                                                        ^ (IData)(Sabetzadeh__DOT__cout_HA_stage3_1))) 
                                                      << 0xbU) 
                                                     | ((((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__carry) 
                                                          ^ (IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_2__sum)) 
                                                         << 0xaU) 
                                                        | (((IData)(Sabetzadeh__DOT____Vcellout__u_exact_4to2_compressor_stage2_1__sum) 
                                                            << 9U) 
                                                           | ((IData)(Sabetzadeh__DOT____Vcellout__u_FA_stage2_1__sum) 
                                                              << 8U)))))))));
}

void VSabetzadeh___024root___eval_triggers__ico(VSabetzadeh___024root* vlSelf);

bool VSabetzadeh___024root___eval_phase__ico(VSabetzadeh___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSabetzadeh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSabetzadeh___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VSabetzadeh___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VSabetzadeh___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VSabetzadeh___024root___eval_act(VSabetzadeh___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSabetzadeh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSabetzadeh___024root___eval_act\n"); );
}

void VSabetzadeh___024root___eval_nba(VSabetzadeh___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSabetzadeh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSabetzadeh___024root___eval_nba\n"); );
}

void VSabetzadeh___024root___eval_triggers__act(VSabetzadeh___024root* vlSelf);

bool VSabetzadeh___024root___eval_phase__act(VSabetzadeh___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSabetzadeh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSabetzadeh___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSabetzadeh___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VSabetzadeh___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSabetzadeh___024root___eval_phase__nba(VSabetzadeh___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSabetzadeh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSabetzadeh___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSabetzadeh___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSabetzadeh___024root___dump_triggers__ico(VSabetzadeh___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSabetzadeh___024root___dump_triggers__nba(VSabetzadeh___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSabetzadeh___024root___dump_triggers__act(VSabetzadeh___024root* vlSelf);
#endif  // VL_DEBUG

void VSabetzadeh___024root___eval(VSabetzadeh___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSabetzadeh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSabetzadeh___024root___eval\n"); );
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
            VSabetzadeh___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/Sabetzadeh.v", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VSabetzadeh___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VSabetzadeh___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../verilog/../verilog/Sabetzadeh.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VSabetzadeh___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../verilog/../verilog/Sabetzadeh.v", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VSabetzadeh___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VSabetzadeh___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSabetzadeh___024root___eval_debug_assertions(VSabetzadeh___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSabetzadeh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSabetzadeh___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
