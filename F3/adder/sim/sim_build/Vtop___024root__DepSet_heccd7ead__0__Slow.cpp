// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__m1s_complement_adder__DOT__C__0 
        = vlSelfRef.m1s_complement_adder__DOT__C;
    vlSelfRef.__Vtrigprevexpr___TOP__m1s_complement_adder__DOT__C__1 
        = vlSelfRef.m1s_complement_adder__DOT__C;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../m1s_complement_adder.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] m1s_complement_adder.C)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___stl_comb__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cin 
        = (1U & (IData)(vlSelfRef.m1s_complement_adder__DOT__C));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cin 
        = (1U & ((IData)(vlSelfRef.m1s_complement_adder__DOT__C) 
                 >> 1U));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cin 
        = (1U & ((IData)(vlSelfRef.m1s_complement_adder__DOT__C) 
                 >> 2U));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cin 
        = (1U & ((IData)(vlSelfRef.m1s_complement_adder__DOT__C) 
                 >> 3U));
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.m1s_complement_adder__DOT__A = vlSelfRef.A;
    vlSelfRef.m1s_complement_adder__DOT__B = vlSelfRef.B;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__A 
        = (1U & (IData)(vlSelfRef.m1s_complement_adder__DOT__A));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__A 
        = (1U & ((IData)(vlSelfRef.m1s_complement_adder__DOT__A) 
                 >> 1U));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__A 
        = (1U & ((IData)(vlSelfRef.m1s_complement_adder__DOT__A) 
                 >> 2U));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__A 
        = (1U & ((IData)(vlSelfRef.m1s_complement_adder__DOT__A) 
                 >> 3U));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__B 
        = (1U & (IData)(vlSelfRef.m1s_complement_adder__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__B 
        = (1U & ((IData)(vlSelfRef.m1s_complement_adder__DOT__B) 
                 >> 1U));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__B 
        = (1U & ((IData)(vlSelfRef.m1s_complement_adder__DOT__B) 
                 >> 2U));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__B 
        = (1U & ((IData)(vlSelfRef.m1s_complement_adder__DOT__B) 
                 >> 3U));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__A;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__A;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__A;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__A;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__B;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__B;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__B;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__B;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A) 
           & (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A) 
           ^ (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A) 
           & (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A) 
           ^ (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A) 
           & (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A) 
           ^ (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A) 
           & (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A) 
           ^ (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C0 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S0 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C0 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S0 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C0 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S0 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C0 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S0 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S0;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S0;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S0;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S0;
}

VL_ATTR_COLD void Vtop___024root___stl_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cin;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cin;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cin;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cin;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A) 
           ^ (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A) 
           & (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A) 
           ^ (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A) 
           & (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A) 
           ^ (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A) 
           & (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A) 
           ^ (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A) 
           & (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C1 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C1 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C1 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C1 
        = vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C;
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cout 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C0) 
           | (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C1));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cout 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C0) 
           | (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C1));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cout 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C0) 
           | (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C1));
    vlSelfRef.m1s_complement_adder__DOT__S = ((((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S)));
    vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cout 
        = ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C0) 
           | (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C1));
    vlSelfRef.S = vlSelfRef.m1s_complement_adder__DOT__S;
    vlSelfRef.m1s_complement_adder__DOT__C = ((((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cout) 
                                                << 4U) 
                                               | (((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cout) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cout) 
                                                     << 2U))) 
                                              | (((IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cout) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cout)));
    vlSelfRef.m1s_complement_adder__DOT__OF = (1U & 
                                               VL_REDXOR_8(
                                                           (0x18U 
                                                            & (IData)(vlSelfRef.m1s_complement_adder__DOT__C))));
    vlSelfRef.OF = vlSelfRef.m1s_complement_adder__DOT__OF;
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] m1s_complement_adder.C)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] m1s_complement_adder.C)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->A = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3969090544990846983ull);
    vlSelf->B = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 149303876845869574ull);
    vlSelf->S = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16337536289976144572ull);
    vlSelf->OF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14448324649188511064ull);
    vlSelf->m1s_complement_adder__DOT__A = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1571161858471254144ull);
    vlSelf->m1s_complement_adder__DOT__B = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10083307205904476732ull);
    vlSelf->m1s_complement_adder__DOT__S = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12543783222174953919ull);
    vlSelf->m1s_complement_adder__DOT__OF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5248798210977378522ull);
    vlSelf->m1s_complement_adder__DOT__C = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3343720627447357360ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10608571412257664935ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15282811133715470845ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6157330008067033143ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9983572846774828929ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2117940904025205109ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15182980149911316752ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4157518469435294108ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13308926007984636427ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16583084573490393895ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2025598216311861686ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18234043909936225401ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5170051339417797186ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16236224790730406719ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4263542928814940232ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12878299309126590310ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9412949390392362680ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9671038075250923429ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7034799712006658398ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13416081487772391272ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14114011970315198996ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1410360249922754084ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3496572369915894656ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1650414255992390099ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3755188550213729425ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15913836817657120603ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9607566724400817356ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7821908812233683717ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10060961239984059863ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11876712087235407267ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18178599364988962388ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3615861137383824156ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4849538941369227158ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17820661458461453278ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13759319023415744931ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9746757112343239441ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9765142399883210543ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8828470000835253323ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14135434209179364719ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9334083940599737120ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11708498984253850293ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17830918562478294784ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7916328789622519821ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12200645257741418660ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8451675864068223395ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10633038728443405287ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10847043508394712058ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1815068483519426185ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13075154284397871344ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15046758548606672359ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6953029781187704869ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11777428620651394755ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 653937734640947615ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6437907783232610447ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14597752639238989220ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12933210440300606529ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12500111219188781370ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2791022747531477089ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5098482890326008176ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11999114564279146054ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5432629844594861689ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9548404040055931123ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13659664902032262635ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11113119388639235587ull);
    vlSelf->m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13122515538293024360ull);
    vlSelf->__Vtrigprevexpr___TOP__m1s_complement_adder__DOT__C__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 173987716047678148ull);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__m1s_complement_adder__DOT__C__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2000118978735595634ull);
    vlSelf->__VactDidInit = 0;
}
