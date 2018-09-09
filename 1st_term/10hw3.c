/*
	Write a C program that reads characters from the keyboard into an array sized 2x2 and then prints it on the screen in a matrix format.
	Note: Remember to type a space before the %c sign in the scanf command to clean up the memory.
*/

/* Libraries */
#include <stdio.h>

int main()
{
	/* Arrays */
	int dm2Array[2][2];
	/* Variables */
	int i;
	int j;
	
	for(i = 0; i<2; i++)
	{
		for(j = 0; j<2; j++)
		{
			printf("Enter a character = ");
			scanf(" %c", &dm2Array[i][j]);
		}
	}
	printf("\n");
	for(i = 0; i<2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("dm2Array[%d][%d] = (%c)\n", i, j, dm2Array[i][j]);	
		}		
	}
	return 0;
}
