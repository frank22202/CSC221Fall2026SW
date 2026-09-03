/* File name: Pixel.cpp                                           */
#include "Pixel.h"
/*-------------------------------------------------------------*/
Pixel::Pixel(unsigned int value)
{
  //Gray scale
  red=green=blue=value;
validate();
return; 
}
/*-------------------------------------------------------------*/
Pixel::Pixel(unsigned int r,unsigned int g,unsigned int b)
{
  //Full color range
  red=r;
  green=g;
  blue=b;
validate();
return; }
/*-------------------------------------------------------------*/
/*------------------------------------------------------------*/
  void Pixel::validate()
  {
    if(red > MAXVAL) overflowFlag = overflowFlag|RMASK;
    if(green > MAXVAL) overflowFlag = overflowFlag|GMASK;
    if(blue > MAXVAL) overflowFlag = overflowFlag|BMASK;
}
/*----------------------------------------------------------------*/
/* Addition (+) operator.                                         */
Pixel Pixel:: operator+(const Pixel& p) const
{
Pixel temp;
temp.red = red + p.red;
temp.green = green + p.green;
temp.blue = blue + p.blue;
temp.validate();
return temp;
}
/*----------------------------------------------------------------*/

/* Multiplication (*) operator.                                */
Pixel Pixel:: operator*(double v) const
{
  Pixel temp;
  temp.red = red*v;
  temp.green = green*v;
  temp.blue = blue*v;
  temp.validate();
  return temp;
}
/*-------------------------------------------------------------*/
/* Division (/) operator.                                      */
Pixel Pixel:: operator/(unsigned int v) const
{
  Pixel temp;
  temp.red = red/v;
  temp.green = green/v;
  temp.blue = blue/v;
  temp.validate();
  return temp;
}

/*-------------------------------------------------------------*/
 ostream& operator<<(ostream& out, const Pixel& p)
 {
   out << p.red << ' ';
   out << p.green << ' ';
out << p.blue;
return out; 
}
/*------------------------------------------------------------*/
istream& operator>>(istream& in, Pixel& p)
{
  in >> p.red >> p.green >> p.blue;
  p.validate();
return in; }
/*-------------------------------------------------------------*/
/*-------------------------------------------------------------*/
void Pixel::reset()
{
    if(red > MAXVAL) red = MAXVAL;
    if(green > MAXVAL) green = MAXVAL;
    if(blue > MAXVAL) blue = MAXVAL;
    overflowFlag = 0;
}
