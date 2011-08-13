#!/usr/bin/env ruby -w
##
# Copyright (c) 2009-2010 Apple Inc. All rights reserved.
#
# @APPLE_DTS_LICENSE_HEADER_START@
# 
# IMPORTANT:  This Apple software is supplied to you by Apple Inc.
# ("Apple") in consideration of your agreement to the following terms, and your
# use, installation, modification or redistribution of this Apple software
# constitutes acceptance of these terms.  If you do not agree with these terms,
# please do not use, install, modify or redistribute this Apple software.
# 
# In consideration of your agreement to abide by the following terms, and
# subject to these terms, Apple grants you a personal, non-exclusive license,
# under Apple's copyrights in this original Apple software (the "Apple Software"),
# to use, reproduce, modify and redistribute the Apple Software, with or without
# modifications, in source and/or binary forms; provided that if you redistribute
# the Apple Software in its entirety and without modifications, you must retain
# this notice and the following text and disclaimers in all such redistributions
# of the Apple Software.  Neither the name, trademarks, service marks or logos of
# Apple Inc. may be used to endorse or promote products derived from
# the Apple Software without specific prior written permission from Apple.  Except
# as expressly stated in this notice, no other rights or licenses, express or
# implied, are granted by Apple herein, including but not limited to any patent
# rights that may be infringed by your derivative works or by other works in
# which the Apple Software may be incorporated.
# 
# The Apple Software is provided by Apple on an "AS IS" basis.  APPLE MAKES NO
# WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION THE IMPLIED
# WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS FOR A PARTICULAR
# PURPOSE, REGARDING THE APPLE SOFTWARE OR ITS USE AND OPERATION ALONE OR IN
# COMBINATION WITH YOUR PRODUCTS. 
# 
# IN NO EVENT SHALL APPLE BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
# GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION, MODIFICATION AND/OR
# DISTRIBUTION OF THE APPLE SOFTWARE, HOWEVER CAUSED AND WHETHER UNDER THEORY OF
# CONTRACT, TORT (INCLUDING NEGLIGENCE), STRICT LIABILITY OR OTHERWISE, EVEN IF
# APPLE HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
# 
# @APPLE_DTS_LICENSE_HEADER_END@
##
$debug_print = false
$exploitable_reads = false


def dputs(*args)
  puts args if $debug_print
end

#A class used for analyzing standard CrashReporter crash logs.
class CrashLog
  attr_accessor :log_string, :log_path, :exception_type, :signal, :access_address, :crashed_thread_stack, \
  :module_names, :function_names, :program_counter, :architecture, :build_version, :process_name, \
  :exploitable, :signature, :is_exploitable_s
  #If the stack trace of the crashed thread has more than this lines, it will be considered
  #a crash due to recursion
  @@MINIMUM_RECURSION_LENGTH = 300
  @@PAGE_SIZE = 4096
  #no should have a space in front of it for legacy reasons
  @@YES = "yes"
  @@NO =  " no"
  @@UNKNOWN = "unknown"
  #register names for the program counter on supported platforms
  @@Program_Counter_regs = [ "eip",
    "rip",
    "srr0"
  ]
  #The OS Build version of this computer.
  @@system_version = nil
  
  def self.YES
    @@YES
  end
  def self.NO
    @@NO
  end
  def self.UNKNOWN
    @@UNKNOWN
  end

  #A list of common system libraries that I want to ignore as the crash point
  #The criteria is that they be widely used and unlikely to be the place where the root cause of the bug is.
  #e.g. if it crashes in libSystem, most likely the bug is not in libSystem, but higher up the stack.
  System_modules = [
    "libSystem.B.dylib",
	  "libsystem_kernel.dylib",
	  "libsystem_c.dylib",
    "com.apple.CoreFoundation",
    "libstdc++.6.dylib",
    "libobjc.A.dylib",
    "libgcc_s.1.dylib",
    "libgmalloc.dylib",
	"libc++abi.dylib",
    "???",    #For when it doesn't exist in a known module
  ]

  #If we crashed in any of these functions, two crashes match if the calling function and offset are the same,
  #regardless of the offset within this function.  
  #e.g. __memcpy + 123 / foo + 12 will match __memcpy + 456 / foo + 12 
  #since the root cause is presumably the same: a copy out of bounds
  Match_any_offset_functions = [
    "__memcpy",
    "__longcopy",
    "__memmove",
    "__bcopy",
    "__memset_pattern",
    "__bzero",
    "memcpy",
    "longcopy",
    "memmove", 
    "bcopy",
    "bzero", 
    "memset_pattern",
  ]
  
  def self.Match_any_offset_functions
    Match_any_offset_functions
  end
  
  def initialize(log_path, disassembly) 
    @@system_version = `sw_vers -buildVersion`.chomp if not @@system_version
    
    @log_path = log_path
    file = File.new(@log_path, "r")
    @log_string = file.read
    file.close
    @log_string = @log_string.delete("\r") #just in case we get a weird log that uses CRLFs
    @exception_type = nil
    @exception_code0 = nil
    @signal = nil
    @access_address = nil
    @crashed_thread_stack = nil
    @program_counter = nil
    @architecture = nil
    @build_version = nil
    @process_name = nil
    @module_names = ["unknown", "unknown"]
    @module_offsets = ["unknown", "unknown"]
    @function_offsets = ["unknown", "unknown"]
    @function_names = ["unknown", "unknown"]
    @crashed_module_path = nil
    #module_offset is used for disassembly, while module_offsets is used for signature uniquing.
    @module_offset = nil
    @module_base = nil
    #exploitable is a bool that is true only if exploitability was determined to be @@YES
    #is_exploitable_s is a string that contains @@YES, @@NO, or @@UNKNOWN
    @exploitable = nil
    @is_exploitable_s = nil
    @signature = nil
    
    #if the program crashed in _kill, we probably want to go up one more level to see what the parent was 
    #(probably abort) and use that in the signature.
    @first_signature_func_name = nil
    
    
    
    if @log_string =~ /^Process:\s+(.+)\[\d+\]$/
      @process_name = $1.rstrip
    else 
      raise "Malformed log #{@log_path}, couldn't get process name"
    end
    if @log_string =~ /^Path:\s+(.+)$/
      @process_path = $1
    else 
      raise "Malformed log #{@log_path}, couldn't get process path"
    end
    #Looks like: Exception Type:  EXC_CRASH (SIGABRT)
    if @log_string =~ /Exception Type:\s+(\w+) \((\w+)\)/
      @exception_type = $1
      @signal = $2
    else
      raise "Malformed log #{@log_path}, couldn't get exception type / signal"
    end

    #Looks like: Exception Codes: KERN_INVALID_ADDRESS at 0x0000000000000000
    #or Exception Codes: 0x000000000000000d, 0x0000000000000000
    #or Exception Codes: EXC_I386_DIV (divide by zero)
    #or Exception Type:  EXC_BAD_ACCESS (SIGBUS)
    #   Exception Codes: 0x000000000000000a, 0x00000000200e7000
    
    
    if @log_string =~ /Exception Codes: (\S+)/
      @exception_code0 = $1
      @exception_code0.chop! if @exception_code0[-1].chr == ','
    else 
      raise "Malformed log #{@log_path}, couldn't get Exception Code"
    end
    
    #Looks like: Code Type:       X86-64 (Native)
    if @log_string =~ /Code Type:\s+(X86-64|X86||PPC)/
      @architecture = $1
    else
      raise "Malformed log #{@log_path}, couldn't get valid Code Type: (X86-64|X86||PPC)'"
    end

    @@Program_Counter_regs.each { |reg|
      if @log_string =~ /\s+#{reg}: (0x[0-9a-f]+)/ 
        @program_counter = $1
        break
      end
    }

    #Looks like: OS Version:      Mac OS X 10.6 (10A432)
    #or Mac OS X Server 10.6.2 (10C517f)
    if @log_string =~ /OS Version:\s+Mac OS X (Server )?10.\d\S* \((\w+)\)/
      @build_version = $2
    else
      raise "Malformed log #{@log_path}, couldn't get OS Version"
    end

    if @exception_type == "EXC_BAD_ACCESS"
      #Looks like Exception Codes: KERN_INVALID_ADDRESS at 0x0000000000000000
      #or Exception Codes: KERN_PROTECTION_FAILURE at 0x0000000100100080
      #NOTE: it's possible to have an EXC_BAD_ACCESS with no access address on 64-bit
      #(see <rdar://problem/6763905> Crash reporter should return EXC_I386_GPFLT as exception code when appropriate)  
      # which looks like
      #Exception Codes: 0x000000000000000d, 0x0000000000000000
      if @log_string =~ /Exception Codes: (KERN_INVALID_ADDRESS|KERN_PROTECTION_FAILURE) at (\w+)/ \
        or @log_string =~ /Exception Codes: (0x000000000000000a), (0x[[:xdigit:]]+)/
        @access_address = $2
      end
    end


    #parse something like 
    #Thread 0 Crashed:
    #0   module_name                           0x00001ff6 function_name_primary + 16
    #1   crashread                           0x00001fba start + 54
    #
    crash_line_index = (@log_string =~ /Thread \d+ Crashed:[^\n]*\n([^\n]+\n)+\n/)
    if crash_line_index == nil 
      raise "Error: log file #{@log_path} did not include a proper Thread \d+ Crashed: line."
    end
    
    @crashed_thread_stack = $&
    #chop off the first Thread \d+ Crashed line
    @crashed_thread_stack = \
    @crashed_thread_stack[(@crashed_thread_stack.index("\n")+1)...@crashed_thread_stack.length]

    # = start of the line after Crashed:
    crash_line_index += (@log_string.index("\n", crash_line_index) + 1 - crash_line_index)

    #see the documentation for UniqueCrash for the definitions of these
    @module_names[0], line_end_index, @function_names[0], @function_offsets[0], instruction_address \
    = parse_crash_line(crash_line_index) 

    @module_offsets[0] = module_offset(instruction_address, @module_names[0])
    #            puts "function name = #{@function_names[0]} module offset = #{module_offsets[0]}\n\n\n"
    @module_names[1], @module_offsets[1], @function_names[1], @function_offsets[1] \
    = [@module_names[0], @module_offsets[0], @function_names[0], @function_offsets[0]]

    tmp_mod_name = @module_names[0]
    #if a suitable crash line wasn't found, leave the values set to their defaults
    return if tmp_mod_name == nil 

    #go up the stack two levels and use these for the signature
    if @function_names[0] == "__kill" or @function_names[0] == "usleep$NOCANCEL"
      tmp_mod_name, tmp_line_end_index, tmp_function_name, tmp_function_offset, tmp_instruction_address = \
      parse_crash_line(line_end_index +1)
      @first_signature_func_name = tmp_function_name
      tmp_mod_name, tmp_line_end_index, tmp_function_name, tmp_function_offset, tmp_instruction_address = \
      parse_crash_line(tmp_line_end_index +1)
      @first_signature_func_name += "^" + tmp_function_name if System_modules.include?(tmp_mod_name)
    end

    #if it's a system module, proceed up the stack until we find a function that wasn't in a system module
    while System_modules.include?(tmp_mod_name)
      tmp_mod_name, line_end_index, tmp_function_name, tmp_function_offset, tmp_instruction_address \
      = parse_crash_line(line_end_index +1)
      if tmp_mod_name == nil
        break
      elsif not System_modules.include?(tmp_mod_name)
        tmp_mod_offset = module_offset(tmp_instruction_address, tmp_mod_name)
        @module_names[1] = tmp_mod_name
        @module_offsets[1] = tmp_mod_offset
        @function_names[1] = tmp_function_name
        @function_offsets[1] = tmp_function_offset
      end 
    end
  
    @module_names.map! { |name|
      if name[0,3] == "..."
        name[3...name.length]
      else
        name
      end
    }

    @module_base, @crashed_module_path = module_info(@module_names[0])
  
    if @module_base != nil
      @module_offset = @program_counter.to_i(16) - @module_base.to_i(16)           
      raise "Error: invalid module offset #{@module_offset} in #{@log_path}" if @module_offset < 0
      @module_offset = "0x" + @module_offset.to_s(16) 
      #if we crashed in the main executable, we want the absolute address, not the offset 
      #This is because the module offset is only used for disassembly.
      #we can't use the numeric absolute address if -pie is on.
      if @crashed_module_path == @process_path
        @module_offset = "#{@function_names[0]} + #{@function_offsets[0]}"
      end
    else 
      @module_offset = nil
    end

    if disassembly
      @disassembly = disassembly
    else
      @disassembly = get_disassembly()
    end
    
    @is_exploitable_s = get_is_exploitable_s
    #for now treat 'unknown' as ' no'.
    @is_exploitable_s == @@YES ? @exploitable = true : @exploitable = false
    @signature = gen_signature
  end

  #return the string from arr if string starts with any of the strings in arr
  def self.string_starts_with_names(string, arr)
    arr.each { |s|
      if string =~ /^#{s}/
        return s
      end
    }
    return nil
  end
  
  #given an index, parse the next line in data starting at the index 
  #return an array of info derived from the line, or nil if error
  def parse_crash_line(crash_line_index)
    crash_line_end_index = @log_string.index("\n", crash_line_index)
    crash_line = @log_string[crash_line_index...crash_line_end_index]
    #Assumptions: module name may not have \t in it.  function name may not have '+' in it unless
    #it's a +[ at the start (for objc class methods)
    if crash_line =~ /\d+\s+([^\t]+)\t(\S+) ([+]?[^+]+)\+ (\d+)/  #
      #            p $&
      module_name = $1.rstrip
      instruction_address = $2
      function_name = $3.rstrip #get rid of trailing space
      function_offset = $4
      return [module_name, crash_line_end_index, function_name, function_offset, instruction_address]
    else
      #not necessarily a bug.
      dputs "crash line not found in #{@log_path}"
    end
    return nil
  end

  #given a hex address string like "0x316fbffa", convert it to a module offset.  This is used to match offsets even
  #with library randomization / ASLR
  # e.g. if the log shows we crashed at 0x316fbffa in module a.out, and it shows a.out is loaded at 0x316fb000 - 0x316fbffe
  #, return the hex string representing 0x316fbffa - 0x316fb000
  #if the image was not found, for example because of jumping to a wild pointer, return the instruction adddress.
  # example
  #Binary Images:
  #0x316fb000 - 0x316fbffe +a.out ??? (???) <6f9a5a317a0d377c56be28ab4d44050a> /Volumes/data_apps/svn/fuzz/trunk/exc_handler/a.out
  #0x8fe00000 - 0x8fe2db43  dyld 97.1 (???) <100d362e03410f181a34e04e94189ae5> /usr/lib/dyld
  #0x92d51000 - 0x92e84fff  com.apple.CoreFoundation 6.5.5 (476.17) <4a70c8dbb582118e31412c53dc1f407f> /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
  #0x16cda000 - 0x172dfff3 +com.macromedia.Flash Player.plugin 10.0.12.36 (1.0.4f362) <776944fd51654ca2b59ab26a33d8f9b3> /Library/Internet Plug-Ins/Flash Player.plugin/Contents/MacOS/Flash Player
  #Note: module names can include all kinds of characters and may be different from the module name given in the stack trace
  def module_offset(instruction_address, module_name)

    return instruction_address if module_name == "???"

    n_instruction_address = instruction_address.hex
    #if in commpage, return an offset from the start of the comm page rather than libsystem
    #commpage bounds are defined in cpu_capabilities.h in xnu
    if n_instruction_address >= 0xfffec000 and n_instruction_address <= 0xffffffff 
      return "0x" + (n_instruction_address - 0xfffec000).to_s(16)
    elsif n_instruction_address >= 0x00007fffffe00000 and n_instruction_address <= 0x00007fffffe00000 + 4096*2
      return "0x" + (n_instruction_address - 0x00007fffffe00000).to_s(16)
    end

    if module_name[0,3] == "..."
      #cut off leading ... if it exists
      module_name = module_name[3...module_name.length]
    end
    index = @log_string.index("Binary Images:\n")
    raise "Couldn't find string 'Binary Images:' in log #{@log_path}" if index == nil
    images = @log_string[index...@log_string.length]

    module_base, path = module_info(module_name)
    return "0x" + (n_instruction_address - module_base.hex).to_s(16)
  end
  
  #return [module base address, path to module] given a module name like com.apple.QuickTime
  def module_info(module_name)
    #note: we may need to match something like "romedia.Flash Player.plugin" to
    #0x16cda000 - 0x172dfff3 +com.macromedia.Flash Player.plugin 10.0.12.36 (1.0.4f362) <776944fd51654ca2b59ab26a33d8f9b3> /Library/Internet Plug-Ins/Flash Player.plugin/Contents/MacOS/Flash Player
    # "com.apple.QuickTime" in the stack trace should match   com.apple.QuickTime 7.6.3 (1584) 
    #in the module list, but NOT com.apple.QuickTimeFireWireDV.component 7.6.3 (1584)
    if module_name == "???"
      return [nil, nil]
    elsif @log_string =~ /(0x[[:xdigit:]]+)\s+-\s+(0x[[:xdigit:]]+)\s+[^\n]+#{Regexp.escape(module_name)} [^\/]+(\/[^\n]+)$/
      module_base = $1
      crashed_module_path = $3
      return module_base, crashed_module_path
    else
      raise "Unable to get full path of #{module_name} from log #{@log_path}"
    end  
    
    
  end
  def get_disassembly
    if @module_names[0] == "???" or @exception_type == "EXC_BAD_INSTRUCTION"
      return "unknown"
    end
    if @architecture == "X86"
      arch = "i386"
    elsif @architecture == "X86-64"
      arch = "x86_64"
    elsif @architecture == "PPC"
      arch = "ppc"
    else
      raise "Error: unknown arch #{architecture} in #{@log_path}"
    end

    module_to_disassemble = @crashed_module_path
    if  @@system_version != @build_version
      dputs "build version mismatch: log: \'#{@build_version}\', system: \'#{@@system_version}\'"
      return "unknown"
    end

    #NOTE: It's impossible to statically disassemble the commpage, you need to have a running process.
    #These are the comm page functions that frequently cause a crash.
    #See cpu_capabilities.h in xnu for a list of functions.
    #Note: for comm page functions, disassemble the absolute address of the crashing instruction, 
    #not function_name + offset.  
    #<rdar://problem/7145077> Wrong offset reported for crashes in commpage on 64-bit
    commpage_functions = [
      "__memcpy",
      "__memmove",
      "__bzero",
      "__bcopy",
      "__memset_pattern", 
      "__longcopy",
    ]
    if commpage_functions.include?(@function_names[0])
      #no -batch or 'id' will crash with a breakpoint exception
      cmd = "ruby -e 'puts \"break printf \\n run \\n x/i #{@program_counter}\"' | gdb -arch #{arch} -x /dev/stdin /usr/bin/id"            
      dputs "cmd = #{cmd}"
      disassembly = `#{cmd}`
      #cut off the last line (gdb)
      disassembly = disassembly.split("\n")[0...-1].join("\n")
    else      
      #we disassemble the module offset rather than e.g. function_name + offset, because gdb doesn't know how to 
      #mangle C++ names properly. e.g. JVTLib_103256(JVTLib_101901 const*, JVTLib_102563*, unsigned int) + 1065
      cmd = "ruby -e 'puts \"x/i #{@module_offset}\"' | gdb -arch #{arch} -x /dev/stdin -batch \"#{module_to_disassemble}\""
      dputs "cmd = #{cmd}"
      disassembly = `#{cmd}`
    end

    if disassembly =~ /Error in sourced command file:/
      dputs "Error in sourced command file for get_disas.sh"
      return "unknown"
    elsif disassembly =~ /No such file or directory/
      dputs "Error: unable to find file #{module_to_disassemble}"
      return "unknown"
    elsif disassembly =~ /not in executable format: No more archived files/
      dputs "Error: #{module_to_disassemble} is not executable or is in an inaccessible architecture"
      return "unknown"
    end
    dputs "disassembly = #{disassembly}"    

    #get only the last line
    disassembly = disassembly.split("\n")[-1]
    #If it looks like 0x100000ec8 <main>:	push   %rbp
    #chop off everything before push
    if disassembly =~ /0x[[:xdigit:]]+[^\:]+:\s+(.+)$/ #
      disassembly = $1
    else
      #ignore disassembly errors for obj-C in the main executable.
      return "unknown" if @function_names[0] =~ /^[+-]/
      puts "Error, couldn't decode disassembly from #{disassembly} for #{@log_path}"
      return "unknown"
    end        
    return disassembly
  end


  def access_type
    if @function_names[0] == "__kill" or @function_names[0] == "usleep$NOCANCEL"
      #access type is irrelevant for aborts
      return "unknown"
    end
    
    return "exec" if @program_counter == @access_address

    if @crashed_thread_stack.split(/\n/).length > @@MINIMUM_RECURSION_LENGTH
      return "recursion"
    end

    if @architecture == "PPC"
      #PPC is easier because accesses to memory (always?) go through store or load instructions.
      #write instructions start with "st"
      #read instructions start with "l"
      if @disassembly =~ /^st/
        return "write"
      elsif @disassembly =~ /^l/
        return "read"
      end
    elsif @architecture == "X86-64" || @architecture == "X86"

      #write instructions have parens around the right operand
      #read instructions have parens around the left operand
      #example: movzbl  (%eax), %eax    or movb      $0x00,(%eax)
      #or mov (eax, ebx), ecx   or mov eax, (ebx, ecx)
      #or mov (eax,ebx,4), ecx or mov eax, (ebx, ecx, 4)
      #reads always have the right parenthesis before the last comma
      #writes always have the right parenthesis after the last comma

      #REP MOVS (eax), (ebx)
      #We wouldn't know if this was a read or write without looking at the registers. 
      #But this is currently considered a write, and it probably should be; even if it's overreading
      #the source, a block copy is dangerous and should be considered exploitable.

      last_comma = @disassembly.rindex(",")
      right_paren = @disassembly.rindex(")")

      #call should come first to prevent false positives when the regex matches the name of the function
      if @disassembly =~ /call/ 
        #If the instruction looks like 	call   0x1fe6 <foo>
        #then it's due to recursion.  If it looks like call   *0x8(%eax), then it's exploitable
        if right_paren or @disassembly.index('*')
          return "exec"
        else
          return "recursion"
        end
      elsif @disassembly =~ /cmp/ or @disassembly =~ /test/ or @disassembly =~ /fld/
        return "read"
      elsif @disassembly =~ /fst/
        return "write"
      elsif last_comma != nil and right_paren != nil
        #It has 2 operands and an explicit dereference
        if (right_paren < last_comma) 
          return "read";
        else 
          return "write";
        end
      elsif @disassembly =~ /jmp/
        return "exec"
      elsif @disassembly =~ /push/
        #push (%eax) might mean crashing reading eax, or crashing writing to (%esp)
        #push eax crashing would always mean crashing writing to (%esp)
        if right_paren != nil
          return "read"
        else 
          return "recursion"
        end
      elsif @disassembly =~ /inc/ or @disassembly =~ /dec/
        #increment or decrement instructions.  Example: inc (%eax)
        #inc %eax would never crash, so we must be writing to memory.
        return "write"
      elsif @disassembly =~ /stos/
        return "write"
      elsif @disassembly =~ /lods/
        return "read"
      elsif @disassembly =~ /mov/ and right_paren == nil
        #It's something like mov    %eax,0xbbadbeef
        return "write"
      else 
        return "unknown"
      end
    end


    return "unknown"
  end

  def heap_corruption?
    suspicious_stack?(true)
  end
  
  def suspicious_stack?(heap_only = false)

    if @access_address and @access_address.to_i(16) == 0xbbadbeef
      #WebCore functions call CRASH() in various assertions or if the amount to allocate was 
      #too big.  CRASH writes a null byte to 0xbbadbeef.
      return false
    end
      
    #if these are in the stack trace, heap corruption was very likely.
    suspicious_heap_funcs = [
      "malloc", "calloc", "realloc", "CFRelease", "CFRetain", "_CFRelease", "_CFRetain","objc_msgSend",
      "szone_free", "free_small", "tiny_free_list_add_ptr", "tiny_free_list_remove_ptr",
      "small_free_list_add_ptr", "small_free_list_remove_ptr", "large_entries_free_no_lock", 
      "large_free_no_lock", "szone_batch_free", "szone_destroy",
      "CSMemNewPtr", "CSMemNewPtrClear", "CSMemNewHandle", "CSMemNewHandleClear", 
      "CSMemPtrToHand", "CSMemPtrAndHand", "CSMemDisposeHandle",  "CSMemDisposePtr", 
      "CSMemReallocateHandle", "free",  "szone_error", "WTF::fastFree(void*)", 
      "WTF::fastMalloc(unsigned long)", "WTF::FastCalloc(unsigned long, unsigned long)",
      "WTF::FastRealloc(void*, unsigned long)", 
      "WTF::tryFastMalloc(unsigned long)", "WTF::tryFastCalloc(unsigned long, unsigned long)", 
      "WTF::tryFastRealloc(void*, unsigned long)", "WTF::TCMalloc_Central_FreeList", 
    ]
    suspicious_funcs = [
      "__stack_chk_fail", "append_int", "release_file_streams_for_task", "__guard_setup",
      "_CFStringAppendFormatAndArgumentsAux", 
    ] + suspicious_heap_funcs

    suspicious_funcs = suspicious_heap_funcs if heap_only

    funcs_in_stack_trace = []

    @crashed_thread_stack.split(/\n/).each { |line|
      #Assumptions: module name may not have \t in it.  function name may not have '+' in it unless
      #it's a +[ at the start (for objc class methods)
      if line =~ /\d+\s+([^\t]+)\t(\S+) ([+]?[^+]+)\+ (\d+)/
        funcs_in_stack_trace.push($3.rstrip)
      end
    }
    #dputs "funcs in stack trace = \n\[#{funcs_in_stack_trace.join("\n")}\]\n"

    funcs_in_stack_trace.each_index { |i|
      func = funcs_in_stack_trace[i]
      #In 10.7 and later there are a bunch of different objc_msgSend* functions
      return true if func =~ /^objc_msgSend/
      if suspicious_funcs.include?(func) 
        if (func == "CFRelease" or func == "_CFRelease") and \
          funcs_in_stack_trace[0...i].include?("CGContextDelegateFinalize")
          #when CGContextDelegateFinalize is called via CFRelease, it calls a lot of code which may
          #or may not indicate that a bad pointer was released
          return false
        end
        return true 
      end
    }
    return false
  end

  #returns a string, not a bool
  def get_is_exploitable_s
    if @exception_type == "EXC_ARITHMETIC"
      return @@NO
    elsif @exception_type == "EXC_BAD_INSTRUCTION"
      stack_frame_line = @crashed_thread_stack[0..@crashed_thread_stack.index("\n")]
      if stack_frame_line =~ /^0\s+libdispatch.dylib\s+/ or stack_frame_line =~ /^0\s+libxpc.dylib\s+/
        return @@NO
      else
        return @@YES
      end
    elsif self.access_type == "recursion"
      return @@NO #this check needs to be before the suspicious stack check.
    elsif self.suspicious_stack?
      return @@YES
    elsif @exception_type == "EXC_CRASH"
      return @@NO
    elsif @exception_type == "EXC_BREAKPOINT"
      return @@NO
    elsif @exception_type == "EXC_BAD_ACCESS"
      acc_type = self.access_type
      if acc_type == "exec"
        return @@YES
      end
      if @exception_code0 =~ /(KERN_INVALID_ADDRESS|KERN_PROTECTION_FAILURE|0x000000000000000a)/ and \
      @access_address.to_i(16) < @@PAGE_SIZE
        #Null derefs for any access type other than exec are considered non-security
        return @@NO
      elsif acc_type == "read"
        if $exploitable_reads
          return @@YES
        end
        return @@NO
      elsif acc_type == "write"
        if @exception_code0 != "0x000000000000000d" and @access_address.to_i(16) == 0xbbadbeef
          return @@NO
        else 
          return @@YES
        end
      elsif acc_type == "recursion"
        return @@NO
      elsif acc_type == "unknown"
        return @@UNKNOWN
      end
    else
      dputs "Unexpected exception type #{@exception_type}"
      return @@UNKNOWN
    end

    return @@UNKNOWN
  end

  def inspect
    ret = "Program Counter = #{@program_counter}\n"
    ret << "Exception Type = #{@exception_type}\n"
    ret << "Signal = #{@signal}\n"
    ret << "Architecture = #{@architecture}\n"
    ret << "Build Version = #{@build_version}\n"
    ret << "Access address = #{@access_address}\n"
    ret << "Crashed thread = \n#{@crashed_thread_stack}\n"
    ret << "Crashed module full path = #{@module_names[0]}\n"
    ret << "Crashed function = #{@function_names[0]}\n"
    ret << "function_names = #{@function_names.join(" ")}\n"
    ret << "module_names = #{@module_names.join(" ")}\n"
    ret << "Signature = #{@signature}\n"
    ret << "\n"
    return ret
  end

  def describe
    description = "exception_type=#{@exception_type}:signal=#{@signal}:" + \
    "is_exploitable=#{self.is_exploitable_s}:instruction_disassembly=#{@disassembly}:" + \
    "instruction_address=#{@program_counter}:access_type=#{self.access_type}:" + \
    "access_address=#{@access_address}:"

    puts description
  end
  
  def gen_signature
    name0 = @function_names[0]
    off0 = @function_offsets[0]
    name1 = @function_names[1]
    off1 = @function_offsets[1]
    
    if @first_signature_func_name
      name0 = @first_signature_func_name 
      off0 = nil
    end
    
    #If we don't know the function name, then use module name and offset.
    if name0 =~ /0x[[:xdigit:]]+/
      name0 = @module_names[0] 
      off0 = @module_offsets[0]
    end
    if name1 =~ /0x[[:xdigit:]]+/
      name1 = @module_names[1] 
      off1 = @module_offsets[1]
    end

    matched_name = CrashLog.string_starts_with_names(name0, Match_any_offset_functions)
    if name0 == "0"
      sig = "[Executing invalid address]"
    elsif matched_name or off0 == nil
      sig = "#{matched_name}"
    else
      sig = "#{name0}+#{off0}"
    end
    if name0 != name1
      sig << "^#{name1}+#{off1}"
    end
    return sig
  end

end