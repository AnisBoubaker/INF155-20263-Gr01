#include <stdio.h>

#define TAILLE_MAX 100

int fibonacci(long long suite[], int nb_termes, int taille_max);

int main(void) {
    int nb_termes;

    printf("Combien de termes: ");
    scanf("%d", &nb_termes);

    long long suite[TAILLE_MAX];

    nb_termes = fibonacci(suite, nb_termes, TAILLE_MAX);

    for (int i=0; i<nb_termes; i++) {
        printf("%lld\n", suite[i]);
    }

    return 0;
}

/*
 *Calcule les nb_termes de la suite de fibonacci et les stocke dans
 *le tableau suite, en s'assurant de ne pas déborder de la taille du
 *tableau.
 *Retourne le nombre d'éléments effectivement inscrits dans le tableau
 */
int fibonacci(long long suite[], int nb_termes, int taille_max) {
    suite[0] = 1;
    suite[1] = 1;
    for (int i=2; i<nb_termes && i<taille_max; i++) {
        suite[i] = suite[i-1] + suite[i-2];
    }
    return nb_termes<taille_max? nb_termes : taille_max;
}