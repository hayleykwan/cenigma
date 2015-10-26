#include "Plugboard.hpp"
#include "Rotors.hpp"

using namespace std;

class Machine{
  
public:
	Machine(int, char**);
    string encrypt(string input);
    int numRotors;

private:
    Plugboard plugboard;
    Rotor* rotors;

    int convertToNumber(char input);
    char convertToChar(int number);
    int reflect(int input);

};
