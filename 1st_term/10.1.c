// Attention! Programs will be coding like this method as the following, after then.

/*
	Write a C program having a function that counts and sums the numbers within range [5-7] (inclusive) using a loop and then prints these values on the screen.
	Note: Remember to call the function from the main program.
*/

/* Libraries */
#include <stdio.h>

/* Prototypes */
void adding();

int main()
{
	adding();
	return 0;
}

void adding()
{
	/* Variables */
	int sum;
	int number;
	int counter;
	
	counter = 0;
	sum = 0;
	for(number = 5; number<=7; number++)
	{
		sum = sum + number;
		counter = counter + 1;
	}
	printf("Sum of the numbers = %d\nNumbers of the digits = %d", sum, counter);
}
