/*
	Solve the previous question using do while loop.
*/
#include <stdio.h>

int main()
{
	/* Variables*/
	int number;
	
	number = 20;
	do
	{
		printf("%d\n", number);
		number--;
	}
	while(number > 15);
}
