/*--------------------------------------------------*/
/* Program chapter9_13                              */
/*                                                  */
/* This programs creates a queue of data entered from
standard input. */
/* The queue is printed to standard output. */
#include<iostream>//Required for cout, cin
#include<queue>//Required for queue, push(), empty(), top()
using namespace std;
int main()
{
  // Declare objects.
  queue<int> aqueue;
  int ivalue;
  cout << "enter integer values, 's' to stop\n";
  // While valid data, read value and add to back of queue.
  while(cin >> ivalue)
  {
    aqueue.push(ivalue);
  }
  // Print values to standard output.
  cout << "Elements in the queue: \n";
  while(!aqueue.empty())
  {
    // Access element at the front of the queue.
    cout << aqueue.front() << endl;
    // Remove element from the front of the queue.
    aqueue.pop();
  }
  return 0;
}
