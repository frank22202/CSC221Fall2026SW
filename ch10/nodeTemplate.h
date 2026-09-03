/*---------------------------------------------------------*/
/* class declaration for node template: */
/* filename nodeTemplate.h */
#ifndef TNODE_H
#define TNODE_H
template<typename T>
class Node
{
//Private attributes
private:
T data;
Node *left;
Node *right;
//Public interface.
public:
Node(); //Default constructor
Node(T); //Parameterized constructor
//Accessors
Node* getLeft() const;
Node* getRight() const;
T getData() const;
//Mutators
void setLeft(Node*);
void setRight(Node*);
void setData(T v);
};
#endif
/*---------------------------------------------------------*/
