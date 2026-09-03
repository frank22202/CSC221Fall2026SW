/*-----------------------------------------------------*/
/* Class implmentation for Cube */
/* filename: cube.cpp */
#include "Cube.h" //Required for Cube
#include <cmath> //Required for pow()
Cube::Cube():Square()
{
  cout << "Constructing Cube()..."
        << this << endl;
}
Cube::Cube(const Point& p, double s):Square(p,s)
{
  cout << "Constructing Cube(Point, double)..."
        << this << endl;
}
double Cube::volume()
{
  return pow(getSide(), 3);
}
void Cube::print(ostream& out) const
{
  Rectangle r;
  r = *this; //A cube is a rectangle.
  //Print the depth
  out << "Depth: " << this->getSide() << " ";
  //Call Rectangle << to finish the job.
  Rectangle::print(out);
}
/*-----------------------------------------------------*/
