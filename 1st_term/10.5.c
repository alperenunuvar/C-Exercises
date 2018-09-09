/*
	Write a C program that defines an array with 6 elements and assigns the values 30, 12, 51, 17, 45 and 62 to each element in a sequence (during declaration).
	Then calculates the total of the elements having odd value and prints the result on the screen.
	(Total = 113) 
*/

/* Libraries */
#include <stdio.h>

int main()
{
	/* Arrays */
	int numbers[6] = { 30, 12, 51, 17, 45, 62 };
	
	/* Variables */
	int sum;
	int i;
	
	printf("numbers[6] = ");
	for(i = 0; i < 6; i++)	
	{
		printf("(%d)", numbers[i]);
	}
	printf("\nOdd numbers are = ");
	for(i = 0; i < 6; i++)
	{
		if(numbers[i] % 2 != 0)
		{
			sum = sum + numbers[i];
			printf("(%d)", numbers[i]);
		}
	}
	printf("\nSum of the odd numbers = %d", sum);
	return 0;
}
