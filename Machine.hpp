#include <string>

class Machine{
  
  public:
	Machine(int numFiles, char **argv);
    void run(void);
  
  private:
    string getInputString();
    int convertToNumber(char input);
    char convertToChar(int number);
    int reflect(int input);

};
