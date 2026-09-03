#include <stdlib.h>
#include <iostream>
using namespace std;
/*-----------------------------------------------------------------*/
/* Program chapter3_3
*
* This program performs currency conversion from dollars to
* E => euros
* P => pesos
* S => pounds sterling
*/
int main(int argc, char** argv)
{
  double dollars, equivalentCurr;
  char currencyCode;
  const double ECONVERTION(0.7041), PCONVERTION(11.6325),
               SCONVERTION(0.6144);
  //Prompt user for input
  cout << "enter dollar amount" << endl;
  cin >> dollars;
  cout << "enter currency code:\n"
      << "E => Euros\nP => Mexican Pesos\nS => British Pounds Sterling\n" ;
  cin >> currencyCode;
  switch(toupper(currencyCode))
  {
  case 'E':
    cout << "converting dollars to euros..\n" ;
    equivalentCurr = dollars*ECONVERTION;
    break;
  case 'P':
    cout << "converting dollars to pesos..\n" ;
    equivalentCurr = dollars*PCONVERTION;
    break;
  case 'S':
    cout << "converting dollars to pounds sterling..\n" ;
    equivalentCurr = dollars*SCONVERTION;
    break;
  default:
    cout << currencyCode << "not supported at this time\n" ;
    equivalentCurr = dollars;
  }
  cout << "Equivalent amount: "<< equivalentCurr << endl;
  return(EXIT_SUCCESS);
}
