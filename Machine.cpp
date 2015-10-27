#include <iostream>
#include <fstream>
#include <string>

#include "Machine.hpp"
#include "Plugboard.hpp"
#include "Rotor.hpp"
#include "Reflector.hpp"

using namespace std;

Machine::Machine(int argc, char **argv) {

    this->numRotors = argc - 1;
    rotors.resize(numRotors);
    int indexRotor = 0;

    while (argc > 0) {
        if (argc == 1) {
            plugboard.readfile(*argv);
        } else {
            Rotor rotor;
            rotor.readfile(*argv);
            rotors[indexRotor] = rotor;
            indexRotor++;
        }
        argc--;
        argv++;
    }
}

string Machine::encrypt(string input) {

    string output;

    for (char c : input) {

        //convert into number
        int index = c - 'A';

        //go through plugboard
        index = plugboard.swap(index);

        //rotors
        for (int i = 0; i < numRotors; i++) {
            index = rotors[i].rotate(index);
        }

        index = reflector.reflect(index);

        //rotors backward
        if (numRotors > 0) {
            rotors[0].canRotate = true;
            for (int j = numRotors - 1; j >= 0; j--) {
                index = rotors[j].rotateBackwards(index);
                if (rotors[j].canRotate) {
                    rotors[j].numRotation++;
                    rotors[j].offset++;

                    //rotate the next rotor
                    if (j + 1 < numRotors) {
                        if (rotors[j].numRotation % 26 == 25) {
                            rotors[j + 1].canRotate = true;
                        }
                    }

                    //only rotors[0] can rotate
                    if (j != 0) {
                        rotors[j].canRotate = false;
                    }
                }
            }
        }

        //go through plugboard again
        index = plugboard.swap(index);

        //convert into upper case character
        char c_output = (char) (index + 'A');

        //append to output string
        output.push_back(c_output);
    }

    return output;
}
