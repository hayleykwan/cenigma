#ifndef PLUGBOARD_H
#define PLUGBOARD_H

#include <vector>

class Plugboard{

public:
	void readfile(char *filename);
	int swap(int index);
	std::vector<int> config;

};

#endif
