/*
	Write a C program that reads x reel number and m positive integer number from the keyboard in the main function. Main function passes these as an argument
	to a function. In the function formula given below is calculated and the result is returned to the main function. Then this value is written to the screen 
	in the main function.
*/

/* Libraries */
#include <stdio.h>

/* Properties */
float calculateFormula(int r, float n);

int main()
{
	/* Variables */
	float number;
	int range;
	float total;
	
	printf("Enter a reel number = ");
	scanf("%f", &number);
	printf("Enter a range = ");
	scanf("%d", &range);
	total = calculateFormula(range, number);
	printf("\nTotal = %.2f", total);
	return 0;
}

float calculateFormula(int r, float n)
{
	/* Variables */
	float sum;
	int i;
	
	for(i = 1; i <= r; i++)
	{
		sum = sum + n + 3;
	}
	return sum;
}
