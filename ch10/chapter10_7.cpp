/*-----------------------------------------------------------------*/
/* Program chapter10_7                                             */
/* This program demonstrates the use of the function               */
/* template minVal.                                                */
#include<iostream> //Required for cout.
#include<string> //Required for string.
#include "templateMinVal.cpp"
using namespace std;
//Function Prototype
template <typename Dtype>
Dtype minVal(const Dtype x[], int n);
int main()
{
  //Declare objects.
  const int SIZE = 10;
  char ch[SIZE] = {'h','e','l','l','o','w','o','r','l','d'};
  int iDat[SIZE] = {5,2,7,8,2,5,9,8,1,9};
  double dDat[SIZE] = {-2.1,4.3,0.0,9.3,0.4,-4.2};
  string sDat[SIZE] = {"this","short","the","list","of","strings"};
  //Print smallest value in each array.
  cout << "smallest char in ch is "
        << minVal(ch,SIZE) << endl; // Char
  cout << "smallest integer in iDat is "
        << minVal(iDat,SIZE) << endl; // int
  cout << "smallest double in dDat is "
        << minVal(dDat,6) << endl; // double
  cout << "smallest string in sDat is: "
        << minVal(sDat,6) << endl; // string
  return 0;
}
/*-----------------------------------------------------------------*/
