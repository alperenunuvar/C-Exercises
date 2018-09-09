/*
	Write a C program that that reads two integers (dividend and divider) from the keyboard and calculates remainder and prints the result to the screen using two different
	type of functions (two different solution). Function prototypes are given below.
	a) int divide(int dividend, int divider);
	b) void bolme(int dividend, int divider, int *rem);
*/

#include <stdio.h>

/* Prototypes */
int divide(int dividend, int divider);
void bolme(int dividend, int divider, int *rem);

int main(void)
{
	/* Variables */
	int number1, number2;
	int result, result2;
	int remainder;
	
	printf("Enter first integer = ");
	scanf("%d", &number1);
	printf("Enter second integer = ");
	scanf("%d", &number2);
	result = divide(number1, number2);
	bolme(number1, number2, &remainder);
	printf("First result = %d\n", result);
	printf("Second result = %d", remainder);
	return 0;
}

int divide(int dividend, int divider)
{
	/* Variables */
	int total;
	
	total = dividend % divider;
	return total;	
}

void bolme(int dividend, int divider, int *rem)
{
	*rem = dividend % divider;
}
