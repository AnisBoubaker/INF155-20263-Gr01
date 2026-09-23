#include <stdio.h>

int main(void) {
    double saisie, absolue;

    printf("Saisir une valeur: ");
    scanf("%lf", &saisie);

    absolue = saisie < 0 ? -saisie : saisie;

    // if (saisie < 0) {
    //     absolue = -saisie;
    // } else {
    //     absolue = saisie;
    // }
    printf("Valeur absolue: %lf\n", absolue);

    return 0;
}
