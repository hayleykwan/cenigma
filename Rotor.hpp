#ifndef ROTOR_H
#define ROTOR_H

#include <vector>

class Rotor{

public:
	Rotor();
	bool canRotate;
	int numRotation;
	int offset;
	std::vector<int> config;
	void readfile(char *filename);

	int rotate(int index);
	int rotateBackwards(int index);

};

#endif
