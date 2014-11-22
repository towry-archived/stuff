#include "list.h"
#include <iostream>

template <typename T>
LNode<T>::LNode() {}

template <typename T>
LNode<T>::LNode(T value)
{
	val = value;
}

template <typename T>
T LNode<T>::getValue()
{
	return val;
}

template <typename T>
List<T>::List() {}

template <typename T>
List<T>::List(T val)
{
	LNode<T>* node = new LNode<T>(val);

	head = tail = node;
	node->prev = node->next = 0;
	++len;
}

template <typename T>
void List<T>::push(LNode<T>*& node)
{
	if (!len) 
	{
		head = tail = node;
		node->prev = node->next = 0;
	}
	else
	{
		node->prev = tail;
		node->next = 0;
		tail->next = node;
		tail = node;
	}

	++len;
}

template <typename T>
void List<T>::push(T val)
{
	LNode<T>* node = new LNode<T>(val);

	// ok
	push(node);
}

template <typename T>
bool List<T>::find(T val)
{
	LNode<T>* node = new LNode<T>();

	node = head;

	while (node)
	{
		if (val == node->getValue()) return true;

		node = node->next;
	}

	return false;
}

template <typename T>
void List<T>::remove(T val)
{
	LNode<T>* node = new LNode<T>();

	node = head;

	while (node)
	{
		if (val == node->getValue())
		{
			if (node->prev)
			{
				if (node->next)
				{
					node->next->prev = node->prev;
					node->prev->next = node->next;
				}
				else
					tail = node->prev;
			}
			else
			{
				if (node->next)
				{
					head = node->next;
				}
				else
				{
					head = tail = 0;
					len = 0;
				}
			}
			--len;
			delete node;
			node = NULL;

			return;
		}
		else 
			node = node->next;
	}
}

template <typename T>
void List<T>::print()
{
	if (!len) return;

	LNode<T>* node = new LNode<T>();

	node = head;

	while (node)
	{
		std::cout << node->getValue() << " ";
		node = node->next;
	}

	std::cout << std::endl;
}

template class List<int>;