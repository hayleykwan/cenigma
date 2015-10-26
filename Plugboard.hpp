#include <vector>

using namespace std;

class Plugboard{

public:
	Plugboard::Plugboard(char *filename);
	int swap(int index);
	vector<int> config;

};
