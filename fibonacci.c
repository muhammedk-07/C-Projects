#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int a,b,c,n,i;
	a=0;
	b=1;
	     printf("Bir sayi giriniz:");
	     scanf("%d",&n);
    if(n>0)
    printf("%d\n",a);
    if(n>1)
    printf("%d\n",b);
    
    for(i=3;i<=n;i++){
      c=a+b;
      printf("%d\n",c);
      a=b;
      b=c;
	}

	return 0;
}
