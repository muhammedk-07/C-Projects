#include <stdio.h>
#include <string.h>


int hesap(char *p) {
    int uzunluk = 0;
    int i = 0;

    for (; p[i] != '\0'; i++) {
        uzunluk++;
    }

    return uzunluk;
}

int main() {
    char metin[] = "Merhaba";
    int uzunluk =hesap(metin);

    printf("Metnin uzunlugu: %d\n", uzunluk);

    return 0;
}
