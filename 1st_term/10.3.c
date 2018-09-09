/*
	Write a C program that reads an integer from the keyboard in the main function and passes this number to a function as an argument. In the function, 
	integers are entered in a loop (do while fits best) and program counts the numbers divisible exactly by incoming number from the main function.
	Loop is ended when 0 is entered, and then count will be printed on the screen.
	Note: If the number entered in the main function is 0 give an error message otherwise remember to call the function from the main program.
*/

/* Libraries */
#include <stdio.h>

/* Prototypes */
int division(int mainNumber);

int main()
{
	/* Variables */
	int dividendNumber;
	
	printf("Enter a dividend = ");
	scanf("%d", &dividendNumber);
	if(dividendNumber == 0)
	{
		printf("Number cannot be zero.");
	}
	else
	{
		division(dividendNumber);
	}	
	return 0;
}

int division(int mainNumber)
{
	/* Variables */
	int counter;
	int dividerNumber;
	
	counter = 0;
	do
	{
		printf("Enter a divider = ");
		scanf("%d", &dividerNumber);
		if(dividerNumber != 0)
		{
			if(mainNumber % dividerNumber == 0)
			{
				counter = counter + 1;
			}
		}
	}
	while(dividerNumber != 0);
	printf("You have entered %d divisible number.", counter);
}
