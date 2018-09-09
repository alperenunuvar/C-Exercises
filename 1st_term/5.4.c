#include <stdio.h>

int main()
{
	/* Variables */
	int number;
	int digit1;
	int digit10;
	int digit100;
	int digit1000;
	
	printf("Enter a 4-digit number : ");
	scanf("%d", &number);	
	
	digit1 = ((number % 1000) % 100) % 10; // Calculation of the 1st digit place
	digit10 = ((number % 1000) % 100) / 10; // Calculation of the 2nd digit place
	digit100 = (number % 1000) / 100; // Calculation of the 3rd digit place
	digit1000 = number / 1000; // Calculation of the 4th digit place
	
	printf("%d\t%d\t%d\t%d", digit1, digit10, digit100, digit1000);	
	return 0;
}