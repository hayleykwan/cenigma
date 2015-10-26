#include <fstream>
#include <iostream>
#include <vector>
#include "Rotor.hpp"

using namespace std;

vector<int> config;

Rotor::Rotor(){
	this->rotateOneCycle = false;

}

void readfile(char *filename){
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

int rotate(int index){
	return (config[(index + rotation) % 26] - (offset % 26)
	            + 26) % 26;
}

int rotateBackwards(int index){
	for(int i = 0 ; i < 26 ; i++){
		if(index == rotate(i)){
			return i;
		}
	}
	return 0;
}
