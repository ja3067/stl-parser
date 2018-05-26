#include <cassert>
#include <cmath>

#include "../stlParser.h"

int main() {
    stl::stlFile f = stl::parse_stl("teapot.stl");
    assert(f.num_triangles == 9438);

    Vec normal = cross(f.triangles[0].v1 - f.triangles[0].v2, f.triangles[0].v1 - f.triangles[0].v3);

    assert(dot(normal, f.triangles[0].v1 - f.triangles[0].v2) < 1E-10);
    assert(dot(normal, f.triangles[0].v1 - f.triangles[0].v3) < 1E-10);
    assert(fabs(1 - dot(normal / normal.norm(), f.triangles[0].normal / f.triangles[0].normal.norm())) < 1E-10);

    return 0;
}