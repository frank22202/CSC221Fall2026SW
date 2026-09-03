#include "Point.h"
#include <iostream>
using namespace std;
int main()
{
Point p1, p2; //line 1
p1.xCoord = 3; //line 2
cout <<p1.getY(); //line 3
cout << p1 - p2 << endl; //line 4
return 0;
}
