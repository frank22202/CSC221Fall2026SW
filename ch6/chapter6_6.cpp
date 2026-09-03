/*----------------------------------------------*/
/* Program chapter6_6                           */
/*                                              */
/* This program generates and prints ten random */
/* integers between user-specified limits.      */
#include <cstdlib> //Required for srand(), rand().
#include <iostream> //Required for cin, cout.
using namespace std;
// Function prototype.
int rand_int(int a, int b);
int main()
{
  // Declare objects.
  unsigned int seed;
  int a, b;
  // Get seed value and interval limits.
  cout << "Enter a positive integer seed value: \n";
  cin >> seed;
  //Seed the random number generator.
  srand(seed);
  cout << "Enter integer limits a and b (a<b): \n";
  cin >> a >> b;
  // Generate and print ten random numbers.
  cout << "Random Numbers: \n";
  for (int k=1; k<=10; ++k)
  {
    cout << rand_int(a,b) << ' ';
  }
  cout << endl;
  // Exit program.
  return 0;
}
/*----------------------------------------------------*/
/* This function generates a random integer */
/* between specified limits a and b (a<b). */
int rand_int(int a, int b)
{
  return rand()%(b-a+1) + a;
}
/*----------------------------------------------------*/
