#include <stdio.h>

int main()
{
	/* Variables */
	int x = 2;
	int y = 15;
	double z;
	
	printf("%d\n", 7/2);
	printf("%f\n", 7.0/2);
	printf("%f\n",(double)7/2);	
	
	z = y / x;
	
	printf("%f\n",z);
	z = (double) y / x;
	printf("%f\n", z);
	printf("%f\n", x*2.2);
	return 0;
}