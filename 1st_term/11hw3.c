/*
	Write a C program that reads a character and a positive integer N from the keyboard and passes these as an argument to a function.
	Function prints one character at a time using a loop with the incoming character N times.
	Then the program will ask the user to continue or not. If the answer is Y or y, it will repeat the same process, otherwise it will stop.
	
	Note: Shape is given below. Test for one shape first then add to continue logic (do-while fits best) later.
		  Remember to add a space before '%c' to clean up the memory for characters.
		  This shape is just a sample; it can be drawn with any character and size.
*/

/* Libraries */
#include <stdio.h>

/* Prototypes */
void function(char chr, int n);

int main()
{
	/* Variables */
	char character;
	int number;
	char ctd;
	
	do
	{
		printf("Enter a character = ");
		scanf(" %c", &character);
		printf("Enter a number = ");
		scanf("%d", &number);
		printf("\n");
		function(character, number);
		printf("\n");
		printf("\nDo you want to do again? (Y/y or N/n)");
		scanf(" %c", &ctd);
	}
	while(ctd == 'Y' || ctd == 'y');
	printf("Program closed.");
	return 0;
}

void function(char chr, int n)
{
	/* Variables */
	int i;
	
	for(i=1; i<=n; i++)
	{
		printf("%c", chr);
	}
}
