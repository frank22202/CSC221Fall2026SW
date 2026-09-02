/*------------------------------------------------*/
/* Program chapter2_2                             */
/*                                                */
/* This program prints a greeting                 */
/* using the string class.                        */
#include <iostream> // Required for cout
#include <string> // Required for string
using namespace std;
int main()
{
  // Declare and initialize two string objects.
  string salutation("Hello"), name("Jane Doe");
  // Output greeting.
  cout << salutation << ' ' << name << '!' << endl;
  // Exit program.
  return(0);
}

