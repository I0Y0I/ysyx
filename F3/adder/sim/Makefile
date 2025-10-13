# Makefile for Cocotb + Verilator Simulation

SIM ?= verilator

# Parameters
TOPLEVEL_LANG ?= verilog

# The top-level module we want to test
TOPLEVEL ?= m1s_complement_adder

# Look for Verilog sources in the parent directory
VERILOG_SOURCES = $(wildcard ../*.sv)

# The Python test file is in the current directory
COCOTB_TEST_MODULES ?= test_1s_complement_adder

ifeq ($(SIM), verilator)
	EXTRA_ARGS += --trace --trace-fst --trace-structs
endif

# Include the cocotb setup
include $(shell cocotb-config --makefiles)/Makefile.sim
