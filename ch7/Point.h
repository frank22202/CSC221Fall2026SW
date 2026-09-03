/*-------------------------------------------------------*/
/* Point class Chapter3_7                                */
/* Filename: Point.h                                     */
#include <iostream>
using namespace std;

class Point
{
  //Type declaration statements
  //Data members.
  private:
  double xCoord, yCoord; //Class attributes

  public:
  //Declaration statements for class methods
  //Constructors for Point class
  Point(); //default constructor
  Point(double x, double  y); //parameterized constructor

  //Overloaded operators
  double operator -(const Point& rhs) const;  
  bool operator ==(const Point& rhs) const; 

  //Accessor Methods
  double getX() const {return xCoord;}
  double getY() const {return yCoord;}

  //Mutator Methods
  void setX(double newX); 
  void setY(double newY); 
  void input(istream& in);
};
/*-------------------------------------------------------*/
