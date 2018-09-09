/*
	Write a C program that assigns 3 to the power of six number from 5 to 10 into an array using a C libraray function and then prints the array on the screen.
	Hint: Declare array type as real. Remember 'pow(base, power)' function, you also need to include math.h header file.
*/
#include <stdio.h>
#include <math.h>

int main()
{
	/* Variables */
	int counter;
	/* Arrays */
	int numbers[6];
	
	for(counter = 5; counter < 11; counter++)
	{
		numbers[counter-5] = pow(counter, 3);
		printf("numbers[%d] = %d\n", counter-5, numbers[counter-5]);
	}
	return 0;
}
