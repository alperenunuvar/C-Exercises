/*
	Write a C program that takes two strings from the keyboard, uses the function strcat to concatenate two strings and prints the concatenated string.
	Note: Use printf and scanf functions.
*/

#include <stdio.h>
#include <string.h>
#define SIZE 64

int main(void)
{
	/* Strings */
	char string1[SIZE];
	char string2[SIZE];
	
	printf("Enter first string = ");
	scanf("%s", &string1);
	printf("Enter second string = ");
	scanf("%s", &string2);
	strcat(string1, string2);
	printf("Yeni kelime = %s", string1);
	return 0;
}
