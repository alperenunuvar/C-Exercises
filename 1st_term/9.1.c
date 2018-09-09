/*
	Write a C program that defines an integer array with 5 elements and then assigns five times of the index value of each element to that element and prints
	the array on the screen using a loop.
*/

#include <stdio.h>

int main()
{
	/* Variables */
	int counter;
	/* Arrays */
	int numbers[5];
	
	for(counter = 0; counter <5; counter++)
	{
		numbers[counter] = counter * 5;
		printf("numbers[%d] = %d\n", counter, numbers[counter]);
	}
	return 0;
}
