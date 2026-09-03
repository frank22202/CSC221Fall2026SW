/*----------------------------------------------------------*/
/* Program chapter7_10 */
/* This program illustrates the use of several */
/* operators and functions supported by the string class. */
#include<iostream> //Required for cout
#include<string> //Required for string, size()
using namespace std;
int main()
{
  // Declare and initialize string objects.
  string strg1 = "Engineering Problem Solving: ";
  string strg2 = "with C++11", strg3;
  // Print the length of each string.
  cout << "String lengths: " << strg1.size() << ' '
      << strg2.size() << ' ' << strg3.size() << endl;
  // Swap strings if strg1 is larger than strg2
  if(strg1 > strg2)
  {
    strg3 = strg2;
    strg2 = strg1;
    strg1 = strg3;
  }
  // Append a string.
  strg2 += " Using C++";
  // Concatenate two strings.
  strg3 = strg1 + strg2;
  cout << "strg3: " << strg3 << endl;
  cout << "strg3 length: " << strg3.size() << endl;
  return 0;
}
/*----------------------------------------------------*/
