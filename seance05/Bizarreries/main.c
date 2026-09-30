#include <stdio.h>

void f1(int a) {
    a = a * a;
}
void f2(const int tab[], int taille) {
    for (int i=0; i<taille; i++) {
        //Le tableau étant constant, on ne peut plus changer le tableau original depuis
        //la fonction.
        tab[i] = tab[i] * tab[i];
    }
}

int main(void) {
    int a = 10;
    f1(a);
    printf("La variable a contient: %d\n", a);

    int tab[5] = {10, 20, 30, 40, 50};
    f2(tab, 5);
    for (int i=0; i<5; i++) {
        printf("La case %d contient %d\n", i, tab[i]);
    }

    return 0;
}
