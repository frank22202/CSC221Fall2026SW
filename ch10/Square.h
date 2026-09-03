#ifndef SQUARE_H
#define SQUARE_H
/*----------------------------------*/
/* Class Declaration for Square */
/* filename Square.h */
#include "Rectangle.h"
using namespace std;
class Square : public Rectangle
{
public:
//Constructors
Square();
Square(const Point&, double s);
double getSide() const;
void setSide(double);
};
/*----------------------------------*/
#endif
