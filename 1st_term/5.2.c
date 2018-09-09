#include <stdio.h>

int main()
{
	char chr;
	printf("Enter the characher : ");
	scanf(" %c", &chr);
	if((chr >= 'A') && (chr <= 'z'))
	{
		printf("\nIt is a letter.");
	}
	if((chr >= '0') && (chr <= '9'))
	{
		printf("\nIt is a digit.");
	}
	return 0;
}