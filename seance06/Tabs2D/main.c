#include <stdio.h>
#define MAX_RELEVES 20
#define NB_JOURS 7

double moyenne_tab2d(double tab2d[][MAX_RELEVES], int nb_lignes, int nb_colonnes);

int main(void) {
    double temperatures[NB_JOURS][MAX_RELEVES] = {
        {10.5, 12.3, 15.8, 10.2, 11, 14},
        {16.5, 16.2, 17.5, 15, 14.2, 12},
        {16, 17.2, 17, 18.9, 21, 23}
    };
    for (int j=0; j<3; j++){
        for (int i=0; i<6; i++) {
            printf("%.2lf\t", temperatures[j][i]);
        }
        printf("\n");
    }
    // double moyenne =0;
    // for (int i=0; i<3; i++) {
    //     for (int j=0; j<6; j++) {
    //         moyenne += temperatures[i][j];
    //     }
    // }
    // moyenne /= 3*6;
    printf("La moyenne des temperatures est: %.2lf\n", moyenne_tab2d(temperatures,3,6));


    // for (int i=0; i<6; i++) {
    //     printf("%.2lf\t", temperatures[1][i]);
    // }
    // printf("\n");
    // for (int i=0; i<6; i++) {
    //     printf("%.2lf\t", temperatures[2][i]);
    // }
    // printf("\n");
}


//GROSSE CONTAINTE: Cette fonction ne peut recevoir que des tableaux à 2d de
//doubles qui ont été créés avec une taille maximale en colonnes de MAX_RELEVES
double moyenne_tab2d(double tab2d[][MAX_RELEVES], int nb_lignes, int nb_colonnes) {
    double somme = 0;
    for (int i=0; i<nb_lignes; i++) {
        for (int j=0; j<nb_colonnes; j++) {
            somme += tab2d[i][j];
        }
    }
    return somme / (nb_lignes*nb_colonnes);
}



// double moyenne_tab(double tab[], int taille);
//
// int main(void) {
//     double temperatures[MAX_RELEVES] = {10.5, 14.2, 13, 15.5, 17, 12, 11, 10.2};
//
//     //Affichage du contenu du tableau
//     for (int i=0; i<8; i++) {
//         printf("%.2lf\t", temperatures[i]);
//     }
//     printf("\n");
//     // double somme = 0, moyenne;
//     // for (int i=0; i<8; i++) {
//     //     somme+=temperatures[i];
//     // }
//     // moyenne = somme/8;
//     printf("La moyenne des relevés est : %.2lf\n", moyenne_tab(temperatures, 8));
//     return 0;
// }
//
// double moyenne_tab(double tab[], int taille) {
//     double somme = 0;
//     for (int i=0; i<taille; i++) {
//         somme += tab[i];
//     }
//     return somme / taille;
// }