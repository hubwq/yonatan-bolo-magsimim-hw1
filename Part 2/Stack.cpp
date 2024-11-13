#include "Stack.h"
#include <string>
#include <iostream>

// push - insert element to the top of the stack
void push(Stack* s, unsigned int element)
{
	Stack* newNode = new Stack;

	newNode->num = element;
	newNode->next = s->next;

	s->next = newNode;
}

// pop - remove element from the top of the stack
int pop(Stack* s)
{
	if (isEmpty(s))
	{
		return -1;
	}
	else
	{
		Stack* temp = s->next;

		s->next = temp->next;

		delete temp;
	}
}

// Initialize the stack
void initStack(Stack* s)
{
	s->next = nullptr;
}

// cleanStack - free the memory of Stack
void cleanStack(Stack* s)
{
	if (s->next)
	{
		cleanStack(s->next);
	}

	delete s;
}

// Check if the Stack is empty
bool isEmpty(Stack* s)
{
	return (s->next == NULL);
}

// Print the Stack
void printStack(Stack* s)
{
	if (isEmpty(s))
	{
		std::cout << "The Stack is Empty" << std::endl;
	}
	else
	{
		Stack* p = s;

		while (p->next)
		{
			p = p->next;
			std::cout << std::to_string(p->num) + " ";
		}

		std::cout << std::endl;
	}
}