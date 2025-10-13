#
# Makefile to synthesize SystemVerilog files with Yosys and generate SVG with netlistsvg
#

# Set the default top-level module.
# Can be overridden from the command line, e.g., 'make TOP=full_adder'
TOP ?= top

# Find all SystemVerilog source files in the current directory.
SRCS = $(wildcard *.sv)

# The default target when running 'make'.
# It will build the SVG file corresponding to the TOP module.
all: $(TOP).svg

# Rule to generate the SVG from the JSON file.
# $@ is the target name (e.g., top.svg)
# $^ is the first dependency (e.g., top.json)
$(TOP).svg: $(TOP).json
	@echo "--- Generating SVG for $(TOP) ---"
	netlistsvg $^ -o $@
	@echo "Success: Created $@"

# Rule to generate the JSON file from the source files.
# This target depends on all .sv files. If any .sv file changes, this will re-run.
$(TOP).json: $(SRCS)
	@echo "--- Synthesizing $(SRCS) with Yosys (top: $(TOP)) ---"
	yosys -p 'read_verilog -sv $(SRCS); hierarchy -top $(TOP); proc; write_json $@'

# Target to clean up generated files.
clean:
	@echo "--- Cleaning up generated files ---"
	rm -f *.json *.svg

# Declare targets that are not actual files.
.PHONY: all clean
