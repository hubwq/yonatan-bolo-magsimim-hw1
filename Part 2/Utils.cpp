#include "Utils.h"
#include <iostream>

// Reverse the input array
void reverse(int* nums, unsigned int size)
{
	int* temp = new int[size];

	for (int i = size - 1, j = 0; i >= 0; i--, j++)
	{
		temp[j] = nums[i];
	}

	for (int i = 0; i < size; i++)
	{
		nums[i] = temp[i];
	}
}

// Input 10 num and return reversed array
int* reverse10()
{
	int* nums = new int[10];

	std::cout << "Input 10 numbers:" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cin >> nums[i];
	}

	reverse(nums, 10);

	return nums;
}