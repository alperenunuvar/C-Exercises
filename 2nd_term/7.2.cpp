/*
	Write a C program having a structure as given below. Enter id_num and name from the keyboard.
	Assign gender as E and age 20. Then, print all the information to the screen.
*/

#include <stdio.h>
#include <string.h>

/* Structures */
struct student
{
	char id_num[6];
	char name[11];
	char gender;
	int age;
}student1;

int main(void)
{
	printf("Enter a name = ");
	scanf("%s", &student1.name);
	printf("Enter a number = ");
	scanf("%s", &student1.id_num);
	student1.gender = 'E';
	student1.age = 20;
	printf("\nID Number = %s\n", student1.id_num);
	printf("Name = %s\n", student1.name);
	printf("Gender = %c\n",student1.gender);
	printf("Age = %d", student1.age);
	return 0;
}
