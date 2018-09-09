/*
	Write a C program that reads an integer and two reel numbers from the keyboard and sends these as argument to a function. In the function, it calculates the sum, average and smallest
	of the numbers and prints the results in the main function.
	Note: It is assumed that the numbers are not equal.
*/

#include <stdio.h>

void calculate(int a, float b, float c, float *sump, float *averagep, float *smallestp);

int main(void)
{
	/* Variables */
	int number1;
	float number2, number3, sum, average, smallest;
	
	printf("Enter first number = ");
	scanf("%d", &number1);
	printf("Enter second number = ");
	scanf("%f", &number2);
	printf("Enter third number = ");
	scanf("%f", &number3);
	calculate(number1, number2, number3, &sum, &average, &smallest);
	printf("Sum = %f\n", sum);
	printf("Average = %f\n", average);
	printf("Smallest = %f", smallest);
	return 0;
}

void calculate(int a, float b, float c, float *sump, float *averagep, float *smallestp)
{
	*sump = a + b + c;
	*averagep = *sump / 3;
	if((a<b)&&(a<c))
	{
		*smallestp = (float)a;
	}
	if((b<a)&&(b<c))
	{
		*smallestp = (float)b;
	}
	if((c<a)&&(c<b))
	{
		*smallestp = (float)c;
	}
}
