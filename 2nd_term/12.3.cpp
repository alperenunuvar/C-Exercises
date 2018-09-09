/*
	Klavyeden girilen bir kelimenin palindrome olup olmadýðýný ekrana yazýn. 
	
	Palindrome: tersten okunuþu ayný. Örnek: KABAK, MUM, 12321.
*/

#include <stdio.h>

int main(void)
{
	/* Variables */
	char str1[64];
	int str1_len=0;
	int i;
	int j;
	
	printf("Enter a word = ");
	gets(str1);
	for(i=0;str1[i]!=NULL;i++)
	{
		str1_len++;
	}
	for(i=0,j=str1_len-1;i!=j;i++,j--)
	{
		if(str1[i]!=str1[j])
		{
			printf("%s is not palindrome.", str1);
			return 0;
		}			
	}
	printf("%s is palindrome.", str1);
}
