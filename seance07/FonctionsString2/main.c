#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_CHAINE 100

int main(void) {
    char etud1[TAILLE_MAX_CHAINE];
    char etud2[TAILLE_MAX_CHAINE];

    printf("Saisir le nom de l'etudiant-e 1: ");
    fgets(etud1, TAILLE_MAX_CHAINE, stdin);
    etud1[strlen(etud1)-1]='\0';

    printf("Saisir le nom de l'etudiant-e 2: ");
    fgets(etud2, TAILLE_MAX_CHAINE, stdin);
    etud2[strlen(etud2)-1]='\0';

    if (*etud1 == *etud2) {
        printf("Les deux etudiant-e-s ont le meme nom.\n");
    } else {
        printf("Les deux etudiant-e-s n'ont pas le meme nom.\n");
    }

    return 0;
}
