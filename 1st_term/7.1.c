/*
	Write a C program that reads a character from the keyboard and prints this character ten times on a line using for statement.
	Note: Print one character at a time.
	**********
*/

#include <stdio.h>

int main()
{
	/* Variable */
	char character;
	int i;
	
	printf("Enter a character: ");
	scanf(" %c", &character);
	for(i = 0; i < 10; i++)
	{
		printf(" %c", character);
	}
	return 0;
}
