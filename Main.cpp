#include <stdexcept>
#include <iostream>
#include <fstream>
#include <string>
#include "Machine.hpp"

using namespace std;

int main(int argc, char **argv){

  if(argc > 1){

	  argc--;
	  argv++;

	  Machine machine = new Machine(argc, **argv);

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
			  throw invalid_argument("Invalid input.");
		  }
	  }

	  //run the machine
	  machine.encrypt(input);

	  //delete machine to free memory after printing
	  delete machine;

  } else {
	  throw invalid_argument("Invalid arguments.");
  }
  return 0;
}

