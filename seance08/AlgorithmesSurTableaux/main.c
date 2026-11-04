#include <stdio.h>

#include "fouille.h"

void tri_insertion(int tab[], int taille);
void afficher_tab(int tab[], int taille);
void tri_selection(int tab[], int taille);
void echanger_cases(int tab[], int indice1, int indice2);

int main(void) {

    // int tab[]={12, 34, 67, 89, 102, 150, 220, 235, 320};
    // int position = fouille_binaire(tab, 9, 13);
    //
    // printf("Position obtenue: %d\n", position);

    int mon_tab[] = {56, 12, 28, 67, 3, 45, 101, 18, 12, 1, 205};
    int mon_tab2[] = {56, 12, 28, 67, 3, 45, 101, 18, 12, 1, 205};


    printf("Original: ");
    afficher_tab(mon_tab, 11);
    printf("Tri insertion: ");
    tri_insertion(mon_tab, 11);
    afficher_tab(mon_tab, 11);

    printf("Tri selection: ");
    tri_selection(mon_tab2, 11);
    afficher_tab(mon_tab2, 11);


    return 0;
}

void afficher_tab(int tab[], int taille) {
    for (int i = 0 ; i<taille; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n");
}

void tri_insertion(int tab[], int taille) {
    for (int i=1; i<taille; i++) {
        int valeur = tab[i];
        int j = i;

        while (j>0 && tab[j-1] > valeur) { //Il suffit de mettre < pour un ordre décroissant
            tab[j] = tab[j-1];
            j--;
        }
        tab[j] = valeur;
    }
}

void echanger_cases(int tab[], int indice1, int indice2) {
    int tmp = tab[indice1];
    tab[indice1] = tab[indice2];
    tab[indice2] = tmp;
}

void tri_selection(int tab[], int taille) {
    for (int i=0; i<taille -1 ; i++) {
        int indice_min = i;
        for (int j=i+1; j<taille; j++) {
            if (tab[j]<tab[indice_min]) {
                indice_min = j;
            }
        }
        if (indice_min != i) {
            echanger_cases(tab, i, indice_min);
            // int copie = tab[indice_min];
            // tab[indice_min] = tab[i];
            // tab[i] = copie;
        }
    }
}