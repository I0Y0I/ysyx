// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(A,3,0);
        VL_IN8(B,3,0);
        VL_OUT8(S,3,0);
        VL_OUT8(OF,0,0);
        CData/*3:0*/ m1s_complement_adder__DOT__A;
        CData/*3:0*/ m1s_complement_adder__DOT__B;
        CData/*3:0*/ m1s_complement_adder__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__OF;
        CData/*4:0*/ m1s_complement_adder__DOT__C;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cin;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cout;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S0;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C0;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C1;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cin;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cout;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S0;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C0;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C1;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cin;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cout;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S0;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C0;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C1;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cin;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cout;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S0;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C0;
    };
    struct {
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C1;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S;
        CData/*0:0*/ m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C;
        CData/*4:0*/ __Vtrigprevexpr___TOP__m1s_complement_adder__DOT__C__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*4:0*/ __Vtrigprevexpr___TOP__m1s_complement_adder__DOT__C__1;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ m1s_complement_adder__DOT__WIDTH = 4U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
