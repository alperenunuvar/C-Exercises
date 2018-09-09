/*
	Solve the problem 2 using a C library function.
*/

#include <stdio.h>
#include <string.h>

#define SIZE 64

int main(void)
{
	/* Strings */
	char string1[SIZE];
	char string2[SIZE];
	/* Variables */
	int i;
	
	printf("Enter a string = ");
	gets(string1);
	printf("Enter a string = ");
	gets(string2);
	if(!strcmp(string1, string2))
	{
		printf("Same.");
	}
	else
	{
		printf("Not same.");
	}
	return 0;
}
