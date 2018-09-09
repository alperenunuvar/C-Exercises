#include <stdio.h>

int main(void)
{
	/* Variables */
	int number;
	int sum;
	/* Calculation of the sum of the numbers from 1 to 100 */
	for(number=1;number<=100;number++)
	{
		sum = sum + number;
	}
	printf("The sum of the integers from 1 to 100 is : %d", sum); /* Output */
	return 0;
}
