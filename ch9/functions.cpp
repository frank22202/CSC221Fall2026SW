#include<cctype>
/*-----------------------------------------------------------------*/
/*                                                                 */
/* This function converts each character in the string             */
/* pointed to by ptr_strg to upper case.                           */
/*                                                                 */
void stringupper(char* ptr_strg)
{
// While not end of string.
  while(*ptr_strg)
  {
    // Convert character to upper case
    *ptr_strg = toupper(*ptr_strg);
    // Mover pointer to next character
    ptr_strg++;
  }
}
/*-----------------------------------------------------------------*/
