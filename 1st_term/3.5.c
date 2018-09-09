#include <stdio.h>

int main()
{
	/* Variables */
	char chr1;
	int number1;
	double number2;
	
	printf("Please enter the character : ");
	scanf(" %c", &chr1);
	printf("\nPlease enter the integer : ");
	scanf("%d", &number1);
	printf("\nPlease enter the reel number : ");
	scanf("%lf", &number2);
	printf("\n\n-You entered-\n*as a characher : %c\n*as an integer : %d\n*as a reel number : %lf", chr1, number1, number2);
	return 0;
}
