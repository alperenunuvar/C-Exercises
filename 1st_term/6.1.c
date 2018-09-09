/*
	Write a C program that reads price of a merchandise and calculates the discount according to the table given below and prints the discount and discounted 
	price on the screen.
	
	Note: Price cannot be 0 or negative, if it is the case print an error message on the screen.
	
	[Price(TL)][Discount]
	>300		50%
	100-300		25%
	otherwise	No discount	
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int price;
	int totalPrice;
	
	printf("Enter the price : ");
	scanf("%d", &price);
	if(price <= 0)
	{
		printf("Price cannot be zero or negative.");
	}
	else
	{
		if(price > 300)
		{
			totalPrice = price - ((price * 50) / 100);
			printf("\nPrice = %d\nDiscount = %%50\nDiscounted Price = %d", price, totalPrice);
		}
		if((price >= 100) && (price <= 300))
		{
			totalPrice = price - ((price * 25) / 100);
			printf("\nPrice = %d\nDiscount = %%25\nDiscounted Price = %d", price, totalPrice);
		}
		if(price < 100)
		{
			printf("\nPrice = %d\nDiscount = %%0\nDiscounted Price = %d", price, price);
		}
	}
	return 0;
}
