/*
	Write a C program reading five different words from the keyboard, 
	and writing these into a text file, and then display the content of the file on the screen. 
*/

#include <stdio.h>

int main(void)
{
	/* Variables */
	char str[5][64];	
	int i;
	int j;
	
	FILE *dosya1 = fopen("9.2.txt", "w");
	if(dosya1!=NULL)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<1;j++)
			{
				printf("Enter %d. string = ", i+1);
				gets(str[i]);
				fprintf(dosya1, "%s\t", str[i]);
			}		
		}
		printf("File created.");
	}
	else
	{
		printf("File cannot be created.");
	}
	
	return 0;
}
