/*
	Write a C program that defines an array named A with 6 elements, assigns the values 3,2,5,7,4 and 6 to each element in sequence; then defines another array
	named B the same size as A and copy each element value of A to B and prints both arrays on the screen using a loop.
*/

#include <stdio.h>

int main()
{
	/* Variables */
	int counter;
	/* Arrays */
	int A[6] = { 3, 2, 5, 7, 4, 6 };
	int B[6];
	
	for(counter = 0; counter < 6; counter++)
	{
		B[counter] = A[counter];
		printf("B[%d] = %d | A[%d] = %d\n", counter, B[counter], counter, A[counter]);
	}
	return 0;
}
