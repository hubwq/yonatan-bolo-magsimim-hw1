#include "Queue.h"
#include <iostream>

// Function to initialize the queue with a given size
void initQueue(Queue* q, unsigned int size)
{
	q->data = new unsigned int[size];
	q->front = 0;
	q->size = 0;
	q->max_size = size;
}

// Clean the dynamic arrays in the queue
void cleanQueue(Queue* q)
{
	delete[] q->data;
	q->data = nullptr;
}

// Insert the input value to the queue
void enqueue(Queue* q, unsigned int newValue)
{
	unsigned int index = (q->front + q->size) % q->max_size; // calculate the correct index
	q->data[index] = newValue;
	q->size++;
}

// return element in top of queue, or -1 if empty
int dequeue(Queue* q)
{
	if (isEmpty(q))
	{
		return -1;
	}

	unsigned int value = q->data[q->front]; // Get the front value
	q->front = (q->front + 1) % q->max_size; // Move front to the next element
	q->size--; // Decrease the size

	return value;
}

// Check if the Queue if empty
bool isEmpty(Queue* s)
{
	return (s->size == 0);
}

// Check if the Queue if full
bool isFull(Queue* s)
{
	return (s->size == s->max_size);
}