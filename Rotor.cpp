#include <fstream>
#include <iostream>
#include <vector>
#include "Rotor.hpp"

using namespace std;

Rotor::Rotor(){
	this->canRotate = false;
	this->numRotation = 0;
	this->offset = 0;
	this->config = vector<int> (26);
//	this->config = new int[26];
}

void Rotor::readfile(char *filename){
	ifstream rfile;
	rfile.open(filename, ifstream::in);
	if(rfile.good()){
		int index;
		int i = 0;
		while(!rfile.eof()){
			rfile >> ws;
			rfile >> index;
//			//config array style
//			config[i] = index;
//			i++;
			config.push_back(index);
		}
		rfile.close();
	} else {
		perror("Invalid file");
	}
}

int Rotor::rotate(int index){

	return (config[(index + numRotation) % 26] - (offset % 26) + 26) % 26;
}

int Rotor::rotateBackwards(int index){
	for(int i = 0 ; i < 26 ; i++){
		if(index == rotate(i)){
			return i;
		}
	}
	return 0;
}
