/*
	Write a C program using switch command that reads a character from the screen to choose a shape and calculates the area of the shape. If this character is
	S or s, it means square is selected, else if it is C or c it means circle is selected, otherwise print an "invalid selection" message then program stops,
	otherwise
	
	a. Pi number 3.14159 should be defined with processor
	b. If square is selected, side length is entered as an integer, if this number is bigger than zero, area is calculated and printed on the screen;
	otherwise an error message is printed on the screen
	c. If circle is selected, radius is entered as an integer, if this number is bigger than zero, area is calculated and printed on the screen; otherwise
	an error message is printed on the screen
	d. Design meaningful screen outputs. If you are going to print a reel number, print it with two decimal points (%.2f)
	
	Note: Write the program step by step and test it gradually. First of all, decide about the variables and declare them. Then develop logic for the square,
	and then develop for the circle.
	
	Sample Screen:
	Enter a character for shape selection (S/s(Square) - C/c(Circle)):
*/

#include <stdio.h>
#define PI 3.14159

int main()
{
	/* Variables */
	float length;
	float areaOfcircle;
	float areaOfsquare;
	char selection;
	
	printf("Enter a character for shape selection (S/s(Square) - C/c(Circle)) : ");
	scanf(" %c", &selection);
	printf("Enter the length or radius : ");
	scanf("%f", &length);
	if(length > 0)
	{
		switch(selection)
		{
			case 'S':
			case 's':
				{
					areaOfsquare = length * length;
					printf("\nLength = %.2f\nArea of the Square = %.2f", length, areaOfsquare);
					break;
				}
			case 'C':
			case 'c':
				{
					areaOfcircle = PI * (length * length);
					printf("\nRadius = %.2f\nArea of the Circle = %.2f", length, areaOfcircle);
					break;
				}
			default:
				{
					printf("You can only select S/s for square or C/c for circle.");
				}
		}
	}
	else
	{
		printf("Entered number cannot be zero or negative.");
	}
	return 0;
}
