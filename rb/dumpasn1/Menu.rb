require 'termios'

class Menu
	attr_reader	:menu_items, :title

	def initialize(title = "Menu", entries = [])
		@title = title
		@menu_items = []
		count = 0

		entries.collect { | entry |
			@menu_items << [count, entry]
			count += 1
			}
		@menu_items << @menu_items.shift
	end

	def display()
		print "\n#{@title}\n\n"
		@menu_items.each { | entry |
			print "#{entry[0]}. #{entry[1]}\n"
			}
		print "\n"

# This code imports the Termios library and gets the current terminal control
# settings for STDIN. It then disables canonical input mode (ICANON) by
# modifying the local modes flag (lflag), and applies the new settings to STDIN.
# Now, every call to STDIN.getc() will return after a single key is pressed,
# as demonstrated in the loop.
		t = Termios.tcgetattr(STDIN)
		t.lflag &= ~Termios::ICANON
#		t.lflag &= ~Termios::ECHO
		Termios.tcsetattr(STDIN,0,t)

		selected_option = poll_keyboard()

# Return termios to original - not working
#		t = Termios.tcgetattr(STDIN)
#		t.lflag &= Termios::ICANON
#		t.lflag &= Termios::ECHO
#		Termios.tcsetattr(STDIN,0,t)
		selected_option
	end

	def poll_keyboard()
		selected_option = nil
		begin
			selected_option = STDIN.getc.chr
		end until ('0'..'9').member?(selected_option)
		return selected_option
	end
end