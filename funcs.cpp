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
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    double p1Dis = length(p1);
    double p2Dis = length(p2);
    if(p1Dis > p2Dis){
        return p1;
    }
    else{
        return p2;
    }
}