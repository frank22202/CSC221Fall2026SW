/*---------------------------------------------------------------*/
/* Class implementation for Square */
/* filename: square.cpp */
#include "Square.h"
//Constructors
Square::Square()
{
//Rectangle constructor called implicitly.
cout << "Construction Square().. " << this
<< endl;
}
Square::Square(const Point& p, double s):Rectangle(s,s,
p.getX(),
p.getY())
{
//Parameterized constructor explicitly called in parameter list.
cout << "Constructing Square( Point, double).. " << this
<< endl;
}
double Square::getSide() const
{
return getWidth();
}
void Square::setSide(double s)
{
setWidth(s);
setHeight(s);
}
/*---------------------------------------------------------------*/
