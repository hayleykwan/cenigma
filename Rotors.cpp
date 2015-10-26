#include <fstream>
#include <iostream>
#include <vector>
#include "Rotors.hpp"

using namespace std;

vector<int> config;

Rotor::Rotor(char* filename){
	ifstream rfile;
	rfile.open(filename, ifstream::in);
	if(rfile.good()){
		int index;
		while(!rfile.eof()){
			rfile >> ws;
			rfile >> index;
			config.push_back(index);
		}
		rfile.close();
	} else {
		perror("Invalid file");
	}
}
