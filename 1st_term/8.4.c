/*
	Write a C program that reads two real numbers and an arithmetic operation choice as an integer from the menu as given below.
	Then calculates the result and prints it on the screen with two decimal points (%.2f). If finish is selected, the program stops.
	Note: Menu should be written once only before the loop.
	If user enters a wrong choice, give an error message.
	If subtraction is selected and the second number is 0, give a message such as "Division by 0 is invalid.".
*/
#include <stdio.h>

int main()
{
	/* Variables */
	float number1;
	float number2;
	float sum;
	int choice;
	
	do
	{
		printf("\n\nEnter 1st number: ");
		scanf("%f", &number1);
		printf("Enter 2nd number: ");
		scanf("%f", &number2);
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n5) Finish\nEnter an operation number: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				{
					sum = number1 + number2;
					printf("Result: %.2f", sum);
					break;
				}
			case 2:
				{
					sum = number1 - number2;
					printf("Result: %.2f", sum);
					break;
				}
			case 3:
				{
					sum = number1 * number2;
					printf("Result: %.2f", sum);
					break;
				}
			case 4:
				{
					if(number2 > 0)
					{
						sum = number1 / number2;
						printf("Result: %.2f", sum);
					}
					else
					{
						printf("Division by 0 is invalid.");
					}
					break;
				}
			case 5:
				{
					printf("The program has been finished.");
					break;
				}
			default:
				{
					printf("You can only select number between 1 to 5 (inclusive).");
				}
		}
	}
	while(choice != 5);
	return 0;
}
