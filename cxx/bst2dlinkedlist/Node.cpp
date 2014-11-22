#include <string>
#include "Node.h"

template <typename T>
Node<T>::Node(T v) {
  value = v;
  leftChild = 0;
  rightChild = 0;
}

template <typename T>
T Node<T>::getValue() {
  return value;
}

template <typename T>
Node<T>*& Node<T>::getLeftChild() {
  return leftChild;
}

template <typename T>
Node<T>*& Node<T>::getRightChild() {
  return rightChild;
}

template <typename T>
void Node<T>::setChild(Node<T>*& rc) {
	if (rc == NULL)
		return;

	if (rc->value < value)
		leftChild = rc;
	else
		rightChild = rc;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;
