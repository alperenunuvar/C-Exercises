#include <stdio.h>

int main()
{
	/* Variable */
	char grade;
	
	printf("Enter the grade : ");
	scanf(" %c", &grade);
	
	if((grade == 'A') || (grade == 'B') || (grade == 'C'))
	{
		printf("\nStudent is succesful.");
	}
	else
	{
		printf("\nStudent is unsuccesful.");
	}
	return 0;
}