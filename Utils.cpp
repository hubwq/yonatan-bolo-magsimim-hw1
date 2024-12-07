#include <iostream>
#include "Utils.h"
#include "Stack.h"

void testUtils()
{
	int size = 5;
	int i = 0;
	int* nums = new int[size];

	for (i = 0; i < size; i++)
	{
		nums[i] = i + 1;
		std::cout << nums[i] << " ";
	}
	std::cout << std::endl;

	reverse(nums, size);

	for (i = 0; i < size; i++)
	{
		std::cout << nums[i] << " ";
	}
	std::cout << std::endl;
}

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* s = new Stack;
	initStack(s);
	
	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
}

int* reverse10()
{
	unsigned int size = 10;
	int* nums = new int[size];

	std::cout << "Enter 10 numbers:" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cin >> nums[i];
	}

	reverse(nums, size);

	return nums;
}
