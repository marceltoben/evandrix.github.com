#!/usr/bin/env ruby -w
##
# Copyright (c) 2010 Apple Inc. All rights reserved.
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


require 'optparse'
require File.dirname(File.expand_path(__FILE__)) + '/FuzzPatch'
require File.dirname(File.expand_path(__FILE__)) + '/CrashWrangler'

require 'socket'
require 'ftools'
require 'rubygems'
require 'fileutils'
Run_log_path = "./run_log.txt"


class FuzzAutomate
  def initialize(start_case, end_case, prog_name, extension, seed_file, fuzz_type, case_dir, \
    delete_non_crashing, fuzz_log_path, write_last_case, seed_type, application, application_version, \
	  os_build)
    @start_case, @end_case, @prog_name, @extension, @seed_file, @fuzz_type, @case_dir, \
    @delete_non_crashing, @fuzz_log_path, @write_last_case, @seed_type, @application, \
	  @application_version, @os_build = 
    start_case, end_case, prog_name, extension, seed_file, fuzz_type, case_dir, \
    delete_non_crashing, fuzz_log_path, write_last_case, seed_type, application, \
	application_version, os_build
    
    @crash_count = 0
    @exploitable_count = 0
    @meta_files_dir = CrashWrangler::META_FILES_DIR
    
    #Make sure log gets written if user hits ctrl-c.
    trap("INT") { 
      write_log
    }
    
  end
  
  def write_log
    #don't make people install the plist gem unless they need to.
    require 'plist' if @fuzz_log_path
    
    return unless @fuzz_log_path

    num_cases = @current_case - @start_case +1 #+1 since it's zero indexed
    return if num_cases == 0
    os_build = `sw_vers -buildVersion`.chomp if @os_build == nil or @os_build == ""
    timestamp = Time.now.localtime.strftime("%b %d %H:%M:%S %Y")
    @application_version = "" if @application_version == nil
    crashes = @crash_count
    exploitables = @exploitable_count

    print "#{@crash_count} / #{num_cases} = ";
    percent_crashed = @crash_count.to_f / num_cases.to_f
    printf("%.2f of cases crashed. \n", percent_crashed)

    if File.exists?(@fuzz_log_path)
      #we're resuming from a previous run
      plist = Plist::parse_xml(@fuzz_log_path)
      num_cases += plist['cases']
      crashes += plist['crashes']
      exploitables += plist['exploitables']
      #p plist.inspect
    end

    
    log_data = {
      "time" => timestamp,
      "host" => Socket.gethostname,
      "os_build" => os_build,
      "cases" => num_cases,
      "crashes" => crashes,
      "exploitables" => exploitables,
      "fuzz_type" => @fuzz_type,
      "seed_file" => File.basename(@seed_file),
      "application" => @application,
      "application_version" => @application_version,
      "seed_type" => @seed_type,
    }
    log_data = log_data.to_plist
    file = File.open(@fuzz_log_path, "w")
    file.write(log_data)
    file.close    

    puts "Data logged to #{@fuzz_log_path}"

  end

  # Some shells will return -1 as 255, -2 as 254, etc.  Convert back to negative.
  def signed_byte(ret_val)
    ret_val = [ret_val].pack("c").unpack("c")[0]
    return ret_val
  end

  def run

    #change the working directory to the directory of this script.
    Dir.chdir(File.dirname(File.expand_path(__FILE__)));
    @case_num = @start_case

    if (@extension == "none") 
      @extension = "";
    elsif @extension == "none.diff"
      @extension = ".diff"
    end

    #append a '/' if there isn't one

    @case_dir << "/" if @case_dir[-1] != "/"

    #prepend a dot if there isn't already one
    if (@extension != "" and @extension[0].chr != '.') 
      @extension = "." + @extension;
    end

    if (@case_num > @end_case) 
      raise sprintf("Error: %d to %d is not a valid range. \n", @case_num, @end_case);
    end

    #used to hold metadata about the test cases
    files_dir = "#{@case_dir}/#{@meta_files_dir}"

    if @write_last_case or (@extension[-5,5]==".diff")
      Dir.mkdir("#{files_dir}") if not File.directory?("#{files_dir}")
    end

    @start_case.upto(@end_case) { |case_num|
      #puts "crashlog dir = #{@case_dir} extension = #{@extension}"
      #the filename must be 8 digits, prefaced by zeroes
      filename = @case_dir.clone
      filename << case_num.to_s.rjust(8, "0")
      filename << @extension;
      @current_case = case_num

      puts "Trying case: #{filename}"
      if (@extension[-5,5]==".diff")
        patch = FuzzPatch.new(filename, true, @meta_files_dir)
        patch.apply_patch
        filename = patch.out_path
      end

      if ! File.exist?(filename) 
        raise "File not found or unreadable: #{filename}\n";
      end
      if @write_last_case
          f = File.new("#{files_dir}/lastcase.txt", "w")
          f.write(case_num.to_s)
          f.close
      end
      @current_case = case_num
      @full_path = File.expand_path(filename)
      sysline = "#{@prog_name} \"#{filename}\""
      #    puts "sysline = #{sysline}"
      system(sysline)
      ret_val = $?.exitstatus

      #ret_val would be nil or 129 if the user hit ctrl-C to kill the process.
      if ret_val == nil or ret_val == 129
        write_log()
        raise "Application unexpectedly terminated."
      end

      ret_val = signed_byte(ret_val)
      @exploitable_count += 1 if ret_val > 100 
      @crash_count += 1 if ret_val > 0
      if @delete_non_crashing and (ret_val == 0 or ret_val == -2)
        #The program exited normally or was killed deliberately
        file_to_del = filename
        if @extension[-5,5]==".diff"
          #convert something like
          #./evaluation_cases/test.mov/slide_fuzz/meta_files/00000112.mov
          #to ./evaluation_cases/test.mov/slide_fuzz/00000112.mov.diff
          file_to_del = file_to_del.gsub("/#{@meta_files_dir}/", "/")
          file_to_del += ".diff"
        end
        File.unlink(file_to_del)
      end    

      begin
        File.unlink(filename) if @extension[-5,5]==".diff" #delete the temporary file we just created
      rescue
        #the unlink may fail if the file was deleted manually, ignore it.
        puts "Error unlinking temp file #{$!}"  
      end

      run_log = File.new(Run_log_path, File::WRONLY|File::APPEND|File::CREAT)
      status = "#{@prog_name} ran #{filename} at #{Time.now.to_s}"
      run_log.puts(status)
      run_log.close
    }
    write_log()
    puts "Finished range of cases."
  end
end

if $0 == __FILE__

  fuzz_log_path = nil
  case_dir = CrashWrangler::TEST_CASE_DIR
  meta_files_dir = CrashWrangler::META_FILES_DIR
  extension = 0
  crash_count = 0
  case_num = 0
  exploitable_count = 0
  seed_file = ""
  fuzz_type = ""
  write_last_case = false
  delete_non_crashing = false
  current_case = 0
  seed_type = nil
  application = nil
  application_version = ""
  os_build = ""
  
  opts = OptionParser.new do |opts|
    opts.on("-h", "--help", "Print usage") do |o|
      puts opts
      exit(-1)
    end
    opts.on("-d", "--debug", "Print additional debugging info") do |o|
      $debug_print = true
    end
    opts.on("-c [case directory]", "--casedir", "The directory containing the test cases. Default: " + case_dir) do |o|
      case_dir = o
    end
    opts.on("-r", "--deletenoncrashing", "If set, immediately delete cases which do not cause a crash.") do 
      delete_non_crashing = true
    end
    opts.on("-l","--writelastcase", "If set, write a file containing the number of the " + 
    "last case run at case_directory/lastcase.txt") do
      write_last_case = true
    end
    opts.on("-o fuzz_log_path", "--fuzzlog", "If set, log file to write fuzzing stats to. Default: #{fuzz_log_path}") do  |o|
      fuzz_log_path = o 
    end
    opts.on("-s seed_file", "--seedfile", "The seed file used to generate these cases(for logging only)") do |o|
      seed_file = o
    end
    opts.on("-f fuzz_type", "--fuzztype", "The name of the fuzzer type used to generate these cases(for logging only)") do |o|
      fuzz_type = o
    end
    opts.on("-t seed_type","--seedtype", "An arbitrary string used as the " \
    "seed type(for logging only).  e.g. font, pdf, movie, etc") do |o|
      seed_type = o 
    end
    opts.on("-a application","--application", "The basename of the application being fuzzed (for logging only)" \
    "e.g. QuickTime Player, Preview, or Safari") do |o|
      application = o 
    end
    opts.on("-p application_version","--applicationversion", "The version of the application being fuzzed (for logging only)." \
    "Only needs to be set for something that's OS-independent like QuickTime, iWork, etc.") do |o|
      application_version = o 
    end
    opts.on("-b build","--build", "The OS build ID (for logging only). if undef, will use the output of `sw_vers -buildVersion`") do |o|
      os_build = o 
    end
  end

  opts.banner = "Usage: #{$0} [options] start_case end_case script file_extension\n" + 
  "Example: #{$0} 0 100 ./run_qt.sh .mov runs cases 0 to 100 of file type mov\n" +
  "  For files with no extension, enter none in the last argument\n" +
  "  By default, case files will be taken from directory: #{case_dir}\n\n"
  opts.parse!(ARGV)

  if ARGV.length != 4 
    puts opts
    puts "Wrong number of arguments detected: #{ARGV.length}\n#{ARGV.join("\n")}."
    exit(-1)
  end

  if not FileTest.directory?(case_dir)
    puts "Error: #{case_dir} doesn't exist or isn't a directory."
    exit(-1)
  end

  start_case = ARGV[0].to_i
  end_case = ARGV[1].to_i
  prog_name = ARGV[2]
  extension = ARGV[3]

  a = FuzzAutomate.new(start_case, end_case, prog_name, extension, seed_file, fuzz_type, case_dir, \
  delete_non_crashing, fuzz_log_path, write_last_case, seed_type, application, application_version, os_build)
  a.run

  exit(0)
end