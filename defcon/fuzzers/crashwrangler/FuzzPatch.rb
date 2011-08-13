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

#The patch file should look like:
#original = automate.rb
#new = ./evaluation_cases/00000003.rb
#off 0x2: 0x2f -> 0xb
#off 0x3: 0x75 -> 0xad
#off 0x4: 0x73 -> 0xc0
#off 0x5: 0x72 -> 0xde
#
#OR 
#off 0x3f: Inserted AAAAAAAAAAAAAAAAA|END_INSERTION|
#
#OR
#off 0x3420: Deleted 367 bytes

class FuzzPatch
  attr_reader :diff_path, :original_path, :out_path

  #if subdir is set, create the output file in the subdirectory subdir of the intended 
  #output directory.
  #if current_dir is set, output the file to the current working directory instead of 
  #whatever dir is specified in the diff.
  def initialize(diff_path, always_overwrite, subdir = nil, current_dir = false)
    @diff_path = diff_path
    @always_overwrite = always_overwrite
    @original_path = ""
    @out_path = ""

    out_bytes = ""
    in_bytes = ""

    diff_file = File.open(diff_path, "r")
    @patch = diff_file.read
    diff_file.close
    @diff_lines = @patch.split("\n")

    if @diff_lines[0] =~ /^original = (.*)$/
      @original_path = $1
    else 
      raise "Error: malformed patch line #{@diff_lines[0]}"
    end

    if @diff_lines[1] =~  /^new = (.*)$/
      @out_path = $1
    else 
      raise "Error: malformed patch line #{@diff_lines[1]}"
    end
    @out_path_in_file = @out_path

    if current_dir
      @out_path = "./#{File.basename(@out_path)}"
    end

    if subdir
      @out_path = File.dirname(@out_path) + "/#{subdir}/" + File.basename(@out_path)
    end

    @diff_lines = @diff_lines[2..-1] #cut off the first 2 lines.

  end

  def apply_patch
    in_file = File.open(@original_path, "r")

    in_bytes = in_file.read
    in_file.close

    out_bytes = in_bytes.clone

    offset = 0
    new_byte = ""
    # puts "patch = #{@patch}"

    if @patch =~ /off 0x([[:xdigit:]]+): Inserted (.+)\|END_INSERTION\|[\n\r]/m
      offset = $1.to_i(16)
      inserted_data = $2
      out_bytes.insert(offset,inserted_data)            
    elsif @patch =~ /off 0x([[:xdigit:]]+): Deleted (\d+) bytes[\n\r]/
      offset = $1.to_i(16)
      length = $2.to_i
      out_bytes[offset,length]= ""
    else
      @diff_lines.each { |line|
        if line =~ /off 0x([[:xdigit:]]+): 0x([[:xdigit:]]+) -> 0x([[:xdigit:]]+)/
          offset = $1.to_i(16)
          new_byte = $3.to_i(16) 
          #        puts "offset = #{offset}, new_byte = #{new_byte}"
          raise "Error: invalid offset 0x#{offset.to_s(16)}" if offset > out_bytes.length
          out_bytes[offset] = new_byte
        else
          raise "Malformed patch line #{line}"
        end
      }
    end

    if not @always_overwrite and File.exists?(@out_path)
      puts "#{@out_path} exists; are you sure you want to overwrite it? (y/n)"
      res = STDIN.gets.chomp
      if res == "n"
        puts "Quitting."
        exit(-1)
      end
    end
    begin
      out_file = File.open(@out_path, "w")
    rescue
      puts "Error when trying to create output file #{@out_path}, trying again."
      #try again without the meta stuff
      out_file = File.open(@out_path_in_file, "w")
    end

    out_file.write(out_bytes)
    out_file.close    
        
  end

end
