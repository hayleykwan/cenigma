#ifndef ROTOR_H
#define ROTOR_H

class Rotor{

public:
	Rotor();
	bool rotateOneCycle;
	int numRotation;

	int* config;
	int offset;

	void readFile(char *filename);
	int rotate(int index);
	int rotateBackwards(int index);

};

#endif
