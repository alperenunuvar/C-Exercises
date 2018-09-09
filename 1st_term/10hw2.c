/*
	Write a C program that has a function which defines an array named graphic with 10 elements, assigns the values 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 to each 
	element in a sequence, then prints the same amount of stars as each element value in a loop on the screen.
	Hint: Use nested loop.
*/

/* Libraries */
#include <stdio.h>

/* Prototypes */
void function();

int main(void)
{
	function();
	return 0;
}

void function()
{
	/* Arrays */
	int numbersOfstars[10] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
	/* Variables */
	int i;
	int j;
	
	printf("Element\tValue\tHistogram\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d\t%d\t", i, numbersOfstars[i]);
		for(j = 0; j < numbersOfstars[i]; j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}
}
