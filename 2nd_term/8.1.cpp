/* 
	Write a C program having a structure for food information including food code, food name and food price.
	Program reads two food codes from the keyboard (use two structure instances).
	If the first food code is 100, it sets first food's name to Lemon and price to 8, otherwise it sets name to Apple and price to 5.
	Then compares both codes, if they are same, it copies name and price of the first food to the second one, otherwise it sets second food's name to Banana and price to 6.
	Finally, it prints all the information to the screen.
*/

#include <stdio.h>
#include <string.h>

/* Structures */
struct food
{
	int foodCode;
	char foodName[64];
	int foodPrice;
}food1,food2;

int main(void)
{
	printf("Enter first food code = ");
	scanf("%d", &food1.foodCode);
	printf("Enter second food code = ");
	scanf("%d", &food2.foodCode);
	if(food1.foodCode == 100)
	{
		strcpy(food1.foodName, "Lemon");
		food1.foodPrice = 8;
	}
	else
	{
		strcpy(food1.foodName, "Apple");
		food1.foodPrice = 5;
	}
	if(food1.foodCode == food2.foodCode)
	{
		strcpy(food2.foodName, food1.foodName);
		food2.foodPrice = food1.foodPrice;
	}
	else
	{
		strcpy(food2.foodName, "Banana");
		food2.foodPrice = 6;
	}
	printf("Food Code\tFood Name\tFood Price\n");
	printf("%d\t\t%s\t\t%d\n",food1.foodCode, food1.foodName, food1.foodPrice);
	printf("%d\t\t%s\t\t%d",food2.foodCode, food2.foodName, food2.foodPrice);
}
