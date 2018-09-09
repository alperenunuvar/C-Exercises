/*
	Write a C program that displays the numbers from 20 to 16 (inclusive) in a descending order using for loop.
	Each number must be printed on a separate line.
	20
	19
	18
	17
	16
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int number;
	
	for(number = 20; number > 15; number--)
	{
		printf("%d\n", number);
	}
	return 0;
}
