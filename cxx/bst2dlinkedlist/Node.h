#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
 private:
  T value;
  Node<T>* leftChild;
  Node<T>* rightChild;

 public:
  Node<T>(T v);
  T getValue();

  Node<T>*& getLeftChild();
  Node<T>*& getRightChild();

  void setChild(Node<T>*& n);
};
#endif
