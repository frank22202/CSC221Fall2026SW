/*----------------------------------------------------------------*/
/* filename: testBTree */
#include<iostream> //Required for cout.
#include "BinaryTree.h" //Required for BinaryTree.
using namespace std;
int main(){
  BinaryTree bt; //Test default constructor
  bt.insert(2); //Test insert on empty tree.
  bt.insert(10); //Test insert to right subtree.
  bt.insert(-2); //Test insert to left subtree.
  bt.print(cout); //Test print method.
  bt.clear(); //Test clear method.
  bt.print(cout);
  return 0;
}
