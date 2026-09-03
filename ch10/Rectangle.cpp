/*-------------------------------------------------------------*/
/* Class Implementation for Rectangle.                         */
/* filename: Rectangle.cpp                                     */
#include "Rectangle.h" //Required for Rectangle

Rectangle::Rectangle():origin(0,0)
{
   cout << "Constructing Rectangle() ..." << this << endl;
   width=height=1;
}
Rectangle::Rectangle(double w, double h,
                     double x, double y):origin(x,y)
{
   cout << "Constructing Rectangle(parameter list)..."<< this <<endl;
   width=w;
   height=h;
}
void Rectangle::print(ostream& out) const
{
  out << "Width: " << getWidth() << " Height: " << getHeight();
  out << "\nOrigin at: (" << this->getOrigin().getX() 
      << "," << this->getOrigin().getY() << ")";
}

double Rectangle::getWidth() const
{
  return width;
}
double Rectangle::getHeight() const
{
  return height;
}
Point Rectangle::getOrigin() const
{
  return origin;
}
double Rectangle::area() const
{
  return width*height;
}
void Rectangle::setWidth(double w)
{
  width = w;
}
void Rectangle::setHeight(double h)
{
  height = h;
}
void Rectangle::setOrigin(Point p)
{
  origin = p;
}
void Rectangle::move(double dx, double dy)
{
  origin.setX( origin.getX() + dx);
  origin.setY( origin.getY() + dy);
}
/*------------------------------------------------------------*/
