/*----------------------------------------------------*/
/* This function generates a random integer */
/* between specified limits a and b (a<b). */
int rand_int(int a, int b)
{
  return rand()%(b-a+1) + a;
}
/*----------------------------------------------------*/
