#include <iostream>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
    q->_elements = new unsigned int[size];
    q->_maxSize = size;
    q->_count = 0;
}

void cleanQueue(Queue* q)
{
    delete[] q->_elements;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (!isFull(q))
    {
        q->_elements[q->_count] = newValue;
        q->_count++;
    }
}

int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        return -1;
    }
    {
        unsigned int ret = 0;
        ret = q->_elements[0];

        unsigned int* newQ = new unsigned int[q->_maxSize];
        std::copy(q->_elements + 1, q->_elements + q->_count, newQ);
        unsigned int* temp = q->_elements;
        q->_elements = newQ;
        delete[] temp;
        
        q->_count--;
        
        return ret;
    }
}

bool isEmpty(Queue* s)
{
    return s->_count == 0;
}

bool isFull(Queue* s)
{
    return s->_count == s->_maxSize;
}
