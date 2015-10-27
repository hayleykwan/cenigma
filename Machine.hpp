#ifndef MACHINE_H
#define MACHINE_H

#include "Plugboard.hpp"
#include "Rotor.hpp"
#include "Reflector.hpp"

class Machine {

public:
    Machine(int, char**);
    std::string encrypt(std::string input);
    int numRotors;

private:
    Plugboard plugboard;
    std::vector<Rotor> rotors;
    Reflector reflector;
};

#endif
