/*-----------------------------------------------------------------*/
/* Program chapter9_12                                             */
/*                                                                 */
/* This programs creates a stack of data entered from
   standard input.                                                 */
/* The stack is printed to standard output.                        */
#include<iostream>//Required for cout, cin
#include<stack>//Required for stack, push(), top(), empty()
using namespace std;
int main()
{
  // Declare objects.
  stack<int> astack;
  int ivalue;
  cout << "enter integer values, 's' to stop\n";
  // While valid data, read value and add to stack.
  while(cin >> ivalue)
  {
    astack.push(ivalue);
  }
  // Print values to standard output.
  cout << "Elements from the stack: \n";
  while(!astack.empty())
  {
    // Access the top element.
    cout << astack.top() << endl;
    // Remove top element from the stack.
    astack.pop();
  }
  return 0;
}
