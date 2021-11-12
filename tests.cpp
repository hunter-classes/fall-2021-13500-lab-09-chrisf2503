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
    Coord3D p2 = {1, 2, 3};
    answer = sqrt((1*1) + (2*2) + (3*3));
    CHECK(length(&p2) == answer);
}
TEST_CASE("TASK B: "){
    Coord3D point1 = {10, 20, 30};
    Coord3D point2 = {-20, 21, -22};
    Coord3D *ans = fartherFromOrigin(&point1, &point2);
    CHECK(ans == &point1);
    Coord3D p1 = {2, 4, 9};
    ans = fartherFromOrigin(&p1, &point2);
    CHECK(ans == &point2);
    Coord3D p2 = {1, 2, 3};
    ans = fartherFromOrigin(&p1, &p2);
    CHECK(ans == &p1);
}//*/
TEST_CASE("Task C: "){
    Coord3D vel = {1, -5, 0.2};
    Coord3D pos = {0, 0, 100.0};
    move(&pos, &vel, 2.0);
    CHECK(pos.x == 2);
    CHECK(pos.y == -10);
    CHECK(pos.z == 100.4);
    Coord3D p1 = {2, 4, 9};
    move(&p1, &vel, 2.0);
    CHECK(p1.x == 4);
    CHECK(p1.y == -6);
    CHECK(p1.z == 9.4);
}
TEST_CASE("Task E: "){
    double x = 10, y = 20, z = 30;
    Coord3D *ppos = createCoord3D(x,y,z);
    x = 5.5;
    y = -1.4;
    z = 7.77;
    Coord3D *pvel = createCoord3D(x,y,z);
    double pointZ = ppos->z + (pvel->z * 10);
    move(ppos, pvel, 10.0);
    CHECK((*ppos).x == 65);
    CHECK((*ppos).y == 6);
    CHECK((*ppos).z == pointZ);
    //deleteCoord3D(ppos);
    x = 20; 
    y = 21; 
    z = -22;
    Coord3D *ppos1 = createCoord3D(x,y,z);
    pointZ = ppos1->z + (pvel->z * 10);
    move(ppos1, pvel, 10.0);
    CHECK((*ppos1).x == 75);
    CHECK((*ppos1).y == 7);
    CHECK((*ppos1).z == pointZ);

}