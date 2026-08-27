/*-----------------------------------------------------------*/
/* Program chapter2_1                                        */
/*                                                           */
/* This program prints a char and an int                     */
#include<iostream> // Required for cout
using namespace std;
int main()
{
  // Declare and initialize objects.
    char ch {'3'};  //C++11
    int i{3};  //C++11
  // Print both values.
  cout << "value of ch: " << ch << " value of i: " << i << endl;
  // Assign character to integer
  i = ch;
  // Print both values.
  cout << "value of ch: " << ch << " value of i: " << i << endl;
  // Exit program
  return( 0);
}
/*------------------------------------------------------------*/
