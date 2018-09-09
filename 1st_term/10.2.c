/*
	Write a C program that reads two integers from the keyboard in the main function for a range [lower bound-upper bound] and passes these numbers to a function
	as an argument. In the function all the numbers within this range will be printed on the screen.
	Note: In the main function first number must be smaller than the second one and then the function will be called; otherwise an error message must be printed.
*/

/* Libraries */
#include <stdio.h>

/* Prototypes */
int number(int number1, int number2);

int main()
{
	/* Variables */
	int range1;
	int range2;
	
	printf("Enter first range = ");
	scanf("%d", &range1);
	printf("Enter second range = ");
	scanf("%d", &range2);
	if(range1 < range2)
	{
		number(range1, range2);
	}
	else
	{
		printf("\nFirst range must be greater than second one.");
	}
	return 0;
}

int number(int number1, int number2)
{
	/* Variables */
	int i;
	int counter;
	
	counter = 0;
	printf("\n");
	for(i = number1; i <= number2; i++)
	{
		counter = counter + 1;
		printf("(%d)", i);
	}
	printf("\n\nThere are %d numbers. (ranges are inclusive)", counter);
}
