/*
	Write a C program that reads a and b integers from the keyboard and calculates the formula below and prints the result on the screen.
	Then, the program will ask the user to continue or not.
	If the answer is Y or y, it will repeat the same process, otherwise program will stop.
	Note: Remember to add a space before %c to clean up the memory.
	( scanf(" %c", &cevap); )
	You may use do-while for outer loop and for statement for inner loop.
	First, write and test inner loop, then add outer loop.
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int number1;
	int number2;
	int sum;
	int range;
	char answer;
	
	do
	{
		printf("Enter 1st number: ");
		scanf("%d", &number1);
		printf("Enter 2nd number: ");
		scanf("%d", &number2);
		for(range = 1; range <=100; range++)
		{
			sum = sum + (number1 + (number2 * number2));
		}
		printf("Total: %d\n", sum);
		sum = 0; // If sum is not 0, total number is not true because of "sum = sum + ...".
		printf("Would you like to calculate again? Y-y for yes, N-n for no.\nChoice: ");
		scanf(" %c", &answer);
	}
	while((answer == 'y' || answer == 'Y'));
	printf("You stopped the calculation.");
	return 0;
}
