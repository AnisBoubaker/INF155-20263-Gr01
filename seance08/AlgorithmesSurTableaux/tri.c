//
// Created by Anis Boubaker on 2026-11-04.
//

#include "tri.h"

//Déclaration des fonction privées du module
void echanger_cases(int tab[], int indice1, int indice2);



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

void tri_bulles(int tab[], int taille) {
    int limite = taille;
    int permutation = 1;

    while (limite>1 && permutation) {
        permutation = 0;
        for (int i=0; i<limite -1 ; i++) {
            if (tab[i] > tab[i+1]) {
                echanger_cases(tab, i, i+1);
                permutation = 1;
            }
        }
        limite--;
    }
}