cc= g++ -g -Wall

build: note.exe
	rm -f *.o note

note.exe: note.o
	${cc} -o note.exe note.o
	
note.o: note.cpp
	${cc} -c note.cpp