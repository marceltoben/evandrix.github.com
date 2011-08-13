all: exc_handler

CC=gcc
CXX=g++
SW_VERS=$(shell sw_vers -productVersion | cut -b 1-4)

ifeq ($(SW_VERS),10.5)
#NOTE: In Leopard, vmutils.framework and CrashReporterSupport.framework are not 64 bit.
	CFLAGS=-arch ppc -arch i386 -fstack-protector -D_FORTIFY_SOURCE=2  -g
	EXC_HANDLER=exc_handler_leopard
else ifeq ($(SW_VERS), 10.6)
	CFLAGS=-arch i386 -arch x86_64 -g
	EXC_HANDLER=exc_handler_snowleopard
else 
	CFLAGS=-arch i386 -arch x86_64 -g
	EXC_HANDLER=exc_handler_lion
endif

exc_handler: $(EXC_HANDLER)
	

TESTS = abort badsyscall crashread crashwrite crashexec divzero illegalinstruction nocrash test_disas nullderef spin recursion stack_buffer_overflow malloc_abort fortify_source_overflow cfrelease_null uninit_heap recursive_write bad_func_call cpp_crash objc_crash invalid_address_64 commpage read_and_write_instruction illegal_libdispatch fastMalloc variable_length_stack_buffer

TEST_DIR = tests_src

MIG_OUTPUT=mach_exc.h mach_excUser.c mach_excServer.h mach_excServer.c
MIG_OBJECTS=mach_excUser.o mach_excServer.o
DISAS_OBJECTS=ppc_disasm.o i386_disasm.o


$(MIG_OUTPUT): mach_exc.defs
	mig -header mach_exc.h -user mach_excUser.c -sheader mach_excServer.h -server mach_excServer.c mach_exc.defs

$(MIG_OBJECTS): $(MIG_OUTPUT)
	$(CC) $(CFLAGS) -Wall -Wextra -c mach_excUser.c
	$(CC) $(CFLAGS) -Wall -Wextra -c mach_excServer.c

$(DISAS_OBJECTS): i386_disasm.c ppc_disasm.c
	$(CC) -c $(CFLAGS) i386_disasm.c
	$(CC) -c $(CFLAGS) ppc_disasm.c

exc_handler.o: exc_handler.m exc_handler.h
	$(CC) $(CFLAGS) -Wall -Wextra -c -F/System/Library/PrivateFrameworks exc_handler.m

exc_handler_lion: CrashReport_Lion.o $(MIG_OBJECTS) $(DISAS_OBJECTS) exc_handler.o
	$(CC) $(CFLAGS) -Wl,-pie -F/System/Library/PrivateFrameworks  -framework CoreSymbolication -framework IOKit -framework Foundation -framework ApplicationServices -framework Symbolication -framework CoreServices -framework CrashReporterSupport -framework CoreFoundation -framework CommerceKit -o exc_handler exc_handler.o $(DISAS_OBJECTS) CrashReport_Lion.o $(MIG_OBJECTS) 


exc_handler_snowleopard: CrashReport_Snowleopard.o $(MIG_OBJECTS) $(DISAS_OBJECTS) exc_handler.o
	$(CC) $(CFLAGS) -Wl,-pie -F/System/Library/PrivateFrameworks  -framework CoreSymbolication  -framework Foundation -framework ApplicationServices -framework Symbolication -framework CoreServices -framework CrashReporterSupport -framework CoreFoundation -o exc_handler exc_handler.o $(DISAS_OBJECTS) CrashReport_Snowleopard.o $(MIG_OBJECTS) 

exc_handler_leopard: CrashReport_Leopard.o $(MIG_OBJECTS) $(DISAS_OBJECTS) exc_handler.o
	$(CC)  $(CFLAGS) "-F/System/Library/PrivateFrameworks" -framework vmutils -framework SystemConfiguration "-framework" "Foundation" "-framework" "ApplicationServices" -framework Symbolication -framework CoreServices -framework CrashReporterSupport -framework CoreFoundation -o exc_handler CrashReport_Leopard.o $(MIG_OBJECTS) $(DISAS_OBJECTS) exc_handler.o 

TEST_FLAGS=
tests: $(TESTS)
test_disas:  i386_disasm.c ppc_disasm.c $(TEST_DIR)/test_disas.c
	$(CC) -o test_disas -g i386_disasm.c ppc_disasm.c $(TEST_DIR)/test_disas.c
abort: $(TEST_DIR)/abort.c
	$(CC) $(TEST_FLAGS) -o abort $(TEST_DIR)/abort.c
badsyscall: $(TEST_DIR)/badsyscall.c
	$(CC) $(TEST_FLAGS) -o badsyscall $(TEST_DIR)/badsyscall.c
crashread: $(TEST_DIR)/crashread.c
	$(CC) $(TEST_FLAGS) -o crashread $(TEST_DIR)/crashread.c
crashwrite: $(TEST_DIR)/crashwrite.c
	$(CC) $(TEST_FLAGS) -o crashwrite $(TEST_DIR)/crashwrite.c
crashexec: $(TEST_DIR)/crashexec.c
	$(CC) $(TEST_FLAGS) -o crashexec $(TEST_DIR)/crashexec.c
divzero: $(TEST_DIR)/divzero.c
	$(CC) $(TEST_FLAGS) -o divzero $(TEST_DIR)/divzero.c
illegalinstruction: $(TEST_DIR)/illegalinstruction.c
	$(CC) $(TEST_FLAGS) -o illegalinstruction $(TEST_DIR)/illegalinstruction.c
nullderef: $(TEST_DIR)/nullderef.c
	$(CC) $(TEST_FLAGS) -o nullderef $(TEST_DIR)/nullderef.c
nocrash: $(TEST_DIR)/nocrash.c
	$(CC) $(TEST_FLAGS) -o nocrash $(TEST_DIR)/nocrash.c
spin: $(TEST_DIR)/spin.c
	$(CC) $(TEST_FLAGS) -o spin $(TEST_DIR)/spin.c
recursion: $(TEST_DIR)/recursion.c
	$(CC) $(TEST_FLAGS) -o recursion $(TEST_DIR)/recursion.c
stack_buffer_overflow: $(TEST_DIR)/stack_buffer_overflow.c
	$(CC) $(TEST_FLAGS) -fstack-protector -D_FORTIFY_SOURCE=0 -o stack_buffer_overflow $(TEST_DIR)/stack_buffer_overflow.c
fortify_source_overflow: $(TEST_DIR)/stack_buffer_overflow.c
	$(CC) $(TEST_FLAGS) -D_FORTIFY_SOURCE=2 -fno-stack-protector -o fortify_source_overflow $(TEST_DIR)/stack_buffer_overflow.c
malloc_abort: $(TEST_DIR)/malloc_abort.c
	$(CC) $(TEST_FLAGS) -o malloc_abort $(TEST_DIR)/malloc_abort.c
cfrelease_null: $(TEST_DIR)/cfrelease_null.c
	$(CC) $(TEST_FLAGS)  -framework CoreFoundation -o cfrelease_null $(TEST_DIR)/cfrelease_null.c
uninit_heap: $(TEST_DIR)/uninit_heap.c
	$(CC) $(TEST_FLAGS) -o uninit_heap $(TEST_DIR)/uninit_heap.c
recursive_write: $(TEST_DIR)/recursive_write.c
	$(CC) $(TEST_FLAGS) -o recursive_write $(TEST_DIR)/recursive_write.c
bad_func_call: $(TEST_DIR)/bad_func_call.c
	$(CC) $(TEST_FLAGS) -o bad_func_call $(TEST_DIR)/bad_func_call.c
cpp_crash:  $(TEST_DIR)/cpp_crash.cpp
	$(CXX) $(TEST_FLAGS) -o cpp_crash $(TEST_DIR)/cpp_crash.cpp
objc_crash: $(TEST_DIR)/objc_crash.m
	$(CC) $(TEST_FLAGS) -o objc_crash -framework Foundation $(TEST_DIR)/objc_crash.m
invalid_address_64: $(TEST_DIR)/invalid_address_64.c
	$(CC) $(TEST_FLAGS) -o invalid_address_64 $(TEST_DIR)/invalid_address_64.c
commpage: $(TEST_DIR)/commpage.c
	$(CC) $(TEST_FLAGS) -o commpage $(TEST_DIR)/commpage.c
read_and_write_instruction: $(TEST_DIR)/read_and_write_instruction.c
	$(CC) $(TEST_FLAGS) -o read_and_write_instruction $(TEST_DIR)/read_and_write_instruction.c
illegal_libdispatch:  $(TEST_DIR)/illegal_libdispatch.c
	$(CC) $(TEST_FLAGS) -o illegal_libdispatch $(TEST_DIR)/illegal_libdispatch.c
fastMalloc: $(TEST_DIR)/fastMalloc.cpp
	$(CXX) $(TEST_FLAGS) -framework JavaScriptCore -o fastMalloc $(TEST_DIR)/fastMalloc.cpp
variable_length_stack_buffer: $(TEST_DIR)/variable_length_stack_buffer.c
	$(CC) $(TEST_FLAGS) -o variable_length_stack_buffer $(TEST_DIR)/variable_length_stack_buffer.c

clean:
	- rm -r exc_handler $(TESTS)  *.dSYM $(MIG_OUTPUT) $(DISAS_OBJECTS) $(MIG_OBJECTS) exc_handler.o
