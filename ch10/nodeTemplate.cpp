/*---------------------------------------------------------*/
/* Class implementation for Node template */
/* filename: nodeTemplate.cpp */
#include "nodeTemplate.h" //Required for Node.
//Constructors.
template<typename T>
Node<T>::Node() : data(0),left(0),right(0)
{}
template<typename T>
Node<T>::Node(T v):data(v), left(0), right(0)
{}
//Accessors
template<typename T>
Node<T>* Node<T>::getLeft() const
{
return left;
}
template<typename T>
Node<T>* Node<T>::getRight() const
{
return right;
}
template<typename T>
T Node<T>::getData() const
{
return data;
}
//Mutators
template<typename T>
void Node<T>::setLeft(Node<T>* l)
{
left=l;
}
template<typename T>
void Node<T>::setRight(Node<T>* r)
{
right=r;
}
template<typename T>
void Node<T>::setData(T v)
{
data=v;
}
/*---------------------------------------------------------*/
