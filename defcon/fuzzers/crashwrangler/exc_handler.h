/*
 * Copyright (c) 2009-2010 Apple Inc. All rights reserved.
 *
 * @APPLE_DTS_LICENSE_HEADER_START@
 * 
 * IMPORTANT:  This Apple software is supplied to you by Apple Inc.
 * ("Apple") in consideration of your agreement to the following terms, and your
 * use, installation, modification or redistribution of this Apple software
 * constitutes acceptance of these terms.  If you do not agree with these terms,
 * please do not use, install, modify or redistribute this Apple software.
 * 
 * In consideration of your agreement to abide by the following terms, and
 * subject to these terms, Apple grants you a personal, non-exclusive license,
 * under Apple's copyrights in this original Apple software (the "Apple Software"),
 * to use, reproduce, modify and redistribute the Apple Software, with or without
 * modifications, in source and/or binary forms; provided that if you redistribute
 * the Apple Software in its entirety and without modifications, you must retain
 * this notice and the following text and disclaimers in all such redistributions
 * of the Apple Software.  Neither the name, trademarks, service marks or logos of
 * Apple Inc. may be used to endorse or promote products derived from
 * the Apple Software without specific prior written permission from Apple.  Except
 * as expressly stated in this notice, no other rights or licenses, express or
 * implied, are granted by Apple herein, including but not limited to any patent
 * rights that may be infringed by your derivative works or by other works in
 * which the Apple Software may be incorporated.
 * 
 * The Apple Software is provided by Apple on an "AS IS" basis.  APPLE MAKES NO
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION THE IMPLIED
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE, REGARDING THE APPLE SOFTWARE OR ITS USE AND OPERATION ALONE OR IN
 * COMBINATION WITH YOUR PRODUCTS. 
 * 
 * IN NO EVENT SHALL APPLE BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION, MODIFICATION AND/OR
 * DISTRIBUTION OF THE APPLE SOFTWARE, HOWEVER CAUSED AND WHETHER UNDER THEORY OF
 * CONTRACT, TORT (INCLUDING NEGLIGENCE), STRICT LIABILITY OR OTHERWISE, EVEN IF
 * APPLE HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * @APPLE_DTS_LICENSE_HEADER_END@
 */
#ifndef __EXC_HANDLER_H_
#define RET_NO_CRASH 0
#define RET_OTHER_SIG -2
#define RET_ERROR -1

#define CHANGE_TO_NOT_EXPLOITABLE 2
#define CHANGE_TO_EXPLOITABLE 1
#define NO_CHANGE 0


//using the 64 version is compatible with both 32 and 64 for our purposes
#if defined (__ppc__) || defined (__ppc64__)
#define MY_THREAD_STATE ppc_thread_state64_t
#define MY_EXCEPTION_STATE struct ppc_exception_state64

//see <mach/ppc/_structs.h
#if __DARWIN_UNIX03
#define MY_PPC_PC __srr0
#else
#define MY_PPC_PC srr0
#endif //__DARWIN_UNIX03

#define MY_DISAS ppc_disassemble

#elif defined (__i386__) || defined (__x86_64__)
#define MY_THREAD_STATE x86_thread_state_t
#define MY_EXCEPTION_STATE x86_exception_state_t

//see <mach/i386/_structs.h>
#if __DARWIN_UNIX03
#define MY_X86_32_PC uts.ts32.__eip
#define MY_X86_32_AX uts.ts32.__eax
#define MY_X86_32_BX uts.ts32.__ebx
#define MY_X86_32_CX uts.ts32.__ecx
#define MY_X86_32_DX uts.ts32.__edx
#define MY_X86_32_DI uts.ts32.__edi
#define MY_X86_32_SI uts.ts32.__esi
#define MY_X86_32_SP uts.ts32.__esp
#define MY_X86_32_BP uts.ts32.__ebp


#define MY_X86_64_PC uts.ts64.__rip
#define MY_X86_64_AX uts.ts64.__rax
#define MY_X86_64_BX uts.ts64.__rbx
#define MY_X86_64_CX uts.ts64.__rcx
#define MY_X86_64_DX uts.ts64.__rdx
#define MY_X86_64_DI uts.ts64.__rdi
#define MY_X86_64_SI uts.ts64.__rsi
#define MY_X86_64_SP uts.ts64.__rsp
#define MY_X86_64_BP uts.ts64.__rbp

#else 

#define MY_X86_32_PC uts.ts32.eip
#define MY_X86_32_AX uts.ts32.eax
#define MY_X86_32_BX uts.ts32.ebx
#define MY_X86_32_CX uts.ts32.ecx
#define MY_X86_32_DX uts.ts32.edx
#define MY_X86_32_DI uts.ts32.edi
#define MY_X86_32_SI uts.ts32.esi
#define MY_X86_32_SP uts.ts32.esp
#define MY_X86_32_BP uts.ts32.ebp

#define MY_X86_64_PC uts.ts64.rip
#define MY_X86_64_AX uts.ts64.rax
#define MY_X86_64_BX uts.ts64.rbx
#define MY_X86_64_CX uts.ts64.rcx
#define MY_X86_64_DX uts.ts64.rdx
#define MY_X86_64_DI uts.ts64.rdi
#define MY_X86_64_SI uts.ts64.rsi
#define MY_X86_64_SP uts.ts64.rsp
#define MY_X86_64_BP uts.ts64.rbp

#endif //__DARWIN_UNIX03

#define MY_DISAS i386_disassemble

#else 
#error Unknown architecture
#endif //architectures

//The maximum length of the string for a disassembled instruction
#define MAX_INSTRUCTION_STRLEN 20

#define EXIT_ON_MACH_ERROR(msg, ret)                                        \
if (ret != KERN_SUCCESS) { mach_error(msg ":" , ret); delete_lock(); exit(RET_ERROR); }

#define DEFAULT_LOG_DIR "./crashlogs/"
static char *log_dir;
static char *log_path;
#define DEFAULT_LOCK_FILE "./cw.lck"
static char *lock_filename;

//stores the signal number that caused the crash
static int g_crashsignal = 0;
static void *waiter() ;
static pid_t g_child_pid;
static int g_quiet = 0;

//This is just for the header that describes the security implications.  It does NOT include the size of the crash log.
#define MAX_LOGMSG_SIZE 4096
//should only be used in catch_exception_raise_state_identity or its children
static char logmsg[MAX_LOGMSG_SIZE];
static char logmsg_human_readable[MAX_LOGMSG_SIZE];


#define APPEND_TO_LOGMSG_HR_WITH_FORMAT(format, args...) \
snprintf(logmsg_human_readable + strlen(logmsg_human_readable), \
sizeof(logmsg_human_readable) - strlen(logmsg_human_readable), format, ## args)

#define my_printf(format, args...) \
if (! g_quiet) { printf(format, ## args); }

@interface CrashReport : NSObject 
- (id) initWithTask: (task_t)task
	  exceptionType: (exception_type_t)anExceptionType
	  exceptionCode: (mach_exception_data_t)anExceptionCode
 exceptionCodeCount: (mach_msg_type_number_t)anExceptionCodeCount
			 thread: (thread_t)thread
  threadStateFlavor: (thread_state_flavor_t)aThreadStateFlavor
		threadState: (thread_state_data_t)aThreadState
   threadStateCount: (mach_msg_type_number_t)aThreadStateCount;

@end

void delete_lock();
extern char *i386_disassemble( char *sect, unsigned long left, cpu_type_t cputype);
extern char *ppc_disassemble( char *sect, unsigned long left, cpu_type_t cputype); 

void write_crashlog(task_t task, thread_t thread, exception_type_t exception, 
                    mach_exception_data_t code, mach_msg_type_number_t code_count, 
                    int *flavor, thread_state_t in_state, 
                    mach_msg_type_number_t in_state_count, exception_type_t real_exception_type);

//convert an exception code to a string
const char * strexception(exception_type_t exception);

//given a disassembled instruction, return a type like "read", "write", or "unknown"
const char * get_access_type(const char *disassembly, thread_state_t in_state, mach_exception_data_type_t access_address) ;

int stack_access_crash(thread_state_t in_state, mach_exception_data_type_t access_address);

const char * type_for_two_memory(const char *disassembly, thread_state_t in_state, mach_exception_data_type_t access_address);
uint64_t value_for_register(char *reg, x86_thread_state_t *in_state) ;

//return whether or not the base pointer is far away from the stack pointer.
int bp_inconsistent_with_sp(thread_state_t in_state);

//Usually you wouldn't have more than 1 or 2
#define MAX_OLD_EXCEPTION_HANDLERS 20

static mach_port_t g_orig_bootstrap_port;
static mach_port_t g_exception_port;
#define MY_TMP_MASK EXC_MASK_RPC_ALERT

static int g_forward_to_CrashReporter = NO;
static int g_exploitable_reads = NO;
static int g_ignore_frame_pointer = NO;

static int g_is_exploitable = NO;
extern char *__crashreporter_info__;
#endif // __EXC_HANDLER_H_