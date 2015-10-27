#include <stdexcept>
#include <iostream>
#include <fstream>
#include <string>
#include "Machine.hpp"

using namespace std;

int main(int argc, char **argv) {

    if (argc > 1) {

        argc--;
        argv++;

//        Machine machine(argc, argv); //stack
        Machine machine = new Machine(argc, argv);   //heap

        string input;
        char c;
        while (cin >> c) {
            if (isupper(c)) {
                input.push_back(c);
            } else if (isspace(c) || c == '\t' || c == '\r' || c == '\n') {
                continue;
            } else if (c == EOF) {
                break;
            } else {
                throw invalid_argument("Invalid input for Enigma encryption.");
            }
        }

        string output = machine.encrypt(input);

        cout << output << endl;

		delete(machine);    //heap

    } else {

        throw invalid_argument("Invalid program arguments.");

    }
}
