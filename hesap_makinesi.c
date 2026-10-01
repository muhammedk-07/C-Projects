#include <stdio.h>

int main() {
    double sayi1, sayi2, sonuc;
    char islem;

    printf("İlk say�y� girin: ");
    scanf("%lf", &sayi1);

    printf("�kinci say�y� girin: ");
    scanf("%lf", &sayi2);

    printf("Yapmak istedi�iniz i�lemin i�aretini girin (+, -, *, /): ");
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
                printf("S�f�ra b�lme hatas�!\n");
                return 1;
            }
            break;
        default:
            printf("Ge�ersiz i�lem i�areti!\n");
            return 1;
    }

    printf("Sonu�: %.2lf\n", sonuc);
    return 0;
}

