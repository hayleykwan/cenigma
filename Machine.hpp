#ifndef MACHINE_H
#define MACHINE_H

#include "Plugboard.hpp"
#include "Rotor.hpp"

using namespace std;

class Machine{
  
public:
	Machine(int, char**);
    string encrypt(string input);
    int numRotors;

private:
    Plugboard plugboard;
	vector<Rotor> rotors;
    int reflect(int input);

};

#endif
