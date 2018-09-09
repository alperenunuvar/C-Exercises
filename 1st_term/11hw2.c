/*
	Write a C program having a function that reads two integers, then calculates the multiplication of these without using '*' operator and returns the result
	to the main function.
	In the main function, this value is written to the screen.
*/

/* Libraries */
#include <stdio.h>

/* Prototypes */
int calculateMultiple(int x, int y);

int main(void)
{
	/* Variables */
	int number1;
	int number2;
	int total;
	
	printf("Enter a number = ");
	scanf("%d", &number1);
	printf("Enter a number = ");
	scanf("%d", &number2);
	total = calculateMultiple(number1, number2);
	printf("\nMultiplication of %d and %d = %d", number1, number2, total);
	return 0;
}

int calculateMultiple(int x, int y)
{
	/* Variables */
	int i;
	int sum;
	
	sum = 0;
	for(i=1; i<=y; i++)
	{
		sum = sum + x;
	}
	return sum;
}
