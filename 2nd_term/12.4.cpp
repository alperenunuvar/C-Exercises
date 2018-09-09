/*
	Klavyeden girilen bir stringin indisi tek olan karakterlerini ekrana yazın.
	
	Merhaba CEN134.
	Ekran:
	ehb E14
*/

#include <stdio.h>

int main(void)
{
	/* Variables */
	char str1[64];
	int i;
	
	printf("Enter a string = ");
	gets(str1);
	for(i=0;str1[i]!=NULL;i++)
	{
		if(i%2!=0)
		{
			printf("%c", str1[i]);
		}
	}
	return 0;
}
