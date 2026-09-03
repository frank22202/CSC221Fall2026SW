/*--------------------------------------------------------*/ 
/* Pixel class declaration. */ 
/* File name: pixel.h */ 
/* This class implements the concept of a pixel */ 
#ifndef PIXEL_H
#define PIXEL_H
#include <iostream> //Required for istream, ostream 
using namespace std;

class Pixel
{
public:
  static const unsigned int MAXVAL = 255;
  //Constructors
  Pixel(){ red=green=blue=0;} //Default
  Pixel(unsigned); //Gray scale
  Pixel(unsigned,unsigned,unsigned); //Full color range
  Pixel(const Pixel& p) {red =p.red; blue=p.blue; green=p.green;}
  
  
  //Mutator methods
  void setRed(unsigned r) {red=r; validate();}
  void setGreen(unsigned g) {green=g; validate();}
  void setBlue(unsigned b) {blue=b; validate();}
  void setPixel(unsigned r, unsigned g, unsigned b){red=r;green=g;blue=b;validate();}
  //Overloaded operators.
  Pixel operator+(const Pixel& p) const;
  Pixel operator*(double v) const;
  Pixel operator/(unsigned v) const;
  
  //IO Operators.
  friend istream& operator >>(istream& in, Pixel& p);
  friend ostream& operator <<(ostream& out, const Pixel& p);
  bool overflow() const; //check overflow state
  void reset(); //reset overflow state
private:
  unsigned int red, green, blue; unsigned short overflowFlag;
  static const unsigned short RMASK = 4;
  static const unsigned short GMASK = 2;
  static const unsigned short BMASK = 1;
  static const unsigned short CHECK = 7;
  void validate(); //set overflow bits
};
#endif
