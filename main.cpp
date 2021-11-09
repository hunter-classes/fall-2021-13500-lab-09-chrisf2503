#include <iostream>
#include "funcs.h"
#include "coord3d.h"

int main()
{
  Coord3D points = {1, 3, 4};
  std::cout << length(&points) << '\n';
  return 0;
}
