#include <stdio.h>

int main(void) {
    int choix;

    do {
        printf("Votre choix (1, 2, ou 3): ");
        scanf("%d", &choix);
        if (choix!=1 && choix!=2 && choix!=3) {
            printf("choix incorrect!\n");
        }
    } while (choix!=1 && choix!=2 && choix!=3);

    // printf("Votre choix (1, 2, ou 3): ");
    // scanf("%d", &choix);
    // while (choix != 1 && choix!=2 && choix!=3) {
    //     printf("Choix incorrect!\n");
    //     printf("Votre choix (1, 2, ou 3): ");
    //     scanf("%d", &choix);
    // }




    return 0;
}
