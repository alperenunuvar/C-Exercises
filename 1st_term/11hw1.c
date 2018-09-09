/*
	Write a C program having a function that reads 5 reel numbers from the keyboard into an array named price.
	Then assigns 0.18 times each element of price into each element of another array called kdv.
	Then writes both arrays to the screen.
	Note: Your output should be meaningful.
*/	

/* Libraries */
#include <stdio.h>

/* Defines */
#define KDV 0.18

/* Prototypes */
void function();

int main()
{
	function();
	return 0;
}

void function()
{
	/* Arrays */
	float price[5];
	float kdv[5];
	
	/* Variables */
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("Enter %d. price = ", i+1);
		scanf("%f", &price[i]);
		kdv[i] = price[i] + KDV;
	}
	printf("\nPrice\tPrice + KDV\n");
	for(i=0; i<5; i++)
	{		
		printf("%.2f\t%.2f\n", price[i], kdv[i]);
	}
}
