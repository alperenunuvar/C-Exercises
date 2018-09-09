/*
	Write a C program that reads a and b integers from the keyboard and calculates the formula given below using a loop statement and prints the result on the 
	screen.
	(If you enter 2 for a, 1 for b, total is 30.)
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int number1;
	int number2;
	int sum;
	int range1;	
	int range2;	
	
	printf("Enter 1st number: ");
	scanf("%d", &number1);
	printf("Enter 2nd number: ");
	scanf("%d", &number2);
	for(range2 = 1; range2 <=2; range2++)
	{
		for(range1 = 1; range1 <= 3; range1++)
		{
			sum = sum + (number1 * number1) + number2;
		}
	}	
	printf("%d", sum);
	return 0;
}
