/*-----------------------------------------------------------*/
/* Program chapter7_9                                        */
/* This program illustrates the use of several */
/* C style string functions. */
#include<iostream> //Required for cout
#include<cstring> //Required for strlen(), strcmp(), strcpy()
                  // strcat().
int main()
{
  // Declare and initialize objects.
  char strg1[]="Engineering Problem Solving: ";
  char strg2[]="with C++11", strg3[75] = "";
  // Print the length of each string.
  std::cout << "String lengths: " << strlen(strg1) << ' '
      << strlen(strg2) << ' ' << strlen(strg3) << std::endl;
  // Swap strings if strg1 is larger than strg2
  if(strcmp(strg1,strg2) > 0)
  {
    strcpy(strg3,strg2);
    strcpy(strg2,strg1);
    strcpy(strg1,strg3);
  }
  // Combine two strings into one.
  strcpy(strg3,strg1);
  strcat(strg3,strg2);
  std::cout << "strg3: " << strg3 << std::endl;
  std::cout << "strg3 length: " << strlen(strg3) << std::endl;
  return 0;
}
/*-----------------------------------------------------------*/
