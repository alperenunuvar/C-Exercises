/*
	Write a C program that reads integers from the keyboard until user enters 0 in a do while loop and counts and adds negative numbers, and then results 
	are written on the screen.
	Note: You will notice that this is a better loop to use while testing the value being read.
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int number;
	int sum;
	
	sum = 0;
	do
	{
		printf("Enter a number: ");
		scanf("%d", &number);
		sum = sum - number;			
	}
	while(number != 0);
	printf("Sum of the numbers: %d", sum);
	return 0; 
}
