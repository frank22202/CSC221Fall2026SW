/*----------------------------------------------------------*/
/* Class implementation for initial Point class declaration */
/* filename: Point.cpp                                      */
#include "Point.h"    //Required
#include <iostream>   //Required for cout
using namespace std;

//Default constructor
Point::Point()
{
    cout << "Constructing Point object, default: \n";
    cout << "initializing to zero" << endl;
    xCoord = 0.0;
    yCoord = 0.0;
    cout << "(" << xCoord << "," << yCoord << ")" << endl;
}
//Parameterized constructor
Point::Point(double x, double y)
{
    //input parameters x,y
    cout << "Constructing Point object, parameterized: \n";
    cout << "input parameters: " << x << "," << y << endl;
    xCoord = x;
    yCoord = y;
    cout << "(" << xCoord << "," << yCoord << ")" << endl;
}

int main(){
    Point p1 = Point(3,4);
}
