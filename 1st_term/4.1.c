#include <stdio.h>

int main()
{
	/* Variables */
	int grade1;
	int grade2;
	int grade3;
	float actualGrade;
	char name;
	char surname;
	
	printf("Enter the initial of name : ");
	scanf(" %c", &name);
	printf("\nEnter the initial of surname : ");
	scanf(" %c", &surname);
	printf("\nEnter the grade of the 1st exam : ");
	scanf("%d", &grade1);
	printf("\nEnter the grade of the 2nd exam : ");
	scanf("%d", &grade2);
	printf("\nEnter the grade of the 3rd exam : ");
	scanf("%d", &grade3);
	
	actualGrade = ((grade1 * 30) / 100) + ((grade2 * 30) / 100) + ((grade3 * 40) / 100);

	printf("\n\nFirst and Last Name Initials : %c%c", name, surname);
	printf("\n3 exam grades are : %d %d %d", grade1, grade2, grade3);
	printf("\n%c. %c. actual grades : %.2f", name, surname, actualGrade);
	return 0;
}
