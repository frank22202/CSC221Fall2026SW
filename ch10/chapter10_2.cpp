/*-----------------------------------------------------*/
/* Program chapter10_3 */
/* Driver program to test overflow state of Pixel */
#include "Pixel.h"
#include <iostream>
using namespace std;
int main()
{
  //Declare objects
  Pixel defaultP;
  Pixel grayP(100);
  Pixel redP(255,255,0);
  //Create overflow in red
  defaultP = grayP + redP;
  cout << defaultP << endl;
  if(defaultP.overflow() )
  {
    defaultP.reset();
  }
  cout << defaultP << endl;
  return 0;
}
