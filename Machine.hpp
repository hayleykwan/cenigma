#include <string>

class Machine{
  
public:
	Machine(int, char**);
    void encrypt(char *input);
  
private:
    Plugboard plugboard;
    Rotor* rotors;

    int convertToNumber(char input);
    char convertToChar(int number);
    int reflect(int input);

};
