#include <stdio.h>

int main()
{
	/* Variable */
	int number;
	
	printf("Enter the number : ");
	scanf("%d", &number);
	if((number % 3 == 0) && (number % 5 == 0))
	{
		printf("\nNumber can be divided by 3 and 5.");
	}
	if((number % 3 == 0) && (number % 5 != 0))
	{
		printf("\nNumber can be divided by 3 only.");
	}
	if((number % 3 != 0) && (number % 5 == 0))
	{
		printf("\nNumber can be divided by 5 only.");
	}
	if((number % 3 != 0) && (number % 5 != 0))
	{
		printf("\nNumber can be divided by neither 3 nor 5.");
	}
}