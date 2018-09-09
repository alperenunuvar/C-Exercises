/*
	Klavyeden girilen bir cümlede sonu k harfiyle biten kaç adet kelime olduðunu sayýp, sonucu ekrana yazýn.
*/

#include <stdio.h>

int main(void)
{
	/* Variables */
	char str1[64];
	int i;
	int counter=0;
	int str1_len=0;
	
	printf("Enter a sentence = ");
	gets(str1);
	for(i=0;str1[i]!=NULL;i++)
	{
		str1_len++;
	}
	for(i=0;str1[i]!=NULL;i++)
	{
		if((str1[i+1] == ' ') || (str1[i+1] == NULL))
		{
			if((str1[i] == 'k') || (str1[i] == 'K'))
			{
				counter++;
			}
		}
	}
	printf("There are %d words which end K.", counter);
	return 0;
}
