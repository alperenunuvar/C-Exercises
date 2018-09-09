/*
	Write a C program that takes two strings from the user, compares them without using a C library function and prints the result as if they are same or not.
*/

#include <stdio.h>
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
	for(i=0;(string1[i]!='\0')&&(string2[i]!='\0');i++)
	{
		if(string1[i]!=string2[i])
		{				
			return printf("Not same."); 
		}		
	}
	printf("Same.");
	return 0;
}
