struct apartBilgi
{
	int no;
	char isimSoyisim[32];	
};

int main() 
{
	struct apartBilgi apartman2;
	struct apartBilgi apartman;
	FILE *gelenler, *yoklar;
	int maxdeger = 0, i;
	
	gelenler = fopen("gelenler.bin", "wb");	
	do
	{
		printf("Apartman No: ");
		scanf("%d", &apartman.no);
		getchar();
		
		printf("Apartman Sakini AdýSoyadi: ");
		gets(apartman.isimSoyisim);
		
		if(apartman.no > maxdeger)
			maxdeger = apartman.no;
		
		fseek(gelenler, (sizeof(int) + sizeof(apartman.isimSoyisim)) * (apartman.no - 1), SEEK_SET);
		fwrite(&apartman.no, sizeof(int), 1, gelenler);
		fwrite(apartman.isimSoyisim, sizeof(apartman.isimSoyisim), 1, gelenler);
	} while(apartman.no > 0);
	fclose(gelenler);	
	
	gelenler = fopen("gelenler.bin", "rb");
	yoklar = fopen("yoklar.txt", "w");
	for(i = 1; i <= maxdeger; i++)
	{
		fseek(gelenler, (sizeof(int) + sizeof(apartman2.isimSoyisim)) * (i - 1), SEEK_SET);
		fread(&apartman2.no, sizeof(int), 1, gelenler);
		fread(apartman2.isimSoyisim, sizeof(apartman2.isimSoyisim), 1, gelenler);
		
		if(apartman2.no == 0)
		{
			fprintf(yoklar, "(%d)\n", i);
		}
	}
	fclose(gelenler);
	fclose(yoklar);
	
	char c;
	yoklar = fopen("yoklar.txt", "r");
	while((c = getc(yoklar)) != EOF)
		putchar(c);
	fclose(yoklar);
	
	return 0;
