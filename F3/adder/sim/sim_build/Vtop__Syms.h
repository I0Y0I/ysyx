// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_m1s_complement_adder;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__0__KET__;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_1;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__0__KET____full_adder_i__half_adder_2;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__1__KET__;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_1;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__1__KET____full_adder_i__half_adder_2;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__2__KET__;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_1;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__2__KET____full_adder_i__half_adder_2;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__3__KET__;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_1;
    VerilatedScope __Vscope_m1s_complement_adder__g_adder__BRA__3__KET____full_adder_i__half_adder_2;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
