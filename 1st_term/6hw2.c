/*
	Write a C program that reads two integers from the keyboard, and creates another integer concatenating the switched rightmost two digits and prints the 
	result on the screen.
	Note: It has been assumed that integers have at least two digits.
	
	Sample Screen:
	Enter two integers: 234	7650
	New number: 4305
*/

#include <stdio.h>

int main()
{
	/* Variables */
	int number1;
	int number2;
	int newNumber1;
	int newNumber1_1;
	int newNumber1_2;
	int newNumber2;
	int newNumber2_1;
	int newNumber2_2;
	
	printf("Enter the first number : ");
	scanf("%d", &number1);
	printf("Enter the second number : ");
	scanf("%d", &number2);
	if((number1 >= 10) && (number2 >= 10))
	{
		newNumber1 = number1 % 100;
		newNumber1_1 = newNumber1 % 10;
		newNumber1_2 = (newNumber1 - newNumber1_1) / 10;
		newNumber2 = number2 % 100;
		newNumber2_1 = newNumber2 % 10;
		newNumber2_2 = (newNumber2 - newNumber2_1) / 10;
		printf("New Number = %d%d%d%d", newNumber1_1, newNumber1_2, newNumber2_1, newNumber2_2);	
	}
	else
	{
		printf("Numbers should be higher than 10.");
	}
	return 0;
}
