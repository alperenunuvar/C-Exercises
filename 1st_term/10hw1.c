/*
	Using the array defined on the 5th question, find sum of the elements which has even index number and print the result on the screen. (Total: 126)
*/

/* Libraries */
#include <stdio.h>

int main()
{
	/* Arrays */
	int numbers[6] = { 30, 12, 51, 17, 45, 62};
	/* Variables */
	int i;
	int sum;
	
	sum = 0;
	for(i = 0; i < 6; i++)
	{
		sum = sum + numbers[i % 2 == 0];
	}
	printf("Sum of the elements which has even index number = %d", sum);
	return 0;
}
