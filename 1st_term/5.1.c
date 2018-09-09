#include <stdio.h>

int main()
{
	/* Variable */
	int number;
	
	printf("Enter the number : ");
	scanf("%d", &number);
	if((number >= 10) && (number <= 50))
	{
		printf("\nNumber is valid.");
	}
	else
	{
		printf("\nNumber is invalid.");
	}
	return 0;
}