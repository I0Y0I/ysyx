// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.A),4);
    bufp->chgCData(oldp+1,(vlSelfRef.B),4);
    bufp->chgCData(oldp+2,(vlSelfRef.S),4);
    bufp->chgBit(oldp+3,(vlSelfRef.OF));
    bufp->chgCData(oldp+4,(vlSelfRef.m1s_complement_adder__DOT__A),4);
    bufp->chgCData(oldp+5,(vlSelfRef.m1s_complement_adder__DOT__B),4);
    bufp->chgCData(oldp+6,(vlSelfRef.m1s_complement_adder__DOT__S),4);
    bufp->chgBit(oldp+7,(vlSelfRef.m1s_complement_adder__DOT__OF));
    bufp->chgCData(oldp+8,(vlSelfRef.m1s_complement_adder__DOT__C),5);
    bufp->chgBit(oldp+9,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__A));
    bufp->chgBit(oldp+10,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__B));
    bufp->chgBit(oldp+11,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cin));
    bufp->chgBit(oldp+12,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S));
    bufp->chgBit(oldp+13,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cout));
    bufp->chgBit(oldp+14,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S0));
    bufp->chgBit(oldp+15,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C0));
    bufp->chgBit(oldp+16,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C1));
    bufp->chgBit(oldp+17,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A));
    bufp->chgBit(oldp+18,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    bufp->chgBit(oldp+19,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S));
    bufp->chgBit(oldp+20,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C));
    bufp->chgBit(oldp+21,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A));
    bufp->chgBit(oldp+22,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    bufp->chgBit(oldp+23,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S));
    bufp->chgBit(oldp+24,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C));
    bufp->chgBit(oldp+25,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__A));
    bufp->chgBit(oldp+26,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__B));
    bufp->chgBit(oldp+27,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cin));
    bufp->chgBit(oldp+28,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S));
    bufp->chgBit(oldp+29,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cout));
    bufp->chgBit(oldp+30,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S0));
    bufp->chgBit(oldp+31,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C0));
    bufp->chgBit(oldp+32,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C1));
    bufp->chgBit(oldp+33,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A));
    bufp->chgBit(oldp+34,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    bufp->chgBit(oldp+35,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S));
    bufp->chgBit(oldp+36,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C));
    bufp->chgBit(oldp+37,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A));
    bufp->chgBit(oldp+38,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    bufp->chgBit(oldp+39,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S));
    bufp->chgBit(oldp+40,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C));
    bufp->chgBit(oldp+41,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__A));
    bufp->chgBit(oldp+42,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__B));
    bufp->chgBit(oldp+43,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cin));
    bufp->chgBit(oldp+44,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S));
    bufp->chgBit(oldp+45,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cout));
    bufp->chgBit(oldp+46,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S0));
    bufp->chgBit(oldp+47,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C0));
    bufp->chgBit(oldp+48,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C1));
    bufp->chgBit(oldp+49,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A));
    bufp->chgBit(oldp+50,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    bufp->chgBit(oldp+51,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S));
    bufp->chgBit(oldp+52,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C));
    bufp->chgBit(oldp+53,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A));
    bufp->chgBit(oldp+54,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    bufp->chgBit(oldp+55,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S));
    bufp->chgBit(oldp+56,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C));
    bufp->chgBit(oldp+57,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__A));
    bufp->chgBit(oldp+58,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__B));
    bufp->chgBit(oldp+59,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cin));
    bufp->chgBit(oldp+60,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S));
    bufp->chgBit(oldp+61,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cout));
    bufp->chgBit(oldp+62,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S0));
    bufp->chgBit(oldp+63,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C0));
    bufp->chgBit(oldp+64,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C1));
    bufp->chgBit(oldp+65,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A));
    bufp->chgBit(oldp+66,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    bufp->chgBit(oldp+67,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S));
    bufp->chgBit(oldp+68,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C));
    bufp->chgBit(oldp+69,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A));
    bufp->chgBit(oldp+70,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    bufp->chgBit(oldp+71,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S));
    bufp->chgBit(oldp+72,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
