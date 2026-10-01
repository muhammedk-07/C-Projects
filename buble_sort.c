#include <stdio.h>

void bubbleSort(int dizi[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-i; j++) {
            if (dizi[j] > dizi[j+1]) {
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
        }
    }
}

int main() {
    int dizi[] = {5, 2, 9, 1, 7};
    int n = sizeof(dizi) / sizeof(dizi[0]); 
    int k;

    bubbleSort(dizi, n);

    printf("Bubble Sort sonucu: ");
    for (k = 0; k < n; k++) {
        printf("%d ", dizi[k]);
    }
    printf("\n");

    return 0;
}
