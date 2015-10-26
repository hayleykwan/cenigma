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
	int numRotors = argc - 1;

	while(argc > 0){
		if(argc == 1){
			Plugboard *plugboard = new Plugboard(argv[numRotors]);
		}else{
			Rotor rotor = new Rotor(argv[indexRotor]);
			rotors[indexRotor] = rotor;
			indexRotor++;
		}
		argc--;
		argv++;
	}
}

string encrypt(string input){

  //prepare output string for printing
  string output;

  for (char& c : input){

	  //convert into number
	  int index = (int)(c) - 'A';

	  convertToNumber(c);

	  //go through plugboard
	  index = plugboard.swap(index);

	  //rotors
	  for (int i = 0 ; i < numRotors ; i++){
		  //rotors[i].rotate;
		  //mas: index = rotors[i].map(index);
	  }

      int index = reflect(index);

      //rotors backward
      for (int j = numRotors ; j > 0 ; j-- ){
    	  //
      }

	  index = plugboard.swap(index);
 
      char c_output = convertToNumber(index);

      output.push_back(c_output);

  }
//  cout << output << endl;
  
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

