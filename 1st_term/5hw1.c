#include <stdio.h>

int main()
{
	/* Variables */
	int number1;
	int number2;
	int number3;
	
	printf("Enter the 1st number : ");
	scanf("%d", &number1);
	printf("\nEnter the 2nd number : ");
	scanf("%d", &number2);
	printf("\nEnter the 3rd number : ");
	scanf("%d", &number3);
	
	if((number1 > number2) && (number1 > number3)) /* If 'number1' is the biggest number */
	{
		printf("\n\nThe biggest number : %d", number1);
		if(number2 > number3) /* If 'number3' is the smallest number */
		{
			printf("\nThe smallest number : %d", number3);
		}
		if(number3 > number2) /* If 'number2' is the smallest number */
		{
			printf("\nThe smallest number : %d", number2);
		}
	}	
	if((number2 > number1) && (number2 > number3)) /* If number2 is the biggest number */
	{
		printf("\n\nThe biggest number : %d", number2);
		if(number1 > number3) /* If 'number3' is the smallest number */
		{
			printf("\nThe smallest number : %d", number3);
		}
		if(number3 > number1) /* If 'number1' is the smallest number */
		{
			printf("\nThe smallest number : %d", number1);
		}	
	}	
	if((number3 > number1) && (number3 > number2)) /* If number3 is the biggest number */
	{
		printf("\n\nThe biggest number : %d", number3);
		if(number1 > number2) /* If 'number2' is the smallest number */
		{
			printf("\nThe smallest number : %d", number2);
		}
		if(number2 > number1) /* If 'number1' is the smallest number */
		{
			printf("\nThe smallest number : %d", number1);
		}	
	}
	return 0;
}