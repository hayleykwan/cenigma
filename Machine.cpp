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

	int numRotors = argc - 1;
	rotors = new Rotor[numRotors];
	int indexRotor = 0;


	while(argc > 0){
		if(argc == 1){
			Plugboard plugboard = new Plugboard(argv[numRotors]);
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

	  //go through plugboard
	  index = plugboard.swap(index);

	  //rotors
	  if(numRotors > 0){
		  for (int i = 0 ; i < numRotors ; i++){
			  index = rotors[i].rotate(index);
		  }
	  }

      index = reflect(index);

      //rotors backward
      if(numRotors > 0){
    	  for (int j = numRotors ; j > 0 ; j-- ){
    		  //index = rotors[j].rotate_backwards(index);
    	  }
      }

	  index = plugboard.swap(index);
 
      char c_output = (char)(index + 'A');

      output.push_back(c_output);

      return output;

  }
  
};

//reflector  
int reflect(int input){
  return ((input + 13) % 26);
};

