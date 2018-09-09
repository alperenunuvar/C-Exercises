/*
	Write a C program that reads 5 characters from the keyboard into an array and then counts the vowels (A,E,I,O,U) within the array and prints this value on the
	screen.
	Note: Remember to type a space before the %c sign in the scanf command to clean up the memory.
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int range;
	int counter;
	/* Arrays */
	char chars[5];
	
	counter = 0;
	for(range = 0; range < 5; range++)
	{
		printf("%d. Enter a character = ", range+1);
		scanf(" %c", &chars[range]);
		switch(chars[range])
		{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				{
					counter = counter + 1;
					break;
				}
		}
	}
	printf("\nCharacters you have entered = ");	
	for(range = 0; range < 5; range++)
	{
		printf("(%c)", chars[range]);
	}
	printf("\nYou have entered %d vowels characters.", counter);
	return 0;
}
