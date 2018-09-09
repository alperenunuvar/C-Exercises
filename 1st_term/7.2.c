/*
	Solve the previous question using while loop.
*/
#include <stdio.h>

int main()
{
	/* Variables */
	char character;
	int i;
			
	printf("Enter a character: ");
	scanf(" %c", &character);
	i = 0;
	while(i < 10)
	{
		printf(" %c", character);
		i++;
	}
	return 0;
}
