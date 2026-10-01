#include <stdio.h> 

main() {
int i,n,toplam;
printf("Lütfen Pozitif Bir Tam Sayý Giriniz: ");
scanf("%d",&n);
toplam=0; 
i=1; 
while (i<=n) {
	toplam=toplam+i; 
    	i=i+1; 
}
printf("Toplam= %d\n",toplam);	
}

