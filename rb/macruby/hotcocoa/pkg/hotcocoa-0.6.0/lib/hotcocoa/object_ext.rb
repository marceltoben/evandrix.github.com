# -*- coding: utf-8 -*-
# Object.full_const_get was taken from the ‘extlib’ project:
# http://github.com/sam/extlib which is released under a MIT License and
# copyrighted by Sam Smoot (2008).

##
# HotCocoa extensions for the Object class
class Object

  ##
  # Given a string, return the fully qualified constant name found in the
  # receiver's namespace.
  #
  # @example
  #
  #   Object.full_const_get('HotCocoa::Mappings') # => HotCocoa::Mappings
  #   HotCocoa.full_const_get('Mappings') # => HotCocoa::Mappings
  #
  # @param [String] name the constant to get
  # @return the constant corresponding to the name, if it exists
  def full_const_get name
    list = name.split('::')
    list.shift if list.first.empty?
    obj = self

    list.each do |x|
      # This is required because const_get tries to look for constants in the
      # ancestor chain, but we only want constants that are HERE
      obj = obj.const_defined?(x) ? obj.const_get(x) : obj.const_missing(x)
    end

    obj
  end

end
