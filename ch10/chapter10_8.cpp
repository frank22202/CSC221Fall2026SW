/*--------------------------------------------*/
/* Program chapter10_8 */
/* filename: testSquare.cpp */
/* This program tests the Square class. */
#include<iostream>
#include "Square.h"
using namespace std;
int main()
{
  //Test constructors.
  Point p1(5,4);
  Square s1, s2(p1, 4);
  /* Test print() */
  /* inherited from Rectangle. */
  cout << "Square s2 has: " << endl;
  s2.print(cout);
  cout << endl;
  //Test getSide().
  cout << "Lenth of side of s2 is "
        << s2.getSide() << endl;
  //Test area method from Rectangle
  cout << "Area of s2 is "
        << s2.area() << endl;
  cout << "***********************\n";
  //Test setSide()
  s1.setSide(3.2);
  //Test print()
  cout << "Square s1 has: " << endl;
  s1.print(cout);
  cout << endl;
  return 0;
}
/*--------------------------------------*/
