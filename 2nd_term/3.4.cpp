/*
	Solve the problem 3 with a C library function.
	Hint: strtok (string.h)
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	/* Strings */
	char string[64];
	/* Variables */
	int i, counter=0;
	char *token;
	
	printf("Enter a string = ");
	gets(string);
	token = strtok(string, " ");
	while(token != NULL)
	{
		token = strtok(NULL, " ");
		counter++;
	}
	printf("Number of words = %d", counter);
	return 0;
}
