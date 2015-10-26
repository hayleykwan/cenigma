#include <iostream>
#include <fstream>
#include <string>

#include "Machine.hpp"
#include "Plugboard.hpp"
#include "Rotor.hpp"

using namespace std;

Machine::Machine(int argc, char **argv){
	cout << "Welcome to the Enigma machine!" << endl;
	cout << "Please enter a set of upper case characters for the machine to encrypt." << endl;

	this->numRotors = argc - 1;
	int indexRotor = 0;

	while(argc > 0){
		if(argc == 1){
			plugboard.readfile(argv[numRotors]);
		} else {
			Rotor rotor;
			rotor.readFile(argv[indexRotor]);
			rotors.push_back(rotor);
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
    		  index = rotors[j].rotateBackwards(index);

    		  if(rotors[j].rotateOneCycle = true){
    			  rotors[j].numRotation++;
    			  rotors[j];
    		  }

    	  }

      }

      //go through plugboard again
	  index = plugboard.swap(index);

	  //convert into upper case character
	  char c_output = (char)(index + 'A');

	  //append to output string
      output.push_back(c_output);

      //return for printing
      return output;
  }
}

//reflector  
int reflect(int input){
	return ((input + 13) % 26);
}
