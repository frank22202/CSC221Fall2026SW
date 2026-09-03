/*---------------------------------------------------------*/
/* Program chapter7_1 */
/* This program assigns a set of values to a */
/* one-dimensional array then prints a list of the array */
/* offsets and values to standard output. */
/*---------------------------------------------------------*/
#include<iostream> //Required for cout.
#include<iomanip> //Required for setw().
using namespace std;
int main()
{
  //Declare varialbles.
  double t[21]; //The array.
  int i; //The loop index.
  //Assign 21 value to array t.
  for(i=0; i<21; ++i)
  {
    t[i] = i*0.5; //i provides offset and value.
  }
  //Print list of array offsets and values.
  //Print heading.
  cout << "21 values assigned to t"<< endl
      << "Offset Value" << endl;
  //Print list inside for loop.
  for(i=0; i<21; ++i)
  {
    cout << setw(6) << i << setw(10) << t[i] << endl;
  }
  return 0;
}
