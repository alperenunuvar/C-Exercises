#include <stdio.h>

int main(void)
{
	/* Variables */
	int number1;
	int number2;
	int averageOfnumber;
	printf("Enter the first number.\n"); /* Output */
	scanf("%d", &number1); /* Input */
	printf("Enter the second number.\n"); /* Output */
	scanf("%d,", &number2); /* Input */ 
	averageOfnumber = (number1 + number2) / 2; /* Calculation of the average of the number */
	printf("Average of number is = %d", averageOfnumber); /* Output */
	return 0;
}
