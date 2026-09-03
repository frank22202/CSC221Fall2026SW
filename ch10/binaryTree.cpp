/*----------------------------------------------------------------*/
/* Binary tree implementation */
/* filename: binaryTree.cpp */
#include "binaryTree.h" //Required for BinaryTree.
#include <iostream> //Required for ostream.
using namespace std;
//Constructor
BinaryTree::BinaryTree():root(0)
{}
//print: Public method
void BinaryTree::print(ostream& os) const
{
if(root == NULL)
{
cout << "tree is empty ";
return;
}
else
print(os, root); //call private print()
}
//print: private, recursive method
void BinaryTree::print(ostream& os, Node* theRoot) const
{
if(theRoot == NULL)
return;
else
{
print(os, theRoot->getLeft());
os << theRoot->getData() << ' ';
print(os,theRoot->getRight());
}
}
//insert: public method
void BinaryTree::insert(int value)
{
if(root == NULL)
root = new Node(value);
else
insert(root,value); //call private insert
}
//insert: private method
void BinaryTree::insert(Node* root, int val){
if(val < root->getData())
{
//Traverse the left subtree
if(root->getLeft() == NULL)
{
//insert new node here.
root->setLeft(new Node(val));
}
else
{
//recursive call to traverse left subtree
insert(root->getLeft(),val);
}
}
else
{
//Traverse the right subtree
if(root->getRight() == NULL)
{
//insert new node here
root->setRight(new Node(val));
}
else
{
//recursive call to traverse right subtree
insert(root->getRight(),val);
}
}
}//end insert
//clear: Public method
void BinaryTree::clear()
{
if(root == NULL)
return;
else
{
clear(root); //call private clear()
root = 0; //tree is empty
}
}//end clear
//clear: private, recursive method
void BinaryTree::clear(Node* theRoot)
{
if(theRoot == NULL)
return;
else
{
clear(theRoot->getLeft());
clear(theRoot->getRight());
delete theRoot;
}
}//end clear
/*----------------------------------------------------------------*/
