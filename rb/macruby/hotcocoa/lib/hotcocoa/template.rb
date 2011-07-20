require 'fileutils'
require 'rbconfig'

##
# The set of methods used for setting up a new HotCocoa app from
# the template.
class HotCocoa::Template

  ##
  # The path to the HotCocoa source files
  #
  # @return [String]
  def self.source_directory
    File.expand_path(File.join(File.dirname(__FILE__), '..', '..'))
  end

  ##
  # The path to the HotCocoa app template in the HotCocoa source files
  #
  # @return [String]
  def self.template_directory
    File.join(source_directory, 'template')
  end

  ##
  # Iterate recursively over each file in a directory.
  #
  # @yield Will yield once per file
  # @yieldparam [String] file the path to a file
  # @return [Array<String>]
  def self.all_files_in dir
    Dir.glob(File.join(dir, '**', '*')).each { |file| yield file }
  end

  ##
  # Copy all the files from the template to the destination, and substitute
  # all placeholder tokens (e.g. the name of the app).
  #
  # @param [String] directory new root directory for the project
  # @param [String] app_name
  def self.copy_to directory, app_name
    FileUtils.mkdir_p directory

    all_files_in(template_directory) do |file|
      short_name  = file.sub(/^#{template_directory}/, '')
      destination = File.join(directory, short_name)

      if File.directory? file
        FileUtils.mkdir_p destination

      else
        File.open(destination, 'w') do |out|
          input =  File.read(file)
          input.gsub!(/__APPLICATION_NAME__/, app_name)
          out.write input
        end
      end
    end
  end
end
