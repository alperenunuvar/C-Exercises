/*
	Aþaðýdaki yapýda bir öðrencinin bilgilerini girin, 
	basari notunu vizelere sýrayla %25,%35,%40 oranýnda uygulayarak hesaplayýp bir dosyaya yazýn. 
	Daha sonra dosyanýn içeriðini okuyup ekrana yazdýrýn.
	
	typedef struct {
    char ogrNo[12];
    char ad[20];
    int not[3];
    int basari;
    } ogrBilgi;
*/

#include <stdio.h>

typedef struct {
    char ogrNo[12];
    char ad[20];
    int notlar[3];
    int basari;
    }ogrBilgi;

int main(void)
{
	/* Variables */
	int i;
	
	//Öðrenci Bilgi Ekleme
	ogrBilgi ogrenci1;
	printf("Enter student number = ");
	scanf("%s", &ogrenci1.ogrNo);
	printf("Enter student name = ");
	scanf("%s", &ogrenci1.ad);
	for(i=0;i<3;i++)
	{
		printf("Enter %d. grade = ", i+1);
		scanf("%d", &ogrenci1.notlar[i]);
	}
	ogrenci1.basari = (ogrenci1.notlar[0] * 25) / 100 + (ogrenci1.notlar[1] * 35) / 100 + (ogrenci1.notlar[2] * 40) / 100;
	
	//Dosyaya Yazma
	FILE *dosya1 = fopen("ogrenci_bilgileri.txt", "w");
	if(dosya1!=NULL)
	{
		fprintf(dosya1, "%s\n", ogrenci1.ogrNo);
		fprintf(dosya1, "%s\n", ogrenci1.ad);
		fprintf(dosya1, "%d %d %d\n", ogrenci1.notlar[0], ogrenci1.notlar[1], ogrenci1.notlar[2]);
		fprintf(dosya1, "%d", ogrenci1.basari);
		printf("\n(!)Informations are wroted to text file.");
	}
	else
	{
		printf("File can not be created.");
	}
	fclose(dosya1);
	
	//Dosyadan Okuma
	ogrBilgi ogrenci2;
	dosya1 = fopen("ogrenci_bilgileri.txt", "r");
	if(dosya1!=NULL)
	{
		fscanf(dosya1, "%s", &ogrenci2.ogrNo);
		fscanf(dosya1, "%s", &ogrenci2.ad);
		fscanf(dosya1, "%d %d %d", &ogrenci2.notlar[0], &ogrenci2.notlar[1], &ogrenci2.notlar[2]);
		fscanf(dosya1, "%d", &ogrenci2.basari);		
		//Dosyadan Ekrana Yazdýrma
		printf("\n\nStudent Number = %s", ogrenci2.ogrNo);
		printf("\nStudent Name = %s", ogrenci2.ad);
		printf("\nStudent Name = %d %d %d", ogrenci2.notlar[0], ogrenci2.notlar[1], ogrenci2.notlar[2]);
		printf("\nStudent Total Grade = %d", ogrenci2.basari);
		fclose(dosya1);
	}
	else
	{
		printf("File can not be read.");
	}
	return 0;
}
