#ifndef ROTOR_H
#define ROTOR_H

#include <vector>

class Rotor{

public:
	Rotor();
	bool canRotate;
	int numRotation;
	int offset;

	void readfile(char *filename);
	vector<int> config;
	int rotate(int index);
	int rotateBackwards(int index);

};

#endif
