#include <stdio.h>

int main() {
    double sayi1, sayi2, sonuc;
    char islem;

    printf("İlk sayiyi girin: ");
    scanf("%lf", &sayi1);

    printf("İkinci sayiyi girin: ");
    scanf("%lf", &sayi2);

    printf("Yapmak istediginiz islemin isaretini girin (+, -, *, /): ");
    scanf(" %c", &islem);

    switch(islem) {
        case '+':
            sonuc = sayi1 + sayi2;
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            break;
        case '/':
            if (sayi2 != 0)
                sonuc = sayi1 / sayi2;
            else {
                printf("Sifira bolme hatasi!\n");
                return 1;
            }
            break;
        default:
            printf("Gecersiz islem isareti!\n");
            return 1;
    }

    printf("Sonu�: %.2lf\n", sonuc);
    return 0;
}

