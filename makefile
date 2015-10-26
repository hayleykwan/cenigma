enigma: Main.o Machine.o Plugboard.o Rotors.o 
	g++ -o enigma Main.o Machine.o Plugboard.o Rotors.o 

Main.o: Main.cpp
	g++ -c Main.cpp

Machine.o: Machine.cpp
	g++ -c Machine.cpp

Plugboard.o: Plugboard.cpp
	g++ -c Plugboard.cpp

Rotors.o: Rotors.cpp
	g++ -c Rotors.cppt this makefile so that running make compiles your enigma program



clean:
	rm -rf enigma *.o

.PHONY: clean
