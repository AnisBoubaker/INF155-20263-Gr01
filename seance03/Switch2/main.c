#include <stdio.h>
#define FFLUSH() do{} while(getchar() != '\n');

int main(void) {
    double val1, val2;
    char op;

    printf("Saisir la premiere valeur: ");
    scanf("%lf", &val1);
    printf("Saisir la deuxieme valeur: ");
    scanf("%lf", &val2);
    printf("Operation (+,-,*,/): ");
    FFLUSH();
    scanf("%c", &op);

    switch ( op ) {
        case 'a':
        case '+':
            printf("Resultat: %lf\n", val1 + val2);
            break;
        case 's':
        case '-':
            printf("Resultat: %lf\n", val1 - val2);
            break;
        case 'm':
        case '*':
            printf("Resultat: %lf\n", val1 * val2);
            break;
        case 'd':
        case '/':
            printf("Resultat: %lf\n", val1 / val2);
            break;
        default:
            printf("Operation incorrecte\n");
    }

    // if (op == '+') {
    //     printf("Resultat: %lf\n", val1 + val2);
    // } else if (op == '-') {
    //     printf("Resultat: %lf\n", val1 - val2);
    // }else if (op == '*') {
    //     printf("Resultat: %lf\n", val1 * val2);
    // }else if (op == '/') {
    //     printf("Resultat: %lf\n", val1 / val2);
    // } else {
    //     printf("Operation incorrecte\n");
    // }


    return 0;
}
