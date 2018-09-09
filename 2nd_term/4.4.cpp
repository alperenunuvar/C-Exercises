/*
	Write a C program that takes a sentence from the keyboard, and then finds the average length of words in it.
	Note: You may use C library function to seperate a word and the length of it.
*/

#include <stdio.h>
#include <string.h>
#define SIZE 64

int main(void)
{
	/* Strings */
	char string1[SIZE];
	/* Variables */
	char *token;
	int wordCounter=0;
	int numberOfchar=0;
	int total=0;
	
	printf("Enter a string = ");
	gets(string1);
	numberOfchar = strlen(string1);
	token = strtok(string1, " ");	
	while(token!=NULL)
	{
		wordCounter++;
		token = strtok(NULL," ");
	}
	total = numberOfchar / wordCounter;
	printf("Number of chars = %d\n", numberOfchar-(wordCounter-1));
	printf("Number of words = %d\n", wordCounter);
	printf("Average Length = %d", total);
	return 0;
}
