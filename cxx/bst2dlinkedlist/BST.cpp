#include "BST.h"
#include <iostream>

template <typename T>
BST<T>::BST() {
  root = 0;
}

template <typename T>
BST<T>::~BST() {
  
}

template <typename T>
Node<T>*& BST<T>::getRoot()
{
  return root;
}


template <typename T>
bool BST<T>::find(T v) {
  Node<T>* temp;

  if (v == root->getValue()) return true;

  temp = root;

  while (temp != NULL) {
    if (temp->getValue() == v)
      break;

    if (temp->getValue() < v)
      temp = temp->getRightChild();
    else if (temp->getValue() > v)
      temp = temp->getLeftChild();
  }

  if (temp == NULL)
    return false;
  if (temp->getValue() == v)
    return true;

  return false;
}

template <typename T>
void BST<T>::insert(T v) {
  Node<T>* temp = new Node<T>(v);
  Node<T>** curr = &root;

  while (*curr != 0) {
    if (v < (*curr)->getValue()) {
      curr = &((*curr)->getLeftChild());
    } else if (v > (*curr)->getValue()) {
      curr = &((*curr)->getRightChild());
    }
  }
  *curr = temp;
}

template <typename T>
void BST<T>::remove(T v) {
  Node<T>* parent = new Node<T>(v);
  Node<T>* temp = new Node<T>(v);

  parent = 0;
  temp = root;

  while (temp != NULL) 
  {
    if (temp->getValue() == v)
    {
      if (parent)
      {
        parent->setChild(temp->getLeftChild());
        parent->setChild(temp->getRightChild());
      }
      else
      {
        if (!temp->getLeftChild())
          root = temp->getRightChild();
        root = temp->getLeftChild();
      }
    }

    if (temp->getValue() > v) 
    {
      parent = temp;
      temp = temp->getLeftChild();
    }
    else 
    {
      parent = temp;
      temp = temp->getRightChild();
    }
  }
}

template <typename T>
void BST<T>::print() {
  traversalPrint(root);
}

template <typename T>
void BST<T>::traversalPrint(Node<T>* root) {
  // in order
  if(root != 0) {
    traversalPrint(root->getLeftChild());
    std::cout << root->getValue() << std::endl;
    traversalPrint(root->getRightChild());
  }
}

template class BST<int>;
template class BST<double>;
template class BST<std::string>;
