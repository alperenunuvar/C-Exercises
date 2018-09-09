/*
	Use the program written for problem 4, print each word in a string on seperate lines.
	For Example:
	Enter a string: Istanbul Buyuksehir Belediyesi
	Istanbul
	Buyuksehir
	Belediyesi
*/

#include <stdio.h>
#include <string.h>
#define SIZE 64
int main(void)
{
	/* Strings */
	char string[SIZE];
	/* Variables */
	int i;
	char *token;
	
	printf("Enter a string = ");
	gets(string);
	token = strtok(string," ");
	while(token!=NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return 0;
}
