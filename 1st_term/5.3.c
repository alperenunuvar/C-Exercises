#include <stdio.h>

int main()
{
	/* Variables */
	int number;
	int sum;
	
	printf("Enter the number : ");
	scanf("%d", &number);
	if((number >= 0) && (number < 3))
	{
		sum = number + 2;
		printf("\nf(%d) = %d", number, sum);
	}
	if((number>=3) && (number < 8))
	{
		sum = (number * number) - (2 * number) + 2;
		printf("\nf(%d) = %d", number, sum);
	}
	return 0;
}