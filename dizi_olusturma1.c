#include <stdio.h>

int main() {
    int n,i;
    printf("Kac sayi gireceksiniz: ");
    scanf("%d", &n);

    int dizi[n];

    for(i = 0; i < n; i++) {
        printf("%d. sayiyi girin: ", i+1);
        scanf("%d", &dizi[i]);
    }

    printf("\nGirdiginiz sayilar:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}
