#include <iostream>
#include "stlParser.h"

int main(int argc, char ** argv) {
    if (argc != 2) {
        std::cerr << "Please enter an STL file path." << std::endl;
        return -1;
    } else {
        stl::stlFile f = stl::parseSTL(argv[1]);

        std::cout << "\nFirst triangle: " << std::endl;
        std::cout << f.triangles[0] << std::endl;
    }
    return 0;
}