/*
 * Commentaire multi-lignes
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned int nmbre_poersonnes;
    int age = 0;
    char note;


    age = 22;
    age = 100 / 5;

    printf("La valeur de la variable age est: %d\n", age);

    note = 'A'+5;
    //Affichage de note interpretée comme un caractère
    printf("La valeur de la variable note est: %c\n", note);
    //Affichage de note interpretée comme un entier
    printf("La valeur de la variable note est: %d\n", note);

    int bidon;

    bidon = 'Z' + '#' -5;


    // Afficher "Hello, World!"
    //printf("Hello, World!\n");



    return EXIT_SUCCESS;
}
