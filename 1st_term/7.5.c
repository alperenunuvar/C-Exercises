/*
	Write a C program that reads 5 integers from the keyboard in a loop and displays sum of them on the screen.
	Note: Use only one variable to read each number.
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int number;
	int sum;
	int counter;
	
	sum = 0;
	for(counter = 0; counter < 5; counter++)
	{
		printf("Enter a number: ");
		scanf("%d", &number);
		sum = sum + number;
	}
	printf("\nSum of the 5 numbers: %d", sum);
	return 0;
}
