/*-----------------------------------------------------------------*/
/* Program chapter9_11                                             */
/*                                                                 */
/* This programs creates a list of data entered from
standard input.                                                    */
/* The list is sorted and printed to standard output.              */
#include<iostream>//Required for cout, cin
#include<list>//Required for list, begin(), end(), insert(), sort()
using namespace std;
int main()
{
  // Declare objects.
  list<int> alist;
  list<int>::iterator iter;
  int ivalue;
  // Set iter to beginning of alist.
  iter = alist.begin();
  cout << "enter integer values, 's' to stop\n";
  // While valid data, read value and insert into list.
  while(cin >> ivalue)
  {
    alist.insert(iter, ivalue);
    ++iter;
  }
  // Sort the list in ascending order.
  alist.sort();
  // Print the list to standard output.
  cout << "Sorted list: \n";
  for(iter=alist.begin(); iter!=alist.end(); ++iter)
  {
    cout << *iter << endl;
  }
  return 0;
}
