/*--------------------------------------------------*/
/* Program chapter2_7                               */
/*                                                  */
/* This program prints the system limitations.      */
#include<iostream>
#include<climits>
#include<cfloat>
using namespace std;
int main()
{
  // Print integer type maxima. /
  cout << "short maximum: " << sizeof(short) << endl;
  cout << "int maximum: " << sizeof(int) << endl;
  cout << "long maximum: " << sizeof(long) << endl << endl;

  // Print float precision, range, maximum. /
  cout << "float precision digits: " << FLT_DIG << endl;
  cout << "float maximum exponent: "
       << FLT_MAX_10_EXP << endl;
  cout << "float maximum: " << sizeof(float) << endl << endl;

  // Print double precision, range, maximum. /
  cout << "double precision digits: " << DBL_DIG << endl;
  cout << "double maximum exponent: "
       << DBL_MAX_10_EXP << endl;
  cout << "double maximum: " << sizeof(double) << endl << endl;

  // Print long precision, range, maximum. /
  cout << "long double precision: " << LDBL_DIG << endl;
  cout << "long double maximum exponent: "
       << LDBL_MAX_10_EXP << endl;
  cout << "long double maximum: " << sizeof(long double) << endl;

  // Exit program.
  return 0;
}
/*----------------------------------------------------*/
