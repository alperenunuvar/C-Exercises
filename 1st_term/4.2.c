#include <stdio.h>
#define PI 3.14159

int main()
{	
	/* Variables */
	float radius;
	float areaOfcircle;
	float areaOfsquare;
	float partsSquareCircle;
	
	printf("Enter the radius of the circle : ");
	scanf("%f", &radius);
	
	/* Calculations */	
	areaOfcircle = PI * radius * radius;
	areaOfsquare = (2 * radius) * (2 * radius);
	partsSquareCircle = areaOfsquare - areaOfcircle;
	
	printf("\nArea of the Circle : %.2f", areaOfcircle);
	printf("\nArea of the Square : %.2f", areaOfsquare);
	printf("\nthe Parts between Square and Circle : %.2f", partsSquareCircle);	
	return 0;
}
