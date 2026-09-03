/*-------------------------------------------------------------*/
/* Program chapter3_3-4 */
/* */
/* This program illustrates the use of the */
/* programmer-defined data type Point */
#include <iostream> //Required for cout
#include "Point.h" //Required for Point
using namespace std;
int main()
{
//Declare and initialize objects.
Point p1;
Point p2(1.5, -4.7);
//Test operators
if( p1 == p2)
{
cout << "p1 is equal to p2" << endl;
}
else
{
cout << "Distance between p1 and p2 is" << p1 - p2
<< endl;
}
return 0;
}
/*-------------------------------------------------------------*/
