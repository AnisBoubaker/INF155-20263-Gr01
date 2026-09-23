#include <stdio.h>

//Déclaration des fonction
double factorielle(int nombre);
int nombre_combinaisons(int nb_total, int nb_tirage);

//Fonction principale
int main(void) {
    int nb_boules_total, nb_boules_par_tirage;
    int nb_combinaisons;
    printf("Combien de boules: ");
    scanf("%d", &nb_boules_total);
    printf("Combien de boules par tirage: ");
    scanf("%d", &nb_boules_par_tirage);


    nb_combinaisons = nombre_combinaisons(nb_boules_total, nb_boules_par_tirage);
    if (nb_combinaisons == 0) {
        printf("Valeurs incorrectes.\n");
    } else {
        printf("Il y a %d combinaisons possibles", nb_combinaisons);
    }

    // A ne pas faire: On appelle la fonction 2 fois pour rien!
    // if (nombre_combinaisons(nb_boules_total, nb_boules_par_tirage) == 0){
    //     printf("Valeurs incorrectes.\n");
    // } else {
    //     printf("Il y a %d combinaisons possibles", nombre_combinaisons(nb_boules_total, nb_boules_par_tirage);
    // }
    return 0;
}


//Définition des fonctions
double factorielle(int nombre) {
    double fact = 1;
    for (int i=1; i<=nombre; i++) {
        fact = fact * i;
    }
    return fact;
}

/*
 * Calcule le nombre de combinaisons possibles si on tire nb_tirage parmi nb_total
 * Si les valeurs de paramètres sont incorrects, retourne 0.
 */
int nombre_combinaisons(int nb_total, int nb_tirage) {
    if (nb_tirage > nb_total) {
        return 0;
    }

    return (int)(factorielle(nb_total) / (factorielle(nb_tirage)*factorielle(nb_total-nb_tirage)));
}
