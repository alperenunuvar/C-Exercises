/*
	Write a C program having a structure for hotel customers as given below.  
	According to this
	a.	Create a text file keeping two records as an array instance, getting the information from the keyboard. 
	You can observe the result opening the file with notepad.
	b.	Add logic to the program to list the content of the file.
	
	Note: If you use fgets while reading from the keyboard remember to use fflush(stdin); 
	before reading to clear the buffer. And remember fgets may insert '\n' character if data is shorter than the declaration of variable. 

	struct kayit{
      char name[30];
      char lastname[30];
      char phone[11];
      int numOfDays;
	};
*/
#include <stdio.h>

struct kayit{
      char name[30];
      char lastname[30];
      char phone[11];
      int numOfDays;
	};
	
int main(void)
{
	/* Variables */
	int i;
	
	struct kayit customer[2];
	for(i=0;i<2;i++)
	{
		printf("Enter %d. customer name = ", i+1);
		scanf("%s", &customer[i].name);
		printf("Enter %d. customer lastname = ", i+1);
		scanf("%s", &customer[i].lastname);
		printf("Enter %d. customer phone = ", i+1);
		scanf("%s", &customer[i].phone);
		printf("Enter %d. customer number of days = ", i+1);
		scanf("%d", &customer[i].numOfDays);
	}
	
	FILE *dosya1 = fopen("9.3.txt", "w");
	if(dosya1!=NULL)
	{
		for(i=0;i<2;i++)
		{
			fprintf(dosya1, "%d. Customer:\n", i+1);
			fprintf(dosya1, "%s\n", customer[i].name);			
			fprintf(dosya1, "%s\n", customer[i].lastname);			
			fprintf(dosya1, "%s\n", customer[i].phone);			
			fprintf(dosya1, "%d\n\n", customer[i].numOfDays);		
		}
		printf("File created.");
	}
	else
	{
		printf("File cannot be created.");
	}
	fclose(dosya1);
	return 0;
}
