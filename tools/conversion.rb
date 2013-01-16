old_file = File.open('../pitches.h', 'r')
new_file = File.new('pitches.h', 'w')

while line = old_file.gets
	new_file.puts line
	new_file.puts line.gsub!('NOTE_','n')
end

`cat new_file`