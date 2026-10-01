#include <stdio.h>
#include <string.h>

int ebob(int a, int b){
	int temp;
	
	while(b!=0){
		temp= a%b;
		a=b;
		b=temp;
	}
	return a;
}
	
void aralarindaAsal(int a, int b){
	int sonuc= ebob(a,b);
	if(sonuc==1)
	printf("Aralarinda asal");
	else
	printf("Aralarinda asal degil");
}
int main() {
	int x,y;
	
	printf("2 sayi giriniz: ");
	scanf("%d %d", &x, &y);
	
	aralarindaAsal(x,y);
	
	return 0;
}
