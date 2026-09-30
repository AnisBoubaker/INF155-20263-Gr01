#include <stdio.h>

#define TAILLE 10

int main(void) {
    //int taille = 50;
    //Interdit d'utiliser une variable pour définir la taille
    double temperatures[TAILLE] = {17.5, 20, 22.4};
    int tab2[TAILLE] = {0}; //Initialisation de tout le tableau à 0.

    for (int i=0; i<TAILLE; i++) {
        printf("La temperature num %d: %lf\n", i, temperatures[i]);
    }
    // printf("La temperature num1: %lf\n", temperatures[1]);
    // printf("La temperature num1: %lf\n", temperatures[2]);
    // printf("La temperature num1: %lf\n", temperatures[3]);
    // printf("La temperature num1: %lf\n", temperatures[4]);
    // printf("La temperature num1: %lf\n", temperatures[5]);



    // int notes[3] = {70, 80, 89};
    // printf("La note a la case 4: %d\n", notes[4]);


    return 0;
}
