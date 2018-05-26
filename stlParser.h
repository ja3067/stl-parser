//
// Created by Jacob Austin on 5/26/18.
//

#ifndef STL_PARSER_H
#define STL_PARSER_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "vec/vec.h"

namespace stl {
    struct Triangle {
        Triangle(const Vec &n, const Vec &vertex1, const Vec &vertex2, const Vec &vertex3) : normal(n), v1(vertex1),
                                                                                             v2(vertex2),
                                                                                             v3(vertex3) {};

        friend std::ostream & operator<<(std::ostream &, Triangle & t);

        Vec normal;
        Vec v1;
        Vec v2;
        Vec v3;
    };

    struct stlFile {
        std::string header;
        int num_triangles;
        std::vector<Triangle> triangles;
    };

    stlFile parseSTL(std::string path);

    Vec parseVec(std::ifstream & file);
}

#endif //STL_PARSER_H
