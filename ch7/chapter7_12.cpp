/*------------------------------------------------------------*/
/* Program chapter7_12 */
#include<iostream> //Required for cout
#include<vector> //Required for vector
using namespace std;
int main()
{
  //Declare and initialize objects.
  vector<int> v(5);
  //Print the capacity and the size.
  cout << "Capacity: " << v.capacity() << " Size: " << v.size()
      << endl;
  // Assign values to v.
  for(int i=0; i<v.capacity(); i++)
  {
    v[i] = i; //Random access
  }
  //Print the capacity and the size.
  cout << "Capacity: " << v.capacity() << " Size: " << v.size()
      << endl;
  //Add additional data to the end of v
  v.push_back(10);
  v.push_back(20);
  //Print the capacity and the size.
  cout << "Capacity: " << v.capacity() << " Size: " << v.size()
      << endl;
  return 0;
}
/*------------------------------------------------------------*/
