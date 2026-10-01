#include <stdio.h>
#include <stdlib.h>



int main() {
	int maas;
	float oran;
	puts("Mevcut maasinizi giriniz: ");
	scanf("%d",&maas);
	puts("Zam oranini giriniz(ornegin 0.15): ");
	scanf("%f",&oran);
	float yeniMaas= maas+(maas*oran/100);
	printf("Yeni maasiniz: %.2f TL\n",yeniMaas);
	
	
	return 0;
}
