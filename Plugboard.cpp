#include <fstream>
#include <iostream>
#include <vector>
#include "Plugboard.hpp"

using namespace std;

void Plugboard::readfile(char *filename) {
    ifstream pgfile;
    pgfile.open(filename, ifstream::in);

    if (pgfile.good()) {
        int index;
        while (pgfile >> index) {
            config.push_back(index);
        }
        pgfile.close();

    } else {
        perror("Invalid file");
    }
}

int Plugboard::swap(int index) {

    for (int i = 0; i < config.size(); i++) {
        if (index == config[i]) {
            if (i % 2 == 0) {
                return config[i + 1];
            } else {
                return config[i - 1];
            }
        }
    }
    return index;
}
