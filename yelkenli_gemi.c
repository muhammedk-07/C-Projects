#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n,yildiz,s,bosluk,k;
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
		bosluk=n-1;
	yildiz=1;
	      
		  for(k=0;k<n;k++){
	      	   for(s=0;s<bosluk;s++){
	      	   	  printf(" ");
				 }
				 
			    for(s=0;s<yildiz;s++){
			    printf("*");
				}
				printf("\n");
				yildiz=yildiz+2;
				bosluk+3;
				
	      	}
	      	 
	bosluk=1;
	yildiz=n-1;
	      
		  for(k=0;k<n;k++){
	      	   for(s=0;s<bosluk;s++){
	      	   	  printf(" ");
				 }
				 
			    for(s=0;s<yildiz;s++){
			    printf("*****");
			    printf(" ");
				}
				printf("\n");
				yildiz=yildiz-2;
				bosluk=bosluk+2;
				
	      	}
	      	

	      	 	
	return 0;
}
