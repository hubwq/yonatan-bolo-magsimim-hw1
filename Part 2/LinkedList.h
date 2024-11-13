#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
	unsigned int num;
	Node* next;
} Node;

void initNode(Node* node);
void addNode(Node** head, Node* newNode);
void removeNode(Node** head);
void setNode(Node** head, unsigned int num);
void printList(Node* head);

#endif /* LINKEDLIST_H */