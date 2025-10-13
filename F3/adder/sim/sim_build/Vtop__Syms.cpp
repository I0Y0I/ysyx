// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_m1s_complement_adder);
    __Vhier.remove(&__Vscope_m1s_complement_adder, &__Vscope_m1s_complement_adder__g_adder__BRA__0__KET__);
    __Vhier.remove(&__Vscope_m1s_complement_adder, &__Vscope_m1s_complement_adder__g_adder__BRA__1__KET__);
    __Vhier.remove(&__Vscope_m1s_complement_adder, &__Vscope_m1s_complement_adder__g_adder__BRA__2__KET__);
    __Vhier.remove(&__Vscope_m1s_complement_adder, &__Vscope_m1s_complement_adder__g_adder__BRA__3__KET__);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__0__KET__, &__Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_1);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_2);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__1__KET__, &__Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_1);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_2);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__2__KET__, &__Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_1);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_2);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__3__KET__, &__Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_1);
    __Vhier.remove(&__Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_2);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_m1s_complement_adder.configure(this, name(), "m1s_complement_adder", "m1s_complement_adder", "m1s_complement_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__0__KET__.configure(this, name(), "m1s_complement_adder.g_adder[0]", "g_adder[0]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i.configure(this, name(), "m1s_complement_adder.g_adder[0].full_adder_i", "full_adder_i", "full_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_1.configure(this, name(), "m1s_complement_adder.g_adder[0].full_adder_i.half_adder_1", "half_adder_1", "half_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_2.configure(this, name(), "m1s_complement_adder.g_adder[0].full_adder_i.half_adder_2", "half_adder_2", "half_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__1__KET__.configure(this, name(), "m1s_complement_adder.g_adder[1]", "g_adder[1]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i.configure(this, name(), "m1s_complement_adder.g_adder[1].full_adder_i", "full_adder_i", "full_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_1.configure(this, name(), "m1s_complement_adder.g_adder[1].full_adder_i.half_adder_1", "half_adder_1", "half_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_2.configure(this, name(), "m1s_complement_adder.g_adder[1].full_adder_i.half_adder_2", "half_adder_2", "half_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__2__KET__.configure(this, name(), "m1s_complement_adder.g_adder[2]", "g_adder[2]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i.configure(this, name(), "m1s_complement_adder.g_adder[2].full_adder_i", "full_adder_i", "full_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_1.configure(this, name(), "m1s_complement_adder.g_adder[2].full_adder_i.half_adder_1", "half_adder_1", "half_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_2.configure(this, name(), "m1s_complement_adder.g_adder[2].full_adder_i.half_adder_2", "half_adder_2", "half_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__3__KET__.configure(this, name(), "m1s_complement_adder.g_adder[3]", "g_adder[3]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i.configure(this, name(), "m1s_complement_adder.g_adder[3].full_adder_i", "full_adder_i", "full_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_1.configure(this, name(), "m1s_complement_adder.g_adder[3].full_adder_i.half_adder_1", "half_adder_1", "half_adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_2.configure(this, name(), "m1s_complement_adder.g_adder[3].full_adder_i.half_adder_2", "half_adder_2", "half_adder", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_m1s_complement_adder);
    __Vhier.add(&__Vscope_m1s_complement_adder, &__Vscope_m1s_complement_adder__g_adder__BRA__0__KET__);
    __Vhier.add(&__Vscope_m1s_complement_adder, &__Vscope_m1s_complement_adder__g_adder__BRA__1__KET__);
    __Vhier.add(&__Vscope_m1s_complement_adder, &__Vscope_m1s_complement_adder__g_adder__BRA__2__KET__);
    __Vhier.add(&__Vscope_m1s_complement_adder, &__Vscope_m1s_complement_adder__g_adder__BRA__3__KET__);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__0__KET__, &__Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_1);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_2);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__1__KET__, &__Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_1);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_2);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__2__KET__, &__Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_1);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_2);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__3__KET__, &__Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_1);
    __Vhier.add(&__Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i, &__Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_2);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"A", &(TOP.A), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"B", &(TOP.B), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"OF", &(TOP.OF), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S", &(TOP.S), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_m1s_complement_adder.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_m1s_complement_adder.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_m1s_complement_adder.varInsert(__Vfinal,"C", &(TOP.m1s_complement_adder__DOT__C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_m1s_complement_adder.varInsert(__Vfinal,"OF", &(TOP.m1s_complement_adder__DOT__OF), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_m1s_complement_adder.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.m1s_complement_adder__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i.varInsert(__Vfinal,"C0", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i.varInsert(__Vfinal,"C1", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__C1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i.varInsert(__Vfinal,"Cin", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i.varInsert(__Vfinal,"Cout", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__Cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i.varInsert(__Vfinal,"S0", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__S0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"C", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"C", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__0__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i.varInsert(__Vfinal,"C0", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i.varInsert(__Vfinal,"C1", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__C1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i.varInsert(__Vfinal,"Cin", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i.varInsert(__Vfinal,"Cout", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__Cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i.varInsert(__Vfinal,"S0", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__S0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"C", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"C", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__1__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i.varInsert(__Vfinal,"C0", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i.varInsert(__Vfinal,"C1", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__C1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i.varInsert(__Vfinal,"Cin", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i.varInsert(__Vfinal,"Cout", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__Cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i.varInsert(__Vfinal,"S0", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__S0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"C", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"C", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__2__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i.varInsert(__Vfinal,"C0", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i.varInsert(__Vfinal,"C1", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__C1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i.varInsert(__Vfinal,"Cin", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i.varInsert(__Vfinal,"Cout", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__Cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i.varInsert(__Vfinal,"S0", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__S0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"C", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_1.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_1__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"A", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"B", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"C", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__C), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_2.varInsert(__Vfinal,"S", &(TOP.m1s_complement_adder__DOT__g_adder__BRA__3__KET____DOT__full_adder_i__DOT__half_adder_2__DOT__S), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}
