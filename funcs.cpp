#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include "math.h"
// add functions here

double length(Coord3D *p){
    double firstOp = pow(p->x, 2) + pow(p->y, 2) + pow(p->z, 2);
    double secondOp = sqrt(firstOp);
    return secondOp;
}