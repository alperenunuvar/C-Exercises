/*
	Complete the following program to print the address and value of each element of array to the screen without changing the pointer value.
	
	#include <stdio.h>
	int main(){
	int var[] = {10,100,200}
	int i, *ptr;
	// let us have arrray address in pointer
	ptr = var;
*/

#include <stdio.h>

int main(void)
{
	/* Arrays */
	int var[] = {10, 100, 200};
	/* Variables */
	int i, *ptr;
	ptr = var;
	
	printf("Array\tValue\tAddress\n");
	for(i=0;i<3;i++)
	{
		printf("var[%d]\t%d\t%p\n", i, *(ptr+i), (ptr+i));
	}
	return 0;
}
