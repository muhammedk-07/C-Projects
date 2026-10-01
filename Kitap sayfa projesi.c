#include <stdio.h>
#include <stdlib.h>


int main() {
	char kitap[40];
	int sayfa;
	puts("Kitabin adini giriniz: ");
	gets(kitap);
	puts("Sayfa sayisini giriniz: ");
	scanf("%d",&sayfa);
	printf("'%s'adli kitap %d sayfadan olusuyor.\n",kitap,sayfa);
	return 0;
}
