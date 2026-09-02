#include <stdio.h>

int main(void) {
    double note1, note2, note3;
    double moyenne;

    printf("Saisir la premiere note: ");
    scanf("%lf", &note1);
    printf("Saisir la 2eme note: ");
    scanf("%lf", &note2);
    printf("Saisir la 3eme note: ");
    scanf("%lf", &note3);

    moyenne = (note1+note2+note3)/3;

    printf("Votre moyenne: %.2lf\n", moyenne);

    //printf("La premiere note: %lf", note1);


    return 0;
}
