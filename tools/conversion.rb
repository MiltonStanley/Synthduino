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

old_file = File.open('../pitches.h', 'r')
new_file = File.new(NEW_NAME, 'w')

DEST = new_file

class String

	def abbreviate
		self.gsub('NOTE_','n')
	end

	def enharmonic?
		self.include? 'S'
	end

	def transpose
		sign_location = self.index('S')
		note_name_location = sign_location - 1
		self[sign_location] = 'F'
		self[note_name_location] = self[note_name_location].succ
		self[note_name_location] = 'A' if self[note_name_location] == 'H'
		self
	end

end

while line = old_file.gets
	DEST.puts line
	DEST.puts line.abbreviate
	DEST.puts line.transpose if line.enharmonic?
	DEST.puts line.abbreviate
end