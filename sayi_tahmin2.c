int tahminEt(int *skor) {
    int sayi = rand() % 10; 
    int tahmin;
    printf("0-9 arasi sayi tahmin et: ");
    scanf("%d", &tahmin);

    if (tahmin == sayi) {
        printf("Dogru! +10 puan\n");
        *skor += 10;
    } else {
        printf("Yanlis! -5 puan (dogru: %d)\n", sayi);
        *skor -= 5;
    }
    return 0;
}
