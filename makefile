# edit this makefile so that running make compiles your enigma program

enigma: Main.o Plugboard.o Rotors.o Reflector.o
	g++ -o enigma Main.o Plugboard.o Rotors.o Reflector.o

Main.o: Main.cpp
	g++ -c Main.cpp

Plugboard.o: Plugboard.cpp
	g++ -c Plugboard.cpp

Rotors.o: Rotors.cpp
	g++ -c Rotors.cpp

Reflector.o: Reflector.cpp
	g++ -c Reflector.cpp


clean:
	rm -rf enigma *.o

.PHONY: clean
