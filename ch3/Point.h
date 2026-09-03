/*-------------------------------------------------------*/
/* Point class Chapter3_7                                */
/* Filename: Point.h                                     */
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
double operator -(const Point& p2) const;
bool operator ==(const Point& p2) const; 
};
/*-------------------------------------------------------*/

