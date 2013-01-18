##########################
#
# Conversion.rb
# (c) 2012 - Milton Stanley
#
# Changes Arduino's 'pitches.h' to include enharmonic definitions, as well
# as the option of specifying 'nD4' instead of 'NOTE_D4'
#
# For use with Synthduino - http://www.github.com/MiltonStanley/Synthduino
#
##########################

NEW_NAME = 'pitches.h'
puts

begin
	old_file = File.open('../pitches.h', 'r')
	puts "File opened..." if old_file
rescue
	puts "Error!!! File not found! Did you copy it into the MAIN Synthduino directory?"
	puts
	Process.exit!
end


new_file = File.new(NEW_NAME, 'w')

class String

	def skip?
		!(self.include?"#define")
	end

	def abbreviate
		self.gsub('NOTE_','n')
	end

	def enharmonic?
		self.include? 'S'
	end

	def natural?
		self.include?("#define") && !((self.include?("S")) || (self.include?"REST"))
	end

	def transpose
		sign_location = self.index('S')
		note_name_location = sign_location - 1
		self[sign_location] = 'F'
		self[note_name_location] = self[note_name_location].succ
		self[note_name_location] = 'A' if self[note_name_location] == 'H'
		self
	end

	def justify
		a,b,c = self.split(' ')
		amount = '      ' if self.natural?
		amount.chop! if (self =~ /n\DF\d/)
		amount ||= '     '
		a + ' ' + b + amount + c
	end

end

puts "Processing file..."

while line = old_file.gets
	new_file.puts line
	next if line.skip?
	new_file.puts line.abbreviate.justify
	next if line.natural?
	new_file.puts line.transpose if line.enharmonic?
	new_file.puts line.abbreviate.justify
end

new_file.puts "#define REST 0"
old_file.close

puts "File processed, moving to main directory..."

=begin
if RUBY_PLATFORM =~ (/cygwin|mswin|mingw|bccwin|wince|emx/)
	command = "copy"
else
	command = "cp"
end
=end

# Faking it; can't get system "#{command} ./pitches ../pitches" to work
new_file.close
new_file = File.open('pitches.h','r')
old_file = File.open('../pitches.h', 'w')

while line = new_file.gets
	old_file.puts line
end

puts "Cleaning up temp files"
old_file.close
new_file.close
File.delete(new_file)

puts "Conversion complete!"

puts
