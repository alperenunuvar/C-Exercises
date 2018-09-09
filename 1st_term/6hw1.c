/*
	Write a C program that reads 3 integers from the keyboard and prints them in ascending order.
	Note: You may use > character for readability.
	Enter 3 integers : 7 5 6
	5 > 6 > 7
*/

#include <stdio.h>

int main()
{
	/* Variables */
	int number1;
	int number2;
	int number3;
	
	printf("Enter the first number : ");
	scanf("%d", &number1);
	printf("Enter the second number : ");
	scanf("%d", &number2);
	printf("Enter the third number : ");
	scanf("%d", &number3);
	if((number1 > number2) && (number2 > number3)) // number1 > number2 > number3
	{
		printf("%d > %d > %d", number1, number2, number3);
	}
	if((number1 > number3) && (number3 > number2)) // number1 > number3 > number2
	{
		printf("%d > %d > %d", number1, number3, number2);
	}
	if((number2 > number1) && (number1 > number3)) // number2 > number1 > number3
	{
		printf("%d > %d > %d", number2, number1, number3);
	}
	if((number2 > number3) && (number3 > number1)) // number2 > number3 > number1
	{
		printf("%d > %d > %d", number2, number3, number1);
	}
	if((number3 > number1) && (number1 > number2)) // number3 > number1 > number2
	{
		printf("%d > %d > %d", number3, number1, number2);
	}
	if((number3 > number2) && (number2 > number1)) // number3 > number2 > number1
	{
		printf("%d > %d > %d", number3, number2, number1);
	}
	return 0;
}
