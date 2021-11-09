#include <iostream>
#include "funcs.h"
#include "coord3d.h"

int main()
{
  std::cout << "Task A: \n";
  Coord3D point1 = {10, 20, 30};
  double p1Length = length(&point1);
  std::cout << "The length is: " << p1Length << '\n';
  std::cout << "---------------------------------\nTask B:\n";
  Coord3D point2 = {-20, 21, -22};
  double p2Length = length(&point2);
  std::cout << "The Address of points 1: " << &point1 << "\n";
  std::cout << "The address of points 2: " << &point2<< "\n\n";
  std::cout << "The length of p1 is: " << p1Length << "\n";
  std::cout << "The length of p2 is: " << p2Length << "\n\n";
  Coord3D *ans = fartherFromOrigin(&point1, &point2);
  std::cout << "Answer:" << ans << "\n";
  std::cout << "---------------------------------\nTask C:\n";
  return 0;
}
