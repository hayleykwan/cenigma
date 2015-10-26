enigma: Main.o Machine.o Plugboard.o Rotor.o 
	g++ -o enigma Main.o Machine.o Plugboard.o Rotor.o 

Main.o: Main.cpp
	g++ -c Main.cpp

Machine.o: Machine.cpp
	g++ -c -std=c++11 Machine.cpp

Plugboard.o: Plugboard.cpp
	g++ -c Plugboard.cpp

Rotor.o: Rotor.cpp
	g++ -c Rotor.cpp



clean:
	rm -rf enigma *.o

.PHONY: clean
