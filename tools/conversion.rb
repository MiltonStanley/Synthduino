NEW_NAME = 'pitches.h'

old_file = File.open('../pitches.h', 'r')
new_file = File.new(NEW_NAME, 'w')

while line = old_file.gets
	puts line
	puts line.gsub!('NOTE_','n')
end