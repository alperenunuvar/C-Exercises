/*
	Write a C program that reads 5 real numbers from the keyboard into an array and
	a. Calculates the average of these numbers and prints this value on the screen.
	b. Prints the array elements which are above the average.
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int total;
	int counter;	
	/* Arrays */
	int array1[5];
	
	total = 0;
	for(counter = 0; counter < 5; counter++)
	{
		printf("Enter the number = ");
		scanf("%d", &array1[counter]);
		total = total + array1[counter];
	}
	total = total / 5;
	printf("Average of the numbers = %d", total);
	printf("\nArray elements which are above the average = ");
	for(counter = 0; counter < 5; counter++)
	{
		if(array1[counter] > total)
		{
			printf("(%d)", array1[counter]);
		}
	}
	return 0;
}
