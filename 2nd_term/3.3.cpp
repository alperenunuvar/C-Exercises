/*
	Write a C program that reads a sentence from the keyboard then counts the words in it and prints the result to the screen. Space is the delimeter and it is assumed that only
	single space is used.
	Note: Do not use C library functions.
*/

#include <stdio.h>

int main(void)
{
	/* Strings */
	char string[64];
	/* Variables */
	int i, counter=1;
	
	printf("Enter a string = ");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i] == ' ')
		{
			counter++;
		}
	}
	printf("Number of words = %d", counter);
	return 0;
}
