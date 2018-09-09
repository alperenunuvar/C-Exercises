/*
	Write a C program that reads an integer and passes this as an argument to a function.
	This function tests if this is a prime number or not.
	If it is a prime number, character P otherwise N will be returned.
	In the main function, a meaningful message will be written to the screen printing the number and if it is a prime or not.
*/

/* Libraries */
#include <stdio.h>

/* Prototypes */
char primeTest(int n);

int main()
{
	/* Variables */
	int number;
	char result;
	
	printf("Enter a number to test = ");
	scanf("%d", &number);
	result = primeTest(number);
	if(result == 'P')
	{
		printf("\n%d is prime number.", number);
	}
	else if(result == 'N')
	{
		printf("\n%d is not prime number.", number);
	}
	return 0;
}

char primeTest(int n)
{
	/* Variables */
	int i;
	char test;
	int counter;
	
	counter = 0;
	for(i=2; i<n; i++)
	{
		if(n % i == 0)
		{
			counter++;
		}
	}
	if(counter > 0)
	{
		test = 'N';
	}
	else
	{
		test = 'P';
	}
	return test;
}
