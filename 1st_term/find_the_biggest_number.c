#include <stdio.h>

int main(void)
{
	/* Variables */
	int number1;
	int number2;
	int number3;
	printf("Enter the 1st number.\n"); /* Output */
	scanf("%d", &number1); /* Input */
	printf("Enter the 2nd number.\n"); /* Output */
	scanf("%d", &number2); /* Input */
	printf("Enter the 3rd number.\n"); /* Output */
	scanf("%d", &number3); /* Input */
	if((number1 > number2) && (number1 > number3)) /* Comparing the numbers */
	{
		printf("The biggest number is : %d", number1); /* Output */
	}
	if((number2 > number1) && (number2 > number3)) /* Comparing the numbers */
	{
		printf("The biggest number is : %d", number2); /* Output */
	}
	if((number3 > number1) && (number3 > number2)) /* Comparing the numbers */
	{
		printf("The biggest number is : %d", number3); /* Output */
	}
	return 0;
}
