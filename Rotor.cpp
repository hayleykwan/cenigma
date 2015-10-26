#include <fstream>
#include <iostream>
#include <vector>
#include "Rotor.hpp"

using namespace std;

Rotor::Rotor(){
	this->canRotate = false;
	this->numRotation = 0;
	this->offset = 0;
}

void Rotor::readfile(char *filename){
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

int Rotor::rotate(int index){

	//TODO
	return 0;
}

int Rotor::rotateBackwards(int index){
	for(int i = 0 ; i < 26 ; i++){
		if(index == rotate(i)){
			return i;
		}
	}
	return 0;
}
