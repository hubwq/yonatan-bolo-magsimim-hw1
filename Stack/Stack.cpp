#include <iostream>
#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	addNode(s->list, element);
}

int pop(Stack* s)
{
	return removeNode(s->list);
}

void initStack(Stack* s)
{
	LinkedList* l = new LinkedList;
	initList(l);
	s->list = l;
}

void cleanStack(Stack* s)
{
	deleteList(s->list);
	delete(s->list);
}

bool isEmpty(Stack* s)
{
	return s->list->head == nullptr;
}
