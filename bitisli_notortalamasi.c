#include <stdio.h>
int main()
{
	float ortalama; 
	int sayac, notlar, toplam; 	
	
  
   	toplam = 0;
   	sayac = 0;


	printf( "Bitirmek icin notu -1 giriniz " );
  	scanf( "%d", &notlar );
  	while ( notlar != -1 ) {
		toplam = toplam + notlar;
		sayac = sayac + 1; 
		printf( "Bitirmek icin notu -1 giriniz  " );
		scanf( "%d", &notlar );
	}


	if( sayac != 0 ) {
		ortalama = ( float ) toplam / sayac;
		printf( "Sinifin Ortalamasi %.2f", ortalama );
	} else
	   printf( "Hic bir not girilmedi\n" );

  	return 0;}

