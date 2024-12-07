#include <iostream>
#include "LinkedList.h"

void initList(LinkedList* list)
{
	list->head = nullptr;
}

void addNode(LinkedList* list, unsigned int value)
{
	IntNode* newNode = new IntNode;
	newNode->val = value;
	newNode->next = list->head;

	list->head = newNode;
}

int removeNode(LinkedList* list)
{
	if (!list->head)
	{
		return -1;
	}
	else
	{
		unsigned int res = list->head->val;
		IntNode* p = list->head;
		list->head = list->head->next;
		delete(p);
		return res;
	}
}

void printList(LinkedList* list)
{
	if (list->head)
	{
		IntNode* p = list->head;
		while (p)
		{
			std::cout << p->val << " ";
			p = p->next;
		}
		std::cout << "" << std::endl;
	}
}

void deleteNode(IntNode* node)
{
	if (node->next)
	{
		deleteNode(node->next);
	}
	delete(node);
}

void deleteList(LinkedList* list)
{
	if (list->head)
	{
		deleteNode(list->head);
	}
}
