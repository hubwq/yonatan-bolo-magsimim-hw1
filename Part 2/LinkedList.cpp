#include "LinkedList.h"
#include <iostream>
#include <string>

// Initilaze a LinkedList
void initNode(Node* node)
{
	node->num = 0;
	node->next = NULL;
}

// Add new node to the top of the linked list
void addNode(Node** head, Node* newNode)
{
	if (!*head)
	{
		*head = newNode;
	}
	else
	{
		Node* p = *head;
		while (p->next)
		{
			p = p->next;
		}
		p->next = newNode;
	}
}

// Remove from the top of the linked list
void removeNode(Node** head)
{
	if (!(*head)->next)
	{
		delete* head;
		*head = nullptr;
	}
	else
	{
		Node* p = *head;
		while (p->next->next)
		{
			p = p->next;
		}

		delete p->next;
		p->next = nullptr;
	}
}

// Set up the node
void setNode(Node** head, unsigned int num)
{
	(*head)->num = num;
}

// Print list
void printList(Node* head)
{
	std::string output = "";

	Node* p = head;

	while (p->next)
	{
		output += std::to_string(p->num) + " ";
		p = p->next;
	}

	std::cout << output << std::to_string(p->num) << std::endl;
}