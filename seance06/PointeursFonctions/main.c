/*
 *  Écrire la fonction min_max qui fournit à l'appelant le minimum et le
 *  maximum d'un tableau d'entiers (1D)
 */

#include <stdio.h>
#define TAILLE_MAX_TAB 50

void min_max(const int tab[], int taille, int *min, int *max);

int main(void) {
    int tableau[TAILLE_MAX_TAB] = {11, 25, 23, 87, 45, 11, 12, 17, 85};
    int le_minimum, le_maximum;
    min_max(tableau, 9, &le_minimum, &le_maximum);

    printf("Minimum: %d, Maximum: %d\n", le_minimum, le_maximum);

    return 0;
}

void min_max(const int tab[], int taille, int *min, int *max) {
    *min = tab[0];
    *max = tab[0];
    for (int i=0; i<taille; i++) {
        if (tab[i]>*max) {
            *max = tab[i];
        }
        if (tab[i]<*min) {
            *min = tab[i];
        }
    }

    // int le_min=tab[0], le_max=tab[0];
    //
    // for (int i=0; i<taille; i++) {
    //     if (tab[i]>le_max) {
    //         le_max = tab[i];
    //     }
    //     if (tab[i]<le_min) {
    //         le_min = tab[i];
    //     }
    // }
    // *min = le_min;
    // *max = le_max;
}






