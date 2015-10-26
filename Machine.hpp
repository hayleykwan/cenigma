class Machine{
  
public:
	Machine(int, char**);
    char *encrypt(char *input);
  
private:
    Plugboard plugboard;
    Rotor* rotors;
    int numRotors;
    int convertToNumber(char input);
    char convertToChar(int number);
    int reflect(int input);

};
