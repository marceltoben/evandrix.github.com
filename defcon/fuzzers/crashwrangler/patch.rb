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

require 'optparse'
#allow me to run this script from anywhere
require  File.dirname(File.expand_path(__FILE__)) + '/FuzzPatch'
require File.dirname(File.expand_path(__FILE__)) + '/CW_CrashLog'


always_overwrite = false
use_current_dir = false
crash_log_path = nil

opts = OptionParser.new do |opts|
  opts.on("-h", "--help", "Print usage") do |h|
    #usage()
    puts opts
    exit(0)
  end
  opts.on("-o", "--overwrite", "always overwrite out_file if it exists") do |o|
    always_overwrite = true
  end
  opts.on("-c", "--current_dir", "Output the file to the CWD, instead of whatever path is specified in the diff.") do |o|
    use_current_dir = true
  end
  opts.on("-l crash_log", "--crashlog", "Scan crash_log and derive a path to a diff to apply the patch to") do |o|
    crash_log_path = o
  end
end
opts.banner = "Usage: #{$0} [options] diff_file"
opts.parse!(ARGV)



if ARGV.length != 1 and not crash_log_path
  puts opts
  puts "Detected incorrect number of options #{ARGV.length}\n#{ARGV.split("\n")}"
  exit(0)
end
diff_path = nil

begin
  if crash_log_path
    crashlog = CW_CrashLog.new(crash_log_path, true)
    diff_path = crashlog.diff_path
  else   
    diff_path = ARGV[0]  
  end

  fuzz_patch = FuzzPatch.new(diff_path, always_overwrite, nil, use_current_dir)
  fuzz_patch.apply_patch
  puts "Created file #{fuzz_patch.out_path}"
rescue
  puts $!
  puts $!.backtrace
  raise $!
end