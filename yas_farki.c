#include <stdio.h>
#include <stdlib.h>


int main() {
	int yas1,yas2,yasfarki;
	puts("Kendi yasinizi giriniz: ");
	scanf("%d",&yas1);
	puts("Kardesinizin yasini giriniz: ");
	scanf("%d",&yas2);
	
	
	if (yas1>yas2){
	printf("Siz kardesinizden buyuksunuz\n");
	printf("Yas farki=%d",yasfarki=yas1-yas2);}
	
	else if (yas1==yas2){
	yasfarki=0;
	printf("Siz kardesinizle ayni yastasiniz\n");
	printf("Yas farki=%d",yasfarki);}
	
	else{
	
	printf("Kardesiniz sizden buyuk");
	printf("Yas farki=%d",yasfarki=yas2-yas1);
	}
	return 0;

}
