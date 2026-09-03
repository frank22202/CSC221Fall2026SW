/*----------------------------------------------------------------*/
/* Program chapter10_6 */
/* This program tests the node class */
/* filename: nodeTest.cpp */
#include<iostream> //Required for cout.
#include "node.h" //Required for Node.
using namespace std;
int main(){
  Node n1,n3; //Test default constructor.
  Node n2(4); //Test parameterized constructor.
  //Test accessor methods.
  cout << "Value of n1 after default construction: "
      << endl << n1.getData() << "," << n1.getLeft() << ","
      << n1.getRight() << endl;
  cout << "Value of n2 after parameterized construction: "
      << endl << n2.getData() << "," << n2.getLeft() << ","
      << n2.getRight() << endl;
  //Test mutator methods.
  n1.setData(13);
  n1.setLeft(&n2);
  n1.setRight(&n3);
  cout << "Value of n1 after modification: " << endl
      << n1.getData() << "," << n1.getLeft() << ","
      << n1.getRight() << endl;
  cout << "Value of n2 after modification: " << endl
      << n2.getData() << "," << n2.getLeft() << ","
      << n2.getRight() << endl;
  cout << "Value of n3 after modification: " << endl
      << n3.getData() << "," << n3.getLeft() << ","
      << n3.getRight() << endl;
return 0;
}
/*----------------------------------------------------------------*/
