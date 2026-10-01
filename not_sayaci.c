#include <stdio.h>

int main()
{
	int sayac, ortalama, toplam, notlar;

	
	toplam = 0;
	sayac = 1;

	
	while ( sayac <= 10 ) {
		printf("Notu Girin: " );
		scanf( "%d", &notlar );
		toplam = toplam + notlar;
		sayac = sayac + 1; 
    	}
	
	
	ortalama = toplam / 10.0;
	printf( "Sinif Ortalamasi %d\n", ortalama ); 

	return 0;
}

