//read from ROTORS, feed back to ROTORS

#include <stdexcept>
#include <iostream>
#include <fstream>

using namespace std;

char reflector(char input){
  int output = ((int)input + 13) % 26;
  return (char)output;
}
