#include <stdio.h>
	int fact(int n)
{
	if (n == 0) 
		return (1);
	else 
		return (n * fact(n-1));
}
	
	
	
int main(){
	
	int n;
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);

	printf("Girdiginiz sayinin faktoriyel degeri=%d",fact(n));
	return 0;
}
