#include <stdio.h>

int main(void) {
    int x, y;
    double z;

    x=10;
    y = 15;
    printf("x+y=%d\n", x+y);
    printf("x*y=%d\n", x*y);

    x = 10; y = 3;
    printf("x/y=%lf\n", x/y);

    double resultat = x / y;
    printf("x/y=%.2lf\n", resultat);

    double x2=10;
    int y2=3;
    resultat = x2 / y2;
    printf("x/y=%.2lf\n", resultat);


    //Revenons aux entiers x et y
    x =10;
    y = 3;
    resultat = x*1.0 / y;
    printf("x/y=%.2lf\n", resultat);

    //Version avec transtypage
    resultat = (double)x / y;
    printf("x/y=%.2lf\n", resultat);

    //Incréments
    x = 20;
    x++;
    printf("x vaut : %d\n", x);

    ++x;
    printf("x vaut : %d\n", x);

    x = 20;
    y = 3;
    int resultat2;

    resultat2 = (x++) / y;

    printf("Resultat2 = %d\n", resultat2);
    printf("x = %d\n", x);

    x = 20;
    y = 3;

    resultat2 = ++x / y;

    printf("Resultat2 = %d\n", resultat2);
    printf("x = %d\n", x);


    printf("======== Operateurs de comparaison ========\n");

    printf("10 < 3: %d\n", 10<3);
    printf("3 < 10: %d\n", 3<10);

    printf("10+25*(10<10): %d\n", 10+25*(10<10));

    int age= 25;
    int salaire=80000;
    printf("age>18 && salaire<50000: %d\n", age>18 && salaire<50000);



    printf("======== Operateurs d'affectation ========\n");
    int a, b;

    a = 35+(b=25);
    printf("a = %d, b= %d\n", a, b);

    printf("10+25.0/5/2 = %lf\n", 10+25.0/5/2);



    return 0;
}
