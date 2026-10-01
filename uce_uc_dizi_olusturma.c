#include <stdio.h>

int main() {
    int sayilar[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j;

    �eklinde yazd�rma
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", sayilar[i][j]);
        }
        �r ge�i�i i�in burada otomatik olarak yeni sat�ra ge�iyoruz
        printf("\n");
    }

    return 0;
}
