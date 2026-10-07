#include <stdio.h>

int main(void) {
    int un_entier = 10;


    printf("La variable un entier contient: %d\n", un_entier);
    printf("La variable un entier se trouve en mémoire à l'adresse: %p\n", &un_entier);
    printf("La variable un entier se trouve en mémoire à l'adresse: %d\n", &un_entier);

    int *adr_un_entier = &un_entier;

    printf("La variable adr_un_entier contient: %p\n", adr_un_entier);

    printf("Le contenu à l'adresse stockée dans adr_un_entier est: %d\n", *adr_un_entier);

    *adr_un_entier = 100;

    printf("La variable un_entier contient: %d\n", un_entier);

    return 0;
}
