#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int un_entier; //Allocation statique d'un entier.
    int *un_entier_dynamique;
    un_entier_dynamique = (int*)malloc(sizeof(int));
    if (un_entier_dynamique == NULL) { //Toujours vérifier que MALLOC a fonctionné
        printf("Erreur d'allocation\n");
        exit(EXIT_FAILURE);
    }

    *un_entier_dynamique = 100;

    printf("Mon entier dynamique contient: %d\n", *un_entier_dynamique);

    int nb_entiers;
    printf("Tu veux combien d'entiers: ");
    scanf("%d", &nb_entiers);

    int *tableau_entiers_dynamique;

    tableau_entiers_dynamique = (int*)malloc(nb_entiers * sizeof(int));
    if (tableau_entiers_dynamique == NULL) {
        printf("Erreur d'allocation\n");
        exit(EXIT_FAILURE);
    }
    tableau_entiers_dynamique[0] = 245;
    tableau_entiers_dynamique[1] = 30;

    printf("Valeur dans la case 1: %d\n", tableau_entiers_dynamique[1]);

    free(tableau_entiers_dynamique);
    tableau_entiers_dynamique = NULL; //ESSENTIEL: Toujours mettre la valeur du pointeur à NULL apres un free.


    tableau_entiers_dynamique[10]=25;


    return 0;
}
