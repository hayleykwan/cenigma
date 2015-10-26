#include <iostream>
#include <fstream>
#include <string>

#include "Machine.hpp"
#include "Plugboard.hpp"
#include "Rotors.hpp"

using namespace std;

Machine::Machine(int argc, char **argv){
	cout << "Welcome to the Enigma machine!" << endl;
	cout << "Please enter a set of upper case characters for the machine to encrypt." << endl;

	rotors = new Rotor[argc-1];
	int indexRotor = 0;

	while(argc > 0){
		if(argc == 1){
			Plugboard *plugboard = new Plugboard(argv[argc-1]);
		}else{
			Rotor rotor = new Rotor(argv[indexRotor]);
			rotors[indexRotor] = rotor;
			indexRotor++;
		}
		argc--;
		argv++;
	}
}

void encrypt(string input){

  //prepare output string for printing
  string output;

  for (char& c : input){

	  //convert into number
	  int index = convertToNumber(c);

	  //go through plugboard
	  index = plugboard.swap(index);

	  //rotors

      int reflected = reflect(index);

      //rotors

	  reflected = plugboard.swap(reflected);
 
      char c_output = convertToNumber(reflected);

      output.push_back(c_output);

  }
  cout << output << endl;
  
};




int convertToNumber(char input){
	return ((int)(input) - 'A');
};

char convertToChar(int number){
	return (char)(number + 'A');
};

//reflector  
int reflect(int input){
  return ((input + 13) % 26);
};

