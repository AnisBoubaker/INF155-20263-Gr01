#include <stdio.h>

#define MAX_NOTES 60 //Taille maximale du tableau

double moyenne_tab(int tab[], int taille);

int liste_bonnes_notes(
    const int tab[],
    int taille,
    int seuil,
    int resultat[],
    int taille_max_resultat
    );

int main(void) {
    int nb_notes;
    int notes[MAX_NOTES] = {0};
    int somme;
    double moyenne;

    printf("La variable nb_notes est de taille: %d\n", (int)sizeof(nb_notes));
    printf("La taille du tableau notes est: %d\n", (int)(sizeof(notes) / sizeof(notes[0])));



    //int tab[] = {10, 20, 30, 40};

    do {
        printf("Nombre de notes: ");
        scanf("%d", &nb_notes);
    } while (nb_notes<1 || nb_notes>MAX_NOTES);
    //nb_notes: taille effective du tableau

    for (int i=0; i<nb_notes; i++) {
        printf("Saisir la note num. %d: ", i+1);
        scanf("%d", &notes[i]);
    }

    //Marche pas: ça affiche une adresse mémoire....
    //printf("Le tableau contient: %d\n", notes);

    //Affichage du tableau en le parcourant avec une boucle
    for (int i=0; i<nb_notes; i++) {
        printf("Note #%d: %d\n", i+1, notes[i]);
    }

    // somme =0;
    // for (int i=0; i<nb_notes; i++) {
    //     somme += notes[i];
    // }
    // moyenne = (double)somme / nb_notes;
    printf("La moyenne est: %.2lf\n", moyenne_tab(notes, nb_notes) );

    int bonnes_notes[MAX_NOTES];
    int nb_bonnes_notes;
    nb_bonnes_notes = liste_bonnes_notes(notes, nb_notes, 80, bonnes_notes,MAX_NOTES);
    for (int i=0; i<nb_bonnes_notes; i++) {
        printf("On a trouve la bonne note suivante: %d\n", bonnes_notes[i]);
    }


    return 0;
}


double moyenne_tab(int tab[], int taille) {
    int somme =0;

    //Impossible d'obtenir la taille d'un tableau depuis la fonction
    //Il faut obligatoirement l'envoyer par paramètre
    // int taille_tableau = (int)(sizeof(tab) / sizeof(tab[0]));
    // printf("La taille du tableau dans la fonction est: %d\n", taille_tableau);

    for (int i=0; i<taille; i++) {
        somme += tab[i];
    }
    return (double)somme / taille;
}


/*
 * Mettre les notes > au seuil dans le tableau resultat
 * Retourne la taille effective du tableau resultat
 */
int liste_bonnes_notes(
    const int tab[],
    int taille,
    int seuil,
    int resultat[],
    int taille_max_resultat
    ) {
    int nb_bonnes_notes = 0;

    for (int i=0; i<taille; i++) {
        if (tab[i]>seuil) {
            resultat[nb_bonnes_notes] = tab[i];
            nb_bonnes_notes++;
        }
        if (nb_bonnes_notes==taille_max_resultat) {
            return nb_bonnes_notes;
        }
    }
    return nb_bonnes_notes;
}






