/*
	Write a C program writing integers and their 3rd powers from 1-10 into a text file, 
	and then display the content of the file on the screen.
	E.g.:
	1	1
	2	8
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	/* Variables */
	int i;
	int number=0;
	
	FILE *dosya1 = fopen("9.1.txt", "w");
	if(dosya1!=NULL)
	{
		printf("File created.");
		for(i=1;i<=10;i++)
		{
			number = pow(i,3);
			fprintf(dosya1, "%d\t%d\n", i, number);
		}	
	}
	else
	{
		printf("File cannot be created.");
	}
	fclose(dosya1);
	return 0;
}
