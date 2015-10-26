#include <fstream>
#include <iostream>
#include <vector>
#include "Plugboard.hpp"

using namespace std;

vector<int> config;

Plugboard::Plugboard(char* filename){
	ifstream pgfile(filename);
	int index;
	while(!pgfile.eof()){
		pgfile >> ws;
		pgfile >> index;
		config.push_back(index);
	}

}

int swap(int index){
	for(int i = 0 ; i < config.size(); i++){

		//if char exists in vector
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
		return i;
	}
}

