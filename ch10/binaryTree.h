/*------------------------------------------------*/
/* Binary tree declaration */
/* filename: binaryTree.h */
#include "Node.h" //Required for node.
#include <iostream> //Required for ostream.
using namespace std;
class BinaryTree {
public:
//Default constructor.
BinaryTree();
//public, non recursive print and insert
void print(ostream& out) const;
void insert(int value);
void clear();
private:
//private recursive overloaded print and insert
void print(ostream& out, Node* rt) const;
void insert(Node* rt, int value);
void clear(Node* rt);
//private attribute
Node* root;
};
/*------------------------------------------------*/
