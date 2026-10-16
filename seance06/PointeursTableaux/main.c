#include <stdio.h>
void afficher_tab(int tab[], int taille);


int doubler(int tableau[], int taille) {
    for (int i=0; i<taille; i++) {
        tableau[i] = tableau[i]*2;
    }
}

void doubler_tab2d(int tab2d[][4], int nb_lignes, int nb_colonne) {
    for (int i=0; i<nb_lignes; i++) {
        for (int j=0; j<nb_colonne; j++) {
            tab2d[i][j]*=2;
        }
    }
}

int main(void) {
    int tab[10] = {10, 20, 30 , 40, 50};
    int tab2d[5][4] = {
        {10, 20, 30, 40},
        {20, 30, 40, 50},
        {40, 50, 60, 70},
        {70, 80, 90, 100},
        {100, 80, 90, 100}
    };

    afficher_tab(tab, 5);

    *tab = 150;
    afficher_tab(tab, 5);

    printf("L'adresse du tableau (sa premiere case): %d\n", tab);
    printf("L'adresse du tableau (sa premiere case): %d\n", tab+1);

    printf("Le contenu de *tab est: %d\n", *tab);
    printf("Le contenu de *(tab+1) est: %d\n", *(tab+1));

    doubler(tab, 5);
    afficher_tab(tab, 5);

    return 0;
}

void afficher_tab(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n");
}
