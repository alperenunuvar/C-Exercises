/*
	Add logic to question 3, the program for having selection logic. Such as:
	1.	Add a new record
	2.	List the file
	3.	Exit
  	Selection:
*/

#include <stdio.h>
#define CUSTOMER_NUMBER 64

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
	int selection;
	char c;
	
	struct kayit customer[CUSTOMER_NUMBER];
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
	
	FILE *dosya1 = fopen("9hw1.txt", "w");
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
	printf("\nMenu\n1. Add a new record\n2. List the file\n3. Exit\nSelection = ");
	scanf("%d", &selection);
	switch(selection)
	{
		case 1:
			{
				printf("How many customers want do you add = ");
				scanf("%d", &i);
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
				dosya1 = fopen("9hw1.txt", "a");
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
					printf("Customer added.");
					fclose(dosya1);
				}
				else
				{
					printf("Customer cannot added.");
				}
				break;
			}
		case 2:
			{
				dosya1 = fopen("9hw1.txt", "r");				
				while((c = getc(dosya1)) != EOF)
				putchar(c);
				fclose(dosya1);
       			break;
			}
		case 3:
			{
				
				break;
			}
	}
	return 0;
}
