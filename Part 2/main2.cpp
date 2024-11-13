#include "LinkedList.h"
#include "Stack.h"
#include <iostream>

////check LinkedList
//int main()
//{
//	Node* head = new Node;
//	Node* newNode = new Node;
//
//	initNode(head);
//	initNode(newNode);
//
//	setNode(&head, 7);
//	setNode(&newNode, 3);
//
//	printList(head);
//	printList(newNode);
//
//	addNode(&head, newNode);
//
//	printList(head);
//
//	removeNode(&head);
//
//	printList(head);
//
//	removeNode(&head);
//
//	return 0;
//}

int main()
{
	Stack* head = new Stack;

	initStack(head);

	push(head, 4);

	printStack(head);

	push(head, 65);
	push(head, 86);

	printStack(head);

	pop(head);

	printStack(head);

	cleanStack(head);

	return 0;
}