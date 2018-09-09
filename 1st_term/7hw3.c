/*
	Solve the previous question using while loop.
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
		number = range1;
		while(number <= range2)		
		{			
			if(number % 3 == 0)
			{
				
				counter++;
			}
			number++;			
		}
		printf("\nBetween %d and %d there are %d numbers divisible by 3 exactly", range1, range2, counter);
	}

	return 0;

}
