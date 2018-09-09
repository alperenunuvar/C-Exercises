/*
	Write a C program that calculates the factorial of the numbers within the range [1-5] (inclusive) and prints the result on the screen.
	Note: First start with writing logic for a single number, then you may add the logic to rest the numbers in a range.
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int digit1;
	int digit1_1;
	int sum;
	
	for(digit1 = 1; digit1 <= 5; digit1++)
	{			
		sum = digit1;
        for(digit1_1 = 1; digit1_1 < digit1; digit1_1++)
        {                          
            sum = sum * digit1_1;                          
        }
		printf("%d! = %d\n", digit1, sum);
	}	
	return 0;
}
