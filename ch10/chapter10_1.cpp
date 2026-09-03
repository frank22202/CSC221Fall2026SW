/*-------------------------------------------------------------*/
/* Program chapter10_1 */
/* Driver program for testing Pixel class */
#include "Pixel.h" //Required for Pixel
#include <iostream> //Required for cout
using namespace std;
int main()
{
  //Test constructors
  Pixel defaultP;
  Pixel grayP(100);
  Pixel redP(255,0,0);
  //Test output operator
  cout << "Default pixel: " << defaultP << endl;
  cout << "Gray pixel: " << grayP << endl;
  cout << "Red pixel: " << redP << endl;
  //Test arithmetic operators
  //Addition
  defaultP = grayP + redP;
  cout << "After addition, defaultP: " << defaultP << endl;
  return 0;
}
