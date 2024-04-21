#include "lib.hpp"
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

void read_file(const char* filename) {
    std::string output;
    std::ifstream file(filename);

    while (getline(file, output)) {
        std::cout << output << std::endl;
    }

    file.close();
}
