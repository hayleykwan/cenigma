#include <stdexcept>
#include <iostream>
#include <fstream>
#include <string>

#include "Machine.hpp"
#include "Plugboard.hpp"
#include "Rotors.hpp"

using namespace std;

void run(void){

  cout << "Welcome to the Enigma machine!" << endl;
  cout << "Please enter a set of upper case characters for the machine to translate." << endl;
  
  string input;
  cin >> input;

  //string output;
  //new plugboard
  //new reflector

  //while(char != cin.eof()){

    //if isalpha()
      //if isupper()

        //convert into number
        //do plugboard
        //new rotors 
        //Rotor* rotor_furthestFromReflector = new Rotor();
        //Rotor* rotor_middle = new Rotor();
        //Rotor* rotor_closestToReflector = new Rotor();
        //do rotors
        //int reflected = reflect(input);
        //rotors
        //plugboard
 
        //convert into character
        //store into output
        output++;
 
    //if space, tab, carriage-return, newline -> ignore
    //all others, throw exception
 
  //}
  
  cout << output << endl;
  
};

int convertToNumber(char input){

};

char convertToChar(int number){

};

//reflector  
int reflect(int input){
  return ((input + 13) % 26);
};

void print(void){
  cout << output << endl ;
};
