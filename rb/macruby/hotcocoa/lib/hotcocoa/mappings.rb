module HotCocoa::Mappings
  # they need to be initialized
  @mappings   = {}
  @frameworks = {}
end

class << HotCocoa::Mappings

  ##
  # Returns the Hash of mappings.
  attr_reader :mappings

  ##
  # Returns the Hash of mapped frameworks.
  attr_reader :frameworks

  ##
  # Load _EVERYTHING_ in `lib/hotcocoa/mappings`, recursively
  def reload
    pattern = File.join(File.dirname(__FILE__), 'mappings', '**', '*.rb')
    Dir.glob(pattern).each { |mapping| require mapping.chomp!('.rb') }
  end

  # @group Creating a new mapping

  ##
  # @macro [new] HotCocoa::Mappings.map
  #   Maps $1
  #
  # @todo testing
  # @todo Needs docs for all possible invocations and examples!
  #
  # Create a new mapping. There are several ways to call this method
  # for different cases, only some are currently documented.
  #
  # @overload map( window: NSWindow )
  # @overload map( window: 'NSWindow', framework: 'AppKit' )
  #   In order to define a mapping without loading the dependant framework
  def map options, &block
    framework    = options.delete(:framework)
    mapped_name  = options.keys.first
    mapped_value = options.values.first
    args         = [mapped_name, mapped_value]

    if mapped_value.kind_of?(Class)
      add_mapping(*args, &block)

    else
      if framework.nil? || loaded_framework?(framework)
        add_constant_mapping(*args, &block)
      else
        on_framework(framework) do
          add_constant_mapping(*args, &block)
        end
      end
    end
  end

  ##
  # @todo testing
  #
  # Registers `mapped_name` as a {Mapper#builder_method} for the given
  # `mapped_value`. The `block` is used as the {Mapper#builder_method}'s
  # body.
  def add_mapping mapped_name, mapped_value, &block
    m = HotCocoa::Mappings::Mapper.map_instances_of(mapped_value, mapped_name, &block)
    mappings[m.builder_method] = m
  end

  ##
  # @todo testing
  #
  # Registers `mapped_name` as a {Mapper#builder_method} for the given
  # `constant` string which will be looked up. The `block` is used as
  # the {Mapper#builder_method}'s body.
  def add_constant_mapping mapped_name, constant, &block
    add_mapping(mapped_name, Object.full_const_get(constant), &block)
  end

  # @group Lazy framework loading

  ##
  # Registers a callback for after the specified framework has been
  # loaded.
  def on_framework name, &block
    (frameworks[name.to_s] ||= []) << block
  end

  ##
  # Registers a given framework as being loaded.
  def framework_loaded
    frameworks.keys.each do |key|
      if loaded_framework?(key)
        frameworks[key].each { |mapper| mapper.call }
        frameworks.delete(key)
      end
    end
  end

  ##
  # Returns whether or not the framework has been loaded.
  def loaded_framework? name
    NSBundle.allFrameworks.map { |bundle|
      bundle.bundlePath.split('/').last
    }.select { |framework|
      framework.split('.')[1] == 'framework'
    }.map { |framework|
      framework.split('.')[0]
    }.include?(name.to_s)
  end

end
