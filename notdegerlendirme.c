#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n1,n2,n3;
	puts("Uc sinav notu giriniz: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	float ort = (float)(n1+n2+n3)/3;
	printf("Ortalamaniz: %.2f\n",ort);
	
	if (ort >= 85)
	puts("Pek iyi");
	else if (ort>=70)
	puts("Ýyi");
	else if (ort >=50)
	puts("Orta");
	else
	puts("Zayif");
	
	return 0;

}
