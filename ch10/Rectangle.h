/*--------------------------------------------------------------*/
/* Class declaration for Rectangle. */
/* filename: rectangle.h */
#include "Point.h" //Required for Point
class Rectangle
{
  private:
  double width, height;
  Point origin;

  public:
  //Constructors
  Rectangle();
  Rectangle(double w, double p, double x, double y);
  //Accessor methods.
  double getWidth() const;
  double getHeight() const;
  Point getOrigin() const;
  double area() const;
  //Mutator methods.
  void setWidth(double w);
  void setHeight(double h);
  void setOrigin(Point p);
  void move(double dx, double dy);
  void print(ostream& out) const;
};
/*--------------------------------------------------------------*/
