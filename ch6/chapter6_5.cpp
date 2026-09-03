/* Program chapter6_5                    */
/*                                       */
/* This program generates and prints ten */
/* random integers between 1 and RAND_MAX. */
#include <iostream> //Required for cin, cout
#include <cstdlib> //Required for srand(), rand(),
using namespace std;
int main()
{
// Declare objects.
  unsigned int seed;
  // Get seed value from the user.
  cout << "Enter a positive integer seed value: \n";
  cin >> seed;
  srand(seed); //Seed random number generator.
  // Generate and print ten random numbers.
  cout << "Random Numbers: \n";
  for (int k=1; k<=10; ++k)
  {
    cout << rand() << ' '; //Print a random number.
  }
  cout << endl;
  // Exit program.
  return 0;
}
/*----------------------------------------------------*/
