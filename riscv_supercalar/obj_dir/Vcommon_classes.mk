# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcommon.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vcommon \
	Vcommon___024root__DepSet_h41e3567a__0 \
	Vcommon___024root__DepSet_h8dea4c87__0 \
	Vcommon_pipeline__DepSet_h3f948f32__0 \
	Vcommon_pipeline__DepSet_h3f948f32__1 \
	Vcommon_if_stage__DepSet_h1b294184__0 \
	Vcommon_if_stage__DepSet_hc8203fe5__0 \
	Vcommon_pc_counter__DepSet_h308fcb3f__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcommon___024root__Slow \
	Vcommon___024root__DepSet_h41e3567a__0__Slow \
	Vcommon___024root__DepSet_h8dea4c87__0__Slow \
	Vcommon_pipeline__Slow \
	Vcommon_pipeline__DepSet_h3f948f32__0__Slow \
	Vcommon_pipeline__DepSet_hebbb754f__0__Slow \
	Vcommon___024unit__Slow \
	Vcommon___024unit__DepSet_h4cb4e5cd__0__Slow \
	Vcommon_if_stage__Slow \
	Vcommon_if_stage__DepSet_h1b294184__0__Slow \
	Vcommon_if_stage__DepSet_hc8203fe5__0__Slow \
	Vcommon_pc_counter__Slow \
	Vcommon_pc_counter__DepSet_hdec6b94a__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vcommon__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcommon__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
