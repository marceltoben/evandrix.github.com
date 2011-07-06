module Kernel

  ##
  # A mapping, lol
  PLIST_FORMATS = {
    xml:    NSPropertyListXMLFormat_v1_0,
    binary: NSPropertyListBinaryFormat_v1_0
  }

  ##
  # @todo encoding format can be pushed upstream?
  #
  # override macruby's built-in {kernel#to_plist} method to support
  # specifying an output format. see {plist_formats} for the available
  # formats.
  #
  # @example encoding a plist in the binary format
  #  { key: 'value' }.to_plist(:binary)
  #
  # @return [String] returns `self` serialized as a plist and encoded
  #  using `format`
  def to_plist format = :xml
    format_const = PLIST_FORMATS[format]
    raise ArgumentError, "invalid format `#{format}'" unless format_const

    error = Pointer.new(:id)
    data  = NSPropertyListSerialization.dataFromPropertyList  self,
                                                      format: format_const,
                                            errorDescription: error
    error[0] ? raise( Exception, error[0] ) : data.to_str
  end

end
