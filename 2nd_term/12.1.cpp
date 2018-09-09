/*
	STRING SORULARI:
	Klavyeden okunan iki kelimeden birincinin ilk 2 harfi ile ikincinin son 3 harfini birleþtirip sonucu ekrana yazýn.	
*/

#include <stdio.h>

int main(void)
{
	/* Variables */
	char s1[64];
	char s2[64];
	char s3[64];
	int i;
	int s2_len=0;
	
	puts("Enter first word = ");
	gets(s1);
	puts("Enter second word = ");
	gets(s2);
	for(i=0;i<2;i++)
	{
		s3[i] = s1[i];
	}
	s2_len = 0;
	for(i=0;s2[i]!=NULL;i++)
	{
		s2_len++;
	}
	for(i=0;i<3;i++)
	{
		s3[2+i] = s2[s2_len-3+i];
	}
	s3[2+i+1] = NULL;
	printf("New word = ");
	puts(s3);
	return 0;
}
