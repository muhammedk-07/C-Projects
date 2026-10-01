#include <stdio.h>

void insertionSort(int dizi[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = dizi[i];
        j = i - 1;
        while (j >= 0 && dizi[j] > key) {
            dizi[j + 1] = dizi[j];
            j = j - 1;
        }
        dizi[j + 1] = key;
    }
}

int main() {
    int dizi[] = {12, 11, 13, 5, 6};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int i;

    insertionSort(dizi, n);

    printf("Insertion Sort sonucu: ");
    for (i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    return 0;
}
