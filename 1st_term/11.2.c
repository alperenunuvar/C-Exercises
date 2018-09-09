/*
	Write a C program that reads x and n positive integers from the keyboard and passes these as an argument to a function.
	In the function the formula given below is calculated with first n element.
	Result is returned to the main function.
	Then this value is written to the screen in the main function.
	
	F = x + (x^2/2) + (x^3/3) + ... + (x^n/n)
*/

/* Libraries */
#include <stdio.h>
#include <math.h>

/* Prototypes */
int calculateFormula(int x, int n);

int main()
{
	/* Variables */
	int total;
	int number;
	int coeff;
	
	printf("Enter a number = ");
	scanf("%d", &number);
	printf("Enter a coefficient of number = ");
	scanf("%d", &coeff);
	total = calculateFormula(number, coeff);
	printf("\nTotal = %d", total);
	return 0;
}

int calculateFormula(int x, int n)
{
	/* Variables */
	int sum;
	int i;
	int coeff2;
	
	sum = 0;
	coeff2 = 0;
	for(i = 1; i <= n; i++)
	{
		coeff2  = pow(x, i);
		sum = sum + (coeff2 / i);
	}
	return sum;
}
