#include "Queue.h"
#include <iostream>

int main()
{
	Queue* arr = new Queue;
	initQueue(arr, 4);

	for (int i = 1; i < 5; i++)
	{
		enqueue(arr, i);
	}

	if (isFull(arr))
	{
		std::cout << "full\n" << std::endl;
	}

	printQueue(arr);

	dequeue(arr);
	dequeue(arr);

	printQueue(arr);

	if (!isEmpty(arr))
	{
		std::cout << "Not Empty" << std::endl;
	}

	cleanQueue(arr);
	delete arr;
}