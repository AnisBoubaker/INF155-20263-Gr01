#include <stdio.h>

int main(void) {
    int nombre;
    double factorielle = 1;

    printf("Saisir le nombre: ");
    scanf("%d", &nombre);

    for (int i=1; i <= nombre; i++) {
        factorielle = factorielle * i;
    }

    printf("%d! = %.0lf\n", nombre, factorielle);

    return 0;
}
