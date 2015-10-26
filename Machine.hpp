#ifndef MACHINE_H
#define MACHINE_H

#include "Plugboard.hpp"
#include "Rotor.hpp"
#include "Reflector.hpp"

using namespace std;

class Machine{
  
public:
	Machine(int, char**);
    string encrypt(string input);
    int numRotors;

private:
    Plugboard plugboard;
	vector<Rotor> rotors;
	Reflector reflector;
//	int reflect(int);
};

#endif
