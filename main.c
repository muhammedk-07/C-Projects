#include <stdio.h>
#include <stdlib.h>

�dan geriye do�ru gelecek �ekilde tasarlanan ya� //

int main() {
	int x,sayac;
	printf("Bir sayi giriniz: ");
	scanf("%d",&x);
	while(x>=0){
		printf("%d\n",x);
		x=x-1;
	}
	
	return 0;
}

