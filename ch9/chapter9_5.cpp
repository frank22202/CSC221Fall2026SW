/*-----------------------------------------------------------------*/
/* Program chapter9_5 */
/*                                                                 */
/* This program converts a string to all upper case. */
/*                                                                 */
#include <iostream> //Required for cout
#include <cctype> //Required for toupper()
using namespace std;
//Function prototypes
void stringupper(char*);
int main()
{
  // Declare and initialize objects.
  char strg1[] ="abbcfgwdbibbw";
  char *ptr_strg1{strg1};
  // Ouput string before and after call to function.
  cout << ptr_strg1 << endl;
  stringupper(ptr_strg1);
  cout << ptr_strg1 << endl;
  return 0;
}
/*-----------------------------------------------------------------*/
/*-----------------------------------------------------------------*/
/*                                                                 */
/* This function converts each character in */
/* the string pointed to by ptr_strg to upper case. */
/*                                                                 */
void stringupper(char* ptr_strg)
{
  // While not end of string (while character is not null).
  while(*ptr_strg)
  {
    // Convert character to upper case
    *ptr_strg = toupper(*ptr_strg);
    // Mover pointer to next character
    ptr_strg++;
  }
}
/*-----------------------------------------------------------------*/
