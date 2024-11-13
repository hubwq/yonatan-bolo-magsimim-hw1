#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains positive integer values. */
typedef struct Queue
{
	unsigned int* data; // dynamic array of all elements in the queue
	unsigned int front; // index of the current element
	unsigned int size; // current size of the queue
	unsigned int max_size; // the max size of the queue
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);

void printQueue(Queue* q);

#endif /* QUEUE_H */