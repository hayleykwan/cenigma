enigma: Main.o Machine.o Plugboard.o Rotor.o Reflector.o
	g++ -o enigma Main.o Machine.o Plugboard.o Rotor.o Reflector.o

Main.o: Main.cpp
	g++ -c Main.cpp

Machine.o: Machine.cpp
	g++ -c -std=c++11 Machine.cpp

Plugboard.o: Plugboard.cpp
	g++ -c Plugboard.cpp

Rotor.o: Rotor.cpp
	g++ -c Rotor.cpp

Reflector.o: Reflector.cpp
	g++ -c Reflector.cpp

clean:
	rm -rf enigma *.o

.PHONY: clean
