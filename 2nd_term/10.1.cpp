/*
	Write a C program reading positive integers from the keyboard and stores them in a binary file in an ascending order(use fseek command), 
	data entry will stop when user enters 0 or a negative number. 
	Then program displays the content of the file on the screen. 
	Note: Enter a few small numbers such as less than 10, because you will be skipping empty records.
*/

#include <stdio.h>

int main(void)
{
	int x;
	int i=0;
	int maxNum=0;
	
	FILE *dosya1 = fopen("10.1.bin","wb");
	do
	{
		printf("%d. Enter a number = ",i+1);
		scanf("%d", &x);
		if(x>maxNum)
		{
			maxNum = x;
		}
		fseek(dosya1, (x-1)*sizeof(int), SEEK_SET);
		fwrite(&x, sizeof(int), 1, dosya1);
		i++;
	}
	while(x>0);
	fclose(dosya1);
	
	dosya1 = fopen("10.1.bin", "rb");
	for(i=1;i<=maxNum;i++)
	{
		fseek(dosya1, (i-1)*sizeof(int), SEEK_SET);
		fread(&x, sizeof(int), 1, dosya1);
		if(x!=0)
		{
			printf("(%d)\t", x);
		}		
	}
	fclose(dosya1);
	return 0;
}
