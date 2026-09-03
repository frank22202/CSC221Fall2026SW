/********************************************************************/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int high(20), low(1), guess, count(1), ceiling;
bool done(false);
char answer;
const char YES('Y'), NO('N');

ceiling = ( ceil(log( (double)high ) ) + 1 ); 
cout << "Think of a number between " << low << " and " << high 
     << " and I will guess it in\n" << ceiling 
     << " or fewer trys.  Just answer y(es) or n(o) to my questions.\n"
     << "Are you thinking of a number? " << endl;
cin >> answer;
switch(toupper(answer))
{
   case YES:
     while(!done && high >= low)
     {
        guess = (high + low)/2;
        cout << "Are you thinking of " << guess << '?' << endl;
        cin >> answer;
        switch(toupper(answer))
        {
          case YES:
            cout << "I guessed it in " << count << " trys." << endl;
            if(count > ceiling) cout << "Good pick.." << endl;
            done = true;
            break;
          case NO:
            ++count;
            cout << "Is " << guess << " larger?" << endl;
            cin >> answer;
            if(toupper(answer) == YES)
            {
               high = guess - 1;
            }
            else
            {
               low = guess + 1;
            }
            break;  //case NO
          default:
            cout << "Don't support " << answer << endl;
            done = true;
        }  //end switch
      } //end while
      break;
      case NO:
        cout << "OK..Goodbye. " << endl;
        break;
      default:
        cout << "Dont support " << answer << endl;
}
return 0;
}//end main
