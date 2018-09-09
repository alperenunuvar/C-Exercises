/*
	Write a C program having a function that reads 10 integers from the keyboard into an array and counts 0's and negative numbers in the array separately,
	then writes these to the screen.
*/

/* Libraries */
#include <stdio.h>

/* Prototypes */
void function();

int main()
{
	function();
	return 0;
}

void function()
{
	/* Arrays */
	int numbers[10];
	
	/* Variables*/
	int i;
	int counterZero;
	int counterNegative;
	
	counterZero = 0;
	counterNegative = 0;
	for(i=0; i<10; i++)
	{
		printf("Enter %d. number = ", i+1);
		scanf("%d", &numbers[i]);
		if(numbers[i] == 0)
		{
			counterZero++;
		}
		if(numbers[i] < 0)
		{
			counterNegative++;
		}
	}
	printf("\nThere are %d zero and %d negative numbers in the array.", counterZero, counterNegative);
}
