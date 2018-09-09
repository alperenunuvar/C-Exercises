/*
	Write a C program that prints numbers from 3 to 15 (inclusive), five numbers will be printed on a line.
	A loop structure must be used.
	Note: Print one number at a time. You might use \t to line up numbers in a columns.
	Hint: You need to check a counter to control if 5 numbers has been printed or not.
	3	4	5	6	7
	8	9	10	11	12
	13	14	15
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int number;
	int counter;
	
	counter = 0;
	for(number = 3; number < 16; number++)
	{
		printf("%d\t", number);
		counter++;
		if(counter % 5 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}
