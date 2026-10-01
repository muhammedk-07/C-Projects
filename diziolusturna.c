#include <stdio.h>

int main() {
    int n, i;

    printf("Kac elemanli bir dizi olusturmak istiyorsunuz? ");
    scanf("%d", &n);

    int dizi[n]; 

    for(i = 0; i < n; i++) {
        printf("%d. elemani girin: ", i+1);
        scanf("%d", &dizi[i]);
    }

    printf("\nOlusturulan dizi: ");
    for(i = 0; i < n; i++) {
        printf("a[%d]=%d ",i,dizi[i]);
    }

    return 0;
}
