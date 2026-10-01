#include <stdio.h>
#include <stdio.h>

void selectionSort(int dizi[], int n) {
    int i, j, minIndex, temp;  �m de�i�kenler ba�ta
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (dizi[j] < dizi[minIndex]) {
                minIndex = j;
            }
        }
        ���k eleman� ba�a al
        temp = dizi[minIndex];
        dizi[minIndex] = dizi[i];
        dizi[i] = temp;
    }
}

int main() {
    int dizi[] = {64, 25, 12, 22, 11};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int i;  �ng� de�i�kenini ba�ta tan�mla (C90)

    selectionSort(dizi, n);

    printf("Selection Sort sonucu: ");
    for (i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    return 0;
}

