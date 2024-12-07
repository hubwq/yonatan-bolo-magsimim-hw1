#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct IntNode
{
	unsigned int val;
	struct IntNode* next;
} IntNode;

typedef struct LinkedList
{
	IntNode* head;
} LinkedList;

void initList(LinkedList* list);
void addNode(LinkedList* list, unsigned int value);
int removeNode(LinkedList* list);
void printList(LinkedList* list);
void deleteNode(IntNode* node);
void deleteList(LinkedList* list);


#endif /* LINKEDLIST_H */