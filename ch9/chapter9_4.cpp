/*-----------------------------------------------------------------*/
/* Program chapter9_4                                              */
/*                                                                 */
/* This program counts and prints the number of                    */
/* times one string appears within another string.                 */
#include <iostream> //Required for cout
#include <cstring> //Required for strstr
using namespace std;
int main()
{
  // Declare and initialize objects.
  int count{0};
  char strg1[] ="abbcfgwdbibbw" , strg2[] = "bb";
  char *ptr1{strg1}, *ptr2{strg2};
  // Count number of occurrences of strg2 in strg1.
  // While function strstr does not return NULL
  // increment count and move ptr1 to next section
  // of strg1.
  while ((ptr1=strstr(ptr1,ptr2)) != NULL)
  {
    count++;
    ptr1++;
  }
  // Print the number of occurrences.
  cout << "Count: " << count << endl;
  return 0;
}
/*-----------------------------------------------------------------*/
