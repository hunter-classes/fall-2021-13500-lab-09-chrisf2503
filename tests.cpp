#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"
#include "math.h"
// add your tests here
TEST_CASE("Task A: "){
    Coord3D p = {10, 20, 30};
    double answer = sqrt((10*10) + (20*20) + 30*30);
    CHECK(length(&p) == answer);
    Coord3D p1 = {2, 4, 9};
    answer = sqrt((2*2) + (4*4) + (9*9));
    //deleteCoord3D(Coord3D &p);
    CHECK(length(&p1) == answer);
    //CHECK();
}