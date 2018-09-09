/*
	Write a C program having a function that reads x and y positive integers, then calculates the value of x^y without using a C library function and returns
	this value.
	In the main function, this value is written to the screen.
*/

/* Libraries */
#include <stdio.h>

/* Prototypes */
int calculate(int x, int y);

int main()
{
	/* Variables */
	int number;
	int coeff;
	int total;
	
	printf("Enter a number = ");
	scanf("%d", &number);
	printf("Enter a coefficient of number = ");
	scanf("%d", &coeff);
	total = calculate(number, coeff);
	printf("Total = %d", total);
	return 0;
}

int calculate(int x, int y)
{
	/* Variables */
	int i;
	int sum;
	
	sum = 1;
	for(i=1; i<=y; i++)
	{
		sum = sum * x;
	}
	return sum;
}
