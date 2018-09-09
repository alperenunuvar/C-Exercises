/*
	Write a C program that takes a string including a few words from the user using getchar function (character by character), and then prints that on the screen.
*/

#include <stdio.h>

int main(void)
{
	char c;
	do
	{
		c = getchar();
		printf("%c",c);
	}
	while(c!=NULL);
	return 0;
}
