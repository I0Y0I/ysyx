// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"OF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("m1s_complement_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+5,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"OF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("g_adder[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("full_adder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"S0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"C0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("half_adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("half_adder_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_adder[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("full_adder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+26,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"S0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"C0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("half_adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+34,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("half_adder_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_adder[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("full_adder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"S0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"C0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("half_adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+50,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("half_adder_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+54,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_adder[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("full_adder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+58,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"S0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"C0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("half_adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+66,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("half_adder_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+74,(4U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.A),4);
    bufp->fullCData(oldp+2,(vlSelfRef.B),4);
    bufp->fullCData(oldp+3,(vlSelfRef.S),4);
    bufp->fullBit(oldp+4,(vlSelfRef.OF));
    bufp->fullCData(oldp+5,(vlSelfRef.m1s_complement_adder__DOT__A),4);
    bufp->fullCData(oldp+6,(vlSelfRef.m1s_complement_adder__DOT__B),4);
    bufp->fullCData(oldp+7,(vlSelfRef.m1s_complement_adder__DOT__S),4);
    bufp->fullBit(oldp+8,(vlSelfRef.m1s_complement_adder__DOT__OF));
    bufp->fullCData(oldp+9,(vlSelfRef.m1s_complement_adder__DOT__C),5);
    bufp->fullBit(oldp+10,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__A));
    bufp->fullBit(oldp+11,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__B));
    bufp->fullBit(oldp+12,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cin));
    bufp->fullBit(oldp+13,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S));
    bufp->fullBit(oldp+14,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cout));
    bufp->fullBit(oldp+15,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S0));
    bufp->fullBit(oldp+16,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C0));
    bufp->fullBit(oldp+17,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C1));
    bufp->fullBit(oldp+18,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A));
    bufp->fullBit(oldp+19,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    bufp->fullBit(oldp+20,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S));
    bufp->fullBit(oldp+21,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C));
    bufp->fullBit(oldp+22,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A));
    bufp->fullBit(oldp+23,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    bufp->fullBit(oldp+24,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S));
    bufp->fullBit(oldp+25,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C));
    bufp->fullBit(oldp+26,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__A));
    bufp->fullBit(oldp+27,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__B));
    bufp->fullBit(oldp+28,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cin));
    bufp->fullBit(oldp+29,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S));
    bufp->fullBit(oldp+30,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cout));
    bufp->fullBit(oldp+31,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S0));
    bufp->fullBit(oldp+32,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C0));
    bufp->fullBit(oldp+33,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C1));
    bufp->fullBit(oldp+34,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A));
    bufp->fullBit(oldp+35,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    bufp->fullBit(oldp+36,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S));
    bufp->fullBit(oldp+37,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C));
    bufp->fullBit(oldp+38,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A));
    bufp->fullBit(oldp+39,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    bufp->fullBit(oldp+40,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S));
    bufp->fullBit(oldp+41,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C));
    bufp->fullBit(oldp+42,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__A));
    bufp->fullBit(oldp+43,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__B));
    bufp->fullBit(oldp+44,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cin));
    bufp->fullBit(oldp+45,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S));
    bufp->fullBit(oldp+46,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cout));
    bufp->fullBit(oldp+47,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S0));
    bufp->fullBit(oldp+48,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C0));
    bufp->fullBit(oldp+49,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C1));
    bufp->fullBit(oldp+50,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A));
    bufp->fullBit(oldp+51,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    bufp->fullBit(oldp+52,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S));
    bufp->fullBit(oldp+53,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C));
    bufp->fullBit(oldp+54,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A));
    bufp->fullBit(oldp+55,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    bufp->fullBit(oldp+56,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S));
    bufp->fullBit(oldp+57,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C));
    bufp->fullBit(oldp+58,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__A));
    bufp->fullBit(oldp+59,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__B));
    bufp->fullBit(oldp+60,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cin));
    bufp->fullBit(oldp+61,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S));
    bufp->fullBit(oldp+62,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cout));
    bufp->fullBit(oldp+63,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S0));
    bufp->fullBit(oldp+64,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C0));
    bufp->fullBit(oldp+65,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C1));
    bufp->fullBit(oldp+66,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A));
    bufp->fullBit(oldp+67,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B));
    bufp->fullBit(oldp+68,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S));
    bufp->fullBit(oldp+69,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C));
    bufp->fullBit(oldp+70,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A));
    bufp->fullBit(oldp+71,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B));
    bufp->fullBit(oldp+72,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S));
    bufp->fullBit(oldp+73,(vlSelfRef.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C));
}
