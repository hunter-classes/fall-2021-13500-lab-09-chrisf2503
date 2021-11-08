#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main()
{
  Coord3D points = {1, 3, 4};
  std::cout << length(&points) << '\n';
  return 0;
}
