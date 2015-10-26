#ifndef PLUGBOARD_H
#define PLUGBOARD_H

#include <vector>

using namespace std;

class Plugboard{

public:
	void readfile(char *filename);
	int swap(int index);
	vector<int> config;

};

#endif
