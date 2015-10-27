#include <fstream>
#include <iostream>
#include <vector>
#include "Plugboard.hpp"

using namespace std;

void Plugboard::readfile(char *filename){
	ifstream pgfile;
	pgfile.open(filename, ifstream::in);

	if(pgfile.good()){
		int index;
		while(!pgfile.eof()){
			pgfile >> ws;
			pgfile >> index;
			config.push_back(index);
		}
		pgfile.close();

	} else {
		perror("Invalid file");
	}
}

int Plugboard::swap(int index){

	for(int i = 0 ; i < config.size(); i++){
		if(index == config[i]){
			//if at even index
			if(i % 2 == 0){
				//next number
				return config[i+1];
			} else {
				//previous number
				return config[i-1];
			}
		}
	} //not in vector
//	cout << index;
	return index;
}
