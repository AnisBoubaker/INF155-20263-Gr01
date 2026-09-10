#include <stdio.h>

int main(void) {

    const int valeur_a_deviner = 25;
    int saisie;

    printf("Valeur a deviner: ");
    scanf("%d", &saisie);

    if (saisie == valeur_a_deviner) {
        printf("Bravo, vous avez devine!\n");
    } else if (saisie >= valeur_a_deviner-5 && saisie <= valeur_a_deviner+5) {
        printf("Vous etes proche!\n");
    } else {
        printf("Meilleure chance la prochaine fois!\n");
    }


    //Version moins performante que else
    // if (saisie == valeur_a_deviner) {
    //     printf("Bravo, vous avez devine!\n");
    // }
    // if ( saisie != valeur_a_deviner) {
    //     printf("Meilleure chance la prochaine fois!\n");
    // }

    return 0;
}
