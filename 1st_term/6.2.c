/*
	Using the program written in queston 1, in addition to the price value, you are asked to read the day of the week from the keyboard (you may code it with
	integers such as Monday-1, Tuesday-2, etc.). And apply additional discount according to the table given below and print the total discount and discounted price
	on the screen.
	
	[Day of the week][Discount]
	Monday-Wednesday	10%
	Thursday			5%
	otherwise			No extra discount
	
	Note: Use switch to test the day of the weeek. Remember to group the conditions for simple logic.
*/
#include <stdio.h>

int main()
{
	/* Variables */
	int price;
	int totalPrice;
	int totalPrice2;
	int selectedDay;
	
	printf("Enter the price : ");
	scanf("%d", &price);
	printf("Enter the day (1-2-3-4-5-6-7) : ");
	scanf("%d", &selectedDay);
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
		switch(selectedDay)
		{
			case 1:
			case 2:
			case 3:
				{
					if(selectedDay == 1) { printf("\nSelected Day = Monday");	}
					if(selectedDay == 2) { printf("\nSelected Day = Tuesday");	}
					if(selectedDay == 3) { printf("\nSelected Day = Wednesday");	}
					totalPrice2 = totalPrice - (( totalPrice * 10) / 100);
					printf("\nDiscount2 = %%10\nTotal Price = %d", totalPrice2);
					break;
				}			
			case 4:
				{
					printf("\nSelected Day = Thursday");
					totalPrice2 = totalPrice - ((totalPrice * 5) / 100);
					printf("\nDiscount2 = %%5\nTotal Price = %d", totalPrice2);
					break;
				}
			case 5:
			case 6:
			case 7:
				{
					printf("\nSelected Day = One of Friday, Saturday or Sunday");
					printf("\nDiscount2 = %%0\nTotal Price = %d", totalPrice);
					break;
				}
			default:
				{
					printf("\n\nSecond discount calculation cannot be calculate.\nYou can only enter number between 1 - 7.");
				}
		}
	}
	return 0;
}
