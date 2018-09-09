#include <stdio.h>

int main(void)
{
	/* Variables */
	int length1;
	int length2;
	int area;
	printf("Enter the 1st length of the rectangle.\n"); /* Output */
	scanf("%d", &length1); /* Input */
	printf("Enter the 2nd length of the rectangle.\n"); /* Output */
	scanf("%d", &length2); /* Input */
	area = length1 * length2; /* Calculation of the Area */
	printf("The area of the rectangle is : %d", area); /* Output */
	return 0;
}
