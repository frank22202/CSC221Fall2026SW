#ifndef CUBE_H
#define CUBE_H
/*-----------------------------------------------------*/
/* Class declaration for Cube */
/* filename: Cube.h */
#include "Square.h"//Required for Square
#include "Point.h" //Required for Point
#include <iostream> //Required for ostream
class Cube : public Square
{
  public:
  Cube();
  Cube(const Point& p, double);
  double volume();
  void print(ostream&) const;
};
#endif
