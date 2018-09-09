/*
	Define an integer variable x and integer pointer p in the main function. p will point to x. Assign 10 to x.
	a) Print the address of x to the screen.
	b) Print the value of x to the screen.
	c) Print the address of p to the screen.
	d) Print the content of p to the screen.
	e) Print the value (pointed to) pointed by p to the screen.
*/

#include <stdio.h>

int main(void)
{
	/* Variables */
	int x;
	int *p;
	x = 10;
	p = &x;
	
	printf("the Address of x = %p\n", &x);//A
	printf("the Value of x = %d\n", x);//B
	printf("the Address of p = %p\n", &p);//C
	printf("the Content of p = %d\n", p);//D
	printf("the Value (pointed to) pointed by p = %d", *p);//E
	return 0;
}
