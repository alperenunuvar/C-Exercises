/*
	Complete the program above to print the address and value of each element of array to the screen changing the pointer value. 
	Hint: Use assignment stmt. Or ++ operator.
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
		printf("var[%d]\t%d\t%p\n", i, *ptr, ptr);
		ptr++;
	}
	return 0;
}
