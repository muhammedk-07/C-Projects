#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int explore(int *hp, int *gold);
int combat(int *hp);

int main() {
    int hp = 30;
    int gold = 0;
    int secim;

    srand(time(NULL));

    while (1) {
        printf("\n1 - Kesfe cik\n2 - Durum goster\n3 - Cikis\nSecim: ");
        scanf("%d", &secim);

       
        switch (secim) {
            case 1:
                explore(&hp, &gold);
                break;
            case 2:
                printf("Caniniz: %d\n", hp);
                printf("Altininiz: %d\n", gold);
                break;
            case 3:
                printf("Oyundan cikiliyor...\n");
                return 0;
            default:
                printf("Gecersiz secim!\n");
        }

        if (hp <= 0) {
            printf("Caniniz bitti! Oyun sonu.\n");
            break;
        }
    }

    return 0;
}


int explore(int *hp, int *gold) {
    int olay = rand() % 100; 

    if (olay < 40) {
        printf("Bir yaratik cikti!\n");
        combat(hp);
    } else if (olay < 70) { 
        printf("+10 altin buldunuz!\n");
        *gold += 10;
    } else { 
        printf("Bir tuzaga dustunuz! -5 can\n");
        *hp -= 5;
    }

    return 0;
}


int combat(int *hp) {
    int enemyHP = 20;

    while (enemyHP > 0 && *hp > 0) {
        enemyHP -= 6;
        printf("Oyuncu saldirdi! Yaratik cani: %d\n", enemyHP);
        if (enemyHP <= 0) break;

     
        *hp -= 4;
        printf("Yaratik saldirdi! Oyuncu cani: %d\n", *hp);
        if (*hp <= 0) break;
    }

    if (enemyHP <= 0) {
        printf("Savasi kazandiniz!\n");
    } else {
        printf("Kaybettiniz!\n");
        *hp = 0; 
    }

    return 0;
}

