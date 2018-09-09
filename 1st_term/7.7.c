/*
	Solve the previous question using a while loop. 
	Note: Remember to read before the while stmt. and read again before the closing block sign - } -, because of testing the value being read.
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int number;
	int sum;
	
	sum = 0;
	while(number != 0)
	{
		printf("Enter a number: ");
		scanf("%d", &number);
		sum = sum - number;
	}
	printf("The sum of the numbers: %d", sum);
	return 0;
}
