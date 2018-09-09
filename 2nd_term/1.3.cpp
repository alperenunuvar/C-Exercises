/*
	Write a C program that reads 5 integers from the keyboard into an array using a loop in the main function. And this array will be sent to a function printArray as an argument, and
	it will be listed to the screen here.
*/
#include <stdio.h>

/* Prototypes */
void printArray(int *p);

int main(void)
{
	/* Arrays*/
	int numbers[5];
	/* Variables */
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("%d. Enter number = ", i+1);
		scanf("%d", &numbers[i]);
	}
	printArray(numbers);
	return 0;
}

void printArray(int *p)
{
	/* Variables */
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("numbers[%d] = %d\n", i, p[i]);
	}
}
