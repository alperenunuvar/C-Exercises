/*
	Klavyeden girilen bir stringin indis de�eri 3'e tam b�l�nen karakterleri ekrana yaz�n.
	Merhaba CEN134.
	Ekran:
	MhaE3.
*/

#include <stdio.h>

int main(void)
{
	/* Variables */
	char str1[64];
	int i;
	
	printf("Enter a string = ");
	gets(str1);
	for(i=0;i<str1[i]!=NULL;i++)
	{
		if(i%3==0)
		{
			printf("%c", str1[i]);
		}
	}
	return 0;
}
