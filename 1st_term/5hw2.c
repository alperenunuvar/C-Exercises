#include <stdio.h>

int main()
{
	/* Variable */
	int age;
	
	printf("Enter the age : ");
	scanf("%d", &age);
	if(age <= 0)
	{
		printf("\nError.\nThe age %d is invalid.", age);
	}
	else
	{
		printf("\nThe age %d is valid.", age);
	}
	return 0;
}