##
# A mixin module for classes that subclass Cocoa classes and want to alse
# inherit HotCocoa customizations (custom methods, constants, etc.)
module HotCocoa::Behaviors

  ##
  # Implements the callback Module#included; this method declares that when
  # HotCocoa::Behaviors is mixed in to a class, that class will gain all the
  # HotCocoa customizations made to classes that the class inherits from.
  #
  # @example
  #
  #   class CustomView < NSView
  #     def begin
  #       enter_full_screen # => NoMethodError
  #     end
  #   end
  #
  #   class OtherCustomView < NSView
  #     include HotCocoa::Behaviors
  #
  #     def begin
  #       enter_full_screen # => goes full screen
  #     end
  #   end
  #
  def self.included klass
    HotCocoa::Mappings::Mapper.map_class(klass)
  end

end
