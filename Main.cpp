#include <stdexcept>
#include <iostream>
#include <fstream>
#include <string>
#include "Machine.hpp"

using namespace std;

int main(int argc, char **argv){

  if(argc >= 1){

	  argc--;


	  //create new machine
	  Machine machine = new Machine(int numFiles, char **argv);

	  //run the machine
	  machine.run();

	  //delete machine to free memory after printing
	  delete machine;


  } else {
	  throw invalid_argument("Invalid arguments. Require at ")
  }
  return 0;
}

