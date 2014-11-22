#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

template <typename T>
class LNode 
{
public:
	LNode<T>* prev;
	LNode<T>* next;

	T val;

	LNode();
	LNode(T val);
	T getValue();
};

template <typename T>
class List
{
private:
	LNode<T>* head;
	LNode<T>* tail;
	unsigned int len;

public:
	List<T>();
	List<T>(T val);
	List<T>(LNode<T>*&);
	void push(LNode<T>*& node);
	void push(T val);
	bool find(T val);
	void remove(T val);

	void print();
};

#endif // LIST_H