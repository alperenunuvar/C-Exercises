/*
	Write a C program that reads 2 different integers from the keyboard and counts the numbers within this range (inclusive) divisible by 3 exactly using
	for loop and displays result on the screen.
	Note: If numbers are equal or first number is bigger than second number, display an error message.
	
	Enter two different integers: 3 7
	Between 3 and 7 there are 2 numbers divisible by 3 exactly.
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int range1;
	int range2;
	int number;
	int counter = 0;
	
	printf("Enter first number: ");
	scanf("%d", &range1);
	printf("Enter second number: ");
	scanf("%d", &range2);
	if(range1 >= range2)
	{
		printf("First number is higher than zero and bigger than second number.");
	}
	else
	{
		for(number = range1; number <= range2; number++)
		{
			if(number % 3 == 0)
			{
				counter++;
			}			
		}
		printf("\nBetween %d and %d there are %d numbers divisible by 3 exactly.", range1, range2, counter);
	}
	return 0;
}
