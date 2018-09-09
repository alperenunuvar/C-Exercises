#include <stdio.h>

int main(void)
{
	/* Variables */
	int number1;
	int number2;
	int number3;
	int number4;
	int sum;	
	printf("Enter the 1st number.\n"); /* Output */
	scanf("%d", &number1); /* Input */
	printf("Enter the 2nd number.\n"); /* Output */
	scanf("%d", &number2); /* Input */
	printf("Enter the 3rd number.\n"); /* Output */
	scanf("%d", &number3); /* Input */
	printf("Enter the 4th number.\n"); /* Output */
	scanf("%d", &number4); /* Input */
	sum = ((3 * number1 * number1) - (number1 * number4 * number2)) / (number3 - number2 * number2); /* Sum equals to the formula */
	printf("The formula is : \n(3.%d.%d) - (%d.%d.%d) / (%d-%d.%d)\n", number1, number1, number1, number4, number2, number3, number2, number2); /* Output */
	printf("Calculate of the formula is : %d", sum); /* Output */
	return 0;	
}
