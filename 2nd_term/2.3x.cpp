/*
	Complete the following program to print the address and value of each element of array in reverse order to the screen changing the pointer value.
	
	#include <stdio.h>
	int main(){
	int var[] = {10,100,200};
	int i, *ptr;
	// let us have array address in pointer
	ptr = &var[MAX-1];
*/

#include <stdio.h>

#define MAX 3

int main()
{
	/* Arrays */
	int var[] = {10,100,200};
	/* Variables */
	int i, *ptr;
	ptr = &var[MAX-1];
	
	printf("Array\tValue\tAddress\n");
	for(i=0;i<MAX;i++)
	{
		
	}
	return 0;	
}
