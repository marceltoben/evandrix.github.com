require 'base64'
require 'Menu'

class ASN
	def initialize()
		@input=[]
		@tags=Array.new(2)

		@tags=[
"BER",
"BOOLEAN", #0x01,
"INTEGER", #0x02,
"BIT_STRING", #0x03,
"OCTET_STRING", #0x04,
"NULL", #0x05,
"OBJECT_IDENTIFIER", #0x06,
"ObjectDescriptor", #0x07,
"EXTERNAL", #0x08,
"REAL", #0x09,
"ENUMERATED", #0x0A,
"EMBEDDED", #0x0B,
"UTF8String", #0x0C,
"RELATIVE_OID", #0x0D,
"UNUSED", #0x0E,
"UNUSED", #0x0F,
"SEQUENCE", #0x10,
"SET", #0x11,
"NumericString", #0x12,
"PrintableString", #0x13,
"TeletexString", #0x14,
"VideotexString", #0x15,
"IA5String", #0x16,
"UTCTime", #0x17,
"GeneralizedTime", #0x18,
"GraphicString", #0x19,
"VisibleString", #0x1A,
"ISO646String", #0x1B,
"GeneralString", #0x1C,
"UniversalString", #0x1D,
"BMPString"#, 0x1E
]

		@length_xtnd=0x80		# Indefinite or long form
		@length_mask=0x7f		# Bits 7 - 1
		@class_mask=0xC0		# Bits 8 and 7
		@form_mask=0x20		# Bit 6
		@tag_mask=0x1f			# Bits 5 - 1

		menu()
	end

	def Load_File()
		puts "< Load_File\n"
		infile=File.open("cert.pem", "r+") 
		str=infile.readlines.join
		index=0

		out=Base64.decode64(str)
		outfile=File.open("outfile.txt", "w+") 
		outfile << out
		out.each_byte {|b|
			@input << b
		}

		@input.each {
			|b| print '%02X' % b + " "
		}
		puts 
		menu()
	end

	def Encode()
		puts "< Encode\n"
	end

	def Decode()
# Just deal with DER for now, look at BER,CER,PER,XER later
		@index=0			# Marker in File
		@lencounter=0	# Length counter
		@length=0
		@tag_string=""	# Text of Tag
		@level=0			# Level of ASN.1 Construct
		@value=0			# reset value
		@form=0			# reset form
		puts "<< Input Length: #{(@input.length-4)}\n"

# start loop here
	while @index < (@input.length-4)
		puts "Index Value: #{@index}"
		@tag=@input[@index] & @tag_mask
		@form=@input[@index] & @form_mask
		@tagclass=@input[@index] & @class_mask

		@form_str=@form == 32 ? "Constructed":"Primitive" 
		@class_str= @tagclass == 0 ? "Universal" : @tagclass == 64 ? "Application" : @tagclass == 128 ? "Context Specific" : "Private"
		@tag_string=@tags.values_at(@tag)#@tags.detect{|t| t==@tag}

		puts "#{@tag_string} #{@form_str} #{@class_str}"

# asn.1 = tag length value
# long tag encoded as sequence of 7-bit values. 
# deal with tag=0x1f 
		case
			when @tag==@tag_mask
				puts "< Long tag"
				@value=@input[index+1]
				@tag=((@tag << 7)|(@value & 0x7f))
				@index+=1
		end
# else act normally
# handle other @tag values

		case
			when ((@tag == 0x11) || (@tag == 0x10))
					DisplayConstructed()
			when (@tag != 0x11 && @tag != 0x10)
					DisplayPrimitive()
		end
	end

# end loop here

		puts "< Decode\n"
	end

	def menu()
   #Main Menu
		entries = ["Quit", "Load File", "Encode", "Decode\n"]

		mymenu=Menu.new("ASN.1 Main Menu", entries)
		out=mymenu.display()

		case
			when out=='1'
				Load_File()
			when out=='2'
				Encode()
			when out=='3'
				Decode()
			when out=='0'
				puts "\nQuit\n\n"
		end
	end
end

	def DisplayConstructed()
		puts "<< Constructed"
		print 'Tag: %02X ' % @tag
		puts
		@index+=1
		encapsulated=0 # needed only for bitstrings and octetstrings

# kludge to deal with large integer values 120108
		if(@input[@index]==0x81) then 
			@index+=1
			puts "<< Large Length!"
		end

		if (@input[@index]==0x82) then 
			puts "<< Large Length!"
			@index+=1
			@length=@input[@index]*256
			@index+=1
			@length+=@input[@index]
		end

# end of kludge

		if @length==0 then @length=@input[@index] end
		puts "Length: #{@length}"
		@index+=1
	end

# Now deal with certain primitive type as they have quirks and oddness
	def DisplayPrimitive()
		string=""

# BER Tag 00
		case
			when (@form_str == "Constructed" && @class_str == "Context Specific" )
				print '['
				print '%02X' % (@input[@index] & @tag_mask)
				print ']'
				puts
				@index+=1

			when (@tag & @tag_mask == 0x00) # BER
				puts ("<< BER!")
				print 'Tag: %02X ' % @tag
				puts
				puts "#{@tag_string} #{@form_str} #{@class_str}"
				@index+=1
				puts "Length: #{@input[@index]}"

#needs adding extra for this as with constructed
				if(@input[@index]==129||@input[@index]==130) then @index+=1 end
				@length=@input[@index]
				puts "<< End of BER"

# BOOLEAN 01
			when (@tag == 0x01) 
				print 'Tag: %02X ' % @tag
				puts ("<< BOOLEAN")
				@index+=1
				@length=@input[@index]
				puts ("Length: #{@length}")

				@index+=1
				@value=0
				for i in 0..(@length-1)
					@value = (@value << 8) | @input[@index] 
					@index+=1
					puts ("Value: #{@value}")
				end
				@index-=1
				puts "<< End of BOOLEAN"

# INTEGER 02
			when (@tag == 0x02) 
				print 'Tag: %02X ' % @tag
				puts ("<< Integer")
				@index+=1
				@length=@input[@index]
				if(@input[@index]==0x81) then 
					@index+=1
					@length=@input[@index]
					puts "<< Large Length!"
				end

				puts ("Length: #{@length}")

				@index+=1
				@value=0
				for i in 0..(@length-1)
					@value = (@value << 8) | @input[@index] 
					@index+=1
				end
				puts ("Value: #{@value}")
				@index-=1
				puts "<< End of INTEGER"

# BITSTRING 03
			when (@tag == 0x03) # BITSTRING
				print 'Tag: %02X ' % @tag
				puts ("<< BITSTRING!")
				@index+=1
				@length=@input[@index]
				if(@input[@index]==0x81) then 
					if(@input[@index+4]==@input[@index]) then encapsulated=1 end
					@index+=1
					@length=@input[@index]
					puts "<< Large Length!"
				end

				if (@input[@index]==0x82) then 
					puts "<< Large Length!"
					@index+=1
					@length=@input[@index]*256
					@index+=1
					@length+=@input[@index]
				end
				puts ("Length: #{@length}")
				if(encapsulated==1) 
					puts "<< encapsulated"
					@index+=1
				end

				puts "<< End of BITSTRING"
				print "Value: "
				for i in 0..(@length-1)
					@index+=1
					print '%02X ' % @input[@index]
					string << @input[@index]
				end
				#puts "String: #{string}"
				puts

# OCTETSTRING 04
			when (@tag == 0x04) # OCTETSTRING
				print 'Tag: %02X ' % @tag
				puts ("<< OCTETSTRING!")
				@index+=1
				@length=@input[@index]
				if(@input[@index+1]==0x03) || (@input[@index+1]==0x04) then
					encapsulated=1
				end

				if(@input[@index]==0x81) then 
					if(@input[@index+4]==@input[@index]) then encapsulated=1 end
					@index+=1
					@length=@input[@index]
					puts "<< Large Length!"
				end

				if (@input[@index]==0x82) then 
					puts "<< Large Length!"
					@index+=1
					@length=@input[@index]*256
					@index+=1
					@length+=@input[@index]
				end

				puts ("Length: #{@length}")
				if(encapsulated==1) 
					puts "<< encapsulated"
					if(@length<129) then @index-=1 end
					@index+=1
				end

				print "Value: "
				for i in 0..(@length-1)
					@index+=1
					print '%02X ' % @input[@index]
					string << @input[@index]
				end

				puts
				puts "<< End of OCTETSTRING"

# NULL 05
			when (@tag == 0x05) # NULL
				print 'Tag: %02X ' % @tag
				puts ("<< NULL!")
				@index+=1
				@length=@input[@index]
				puts "<< End of NULL"

# OID 06
			when (@tag == 0x06) # OID
				print 'Tag: %02X ' % @tag
				puts ("<< OID!")
				@index+=1
				@length=@input[@index]
				puts ("<< OID Length #{@length}")
				print "string: "
				for i in 0..(@length-1)
					@index+=1
					print '%02X ' % @input[@index]
					string << @input[@index]
				end
				#puts "String: #{string}"
				puts
				puts "<< End of OID"

#"UNUSED", #0x0E,
#"UNUSED", #0x0F,

# PrintableString 13
			when (@tag & @tag_mask == 0x13) 
				print 'Tag: %02X ' % @tag
				puts ("<< PrintableString!")
				@index+=1
				@length=@input[@index]
				puts ("<< OID Length #{@length}")
				for i in 0..(@length-1)
					@index+=1
					string << @input[@index]
				end
				puts
				puts "String: \"#{string}\""
				puts "<< End of PrintableString"

# UTCTime 17
			when (@tag & @tag_mask == 0x17) 
				print 'Tag: %02X ' % @tag
				puts ("<< UTCTime!")
				@index+=1
				@length=@input[@index]
				puts ("<< UTCTime Length #{@length}")
				#@index+=@length
				for i in 0..(@length-1)
					@index+=1
					print '%02X ' % @input[@index]
					string << @input[@index]
				end
				puts
				puts "String: \"#{string}\""
				puts "<< End of UTCTime"
		end

# end of tag processing
		@index=@index+1
		@length= @input[@index] & @length_mask

# if @length > 4 send exception - is unlikely!
# to be done
# else ok

#		if @length == 0 then
#			puts "<< Zero Length"
#			#@index-=1
#			@value=@input[@index]
#		else
#			#puts "<< Non-Zero Length"
#			lencounter=0
#			while lencounter < @length
#				@index=@index+1
## inserted unless to deal with preprocessing of character strings
#				@value = (@value << 8) | @input[@index] unless @value !=0
#				lencounter=lencounter+1
#		end

#		@index=@index+1

#		print 'Tag: %02X ' % @tag
#		puts "#{@tag_string}"
#		puts "Length: #{@length}"
#		puts "Value: #{@value}"
#		#puts "Index2: #{@index}"
#		puts 
#		end
	end

ASN.new()
