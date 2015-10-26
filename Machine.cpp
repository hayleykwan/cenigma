#include <stdexcept>
#include <iostream>
#include <fstream>
#include <string>

#include "Machine.hpp"
#include "Plugboard.hpp"
#include "Rotors.hpp"

using namespace std;

const int ASCII_UPPER_A = 65;

Machine::Machine(int numFiles, char **argv){

}

void run(void){

  cout << "Welcome to the Enigma machine!" << endl;
  cout << "Please enter a set of upper case characters for the machine to encrypt." << endl;
  
  //only take in upper alphabets
  string input = getInputString();

  //prepare output string for printing
  string output;

  //Plugboard *plugboard = new Plugboard();

  for (char& c : input){

	  //convert into number
	  int index = convertToNumber(c);

	  //if plugboard > 0
        //do plugboard
	    //index = pg->swap();

	  //if rotors > 0
	    //new rotors
        //Rotor *rotor_furthestFromReflector = new Rotor();
        //Rotor *rotor_middle = new Rotor();
        //Rotor *rotor_closestToReflector = new Rotor();

        //do rotors

      int reflected = reflect(index);

        //rotors
        //plugboard
 
      char c_output = convertToNumber(reflected);

      output.push_back(c_output);

  }
  
  cout << output << endl;
  
};

string getInputString(){
	string input;
	char c;
	while (cin >> c){
		if(isupper(c)){
			input.push_back(c);
		} else if (isspace(c) || c == '\t' || c == '\r' || c == '\n'){
			continue;
		} else if (c == EOF){
			break;
		} else {
			//throw error: c is not a valid character for encryption.
			try {
			  // code here
			}
			catch (char c) { cout << "This character is not a valid character for encryption."; }
		}
	}
	return input;
}

int convertToNumber(char input){
	return ((int)input - ASCII_UPPER_A);
};

char convertToChar(int number){
	return ((char)number - ASCII_UPPER_A);
};

//reflector  
int reflect(int input){
  return ((input + 13) % 26);
};

