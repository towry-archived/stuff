#include "BST.h"
#include "list.h"
#include "Node.h"
#include <iostream>

using namespace std;

template <typename T>
void bst2dllist(Node<T>* root, List<T>*& list)
{
	if (!root) return;

	bst2dllist(root->getLeftChild(), list);

	list->push(root->getValue());

	bst2dllist(root->getRightChild(), list);

}

int main() 
{
	BST<int>* bst = new BST<int>();

	bst->insert(5);
	bst->insert(6);
	bst->insert(3);
	bst->insert(2);
	bst->insert(7);
	bst->insert(12);

	List<int>* list = new List<int>();

	bst2dllist(bst->getRoot(), list);

	list->print();
}