#include <stdio.h>

int main(void)
{
	/* Variables */
	int number;
	int sum;
	/* Calculation of the following formula */
	sum = 1;
	for(number=1;number<=101;number=number+4)
	{
		sum = sum * number;
	}
	printf("The calculate of the following formula (1*5*9*13*...*101) is : %d", sum); /* Output */
	return 0;
}
