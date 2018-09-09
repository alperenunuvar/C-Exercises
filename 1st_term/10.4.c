/* 
	Write a C program that reads 5 integers from the keyboard into an array in reverse order (first entered value will be the last element's value, so on) and then
	prints the array on the screen using a loop.
*/

/* Libraries */
#include <stdio.h>

int main()
{
	/* Arrays */
	int numbers[5];
	/* Variables */
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Enter a number = ");
		scanf("%d", &numbers[i]);		
	}
	printf("\nName of the array = numbers[5] = ");
	for(i = 0; i < 5; i++)
	{
		printf("(%d)", numbers[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("\nnumbers[%d] = %d", i, numbers[4-i]);
	}
	return 0;
}
