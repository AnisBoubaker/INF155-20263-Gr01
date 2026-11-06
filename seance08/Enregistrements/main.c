#include <stdio.h>

typedef struct etudiant {
    double tp1;
    double tp2;
    double intra;
    double final;
} etudiant;

//typedef struct etudiant etudiant;


//Créer un alias à unsigned int : uint
typedef unsigned int uint;

int main(void) {
    int a;

    //struct etudiant e1;
    etudiant e1;

    e1.tp1 = 86;
    e1.tp2 = 80;
    e1.intra = 65;\=
    e1.final = 72;

    printf("L'etudiant e1 a eu %.2lf au TP1, %.2lf au TP2, %.2lf a l'intra et %.2lf au final",
        e1.tp1, e1.tp2, e1.intra, e1.final);

    //Changer la note du TP1 de la personne a la case 5:
    struct etudiant classe[40];
    classe[5].tp1 = 78;

    uint variable_positive;


    return 0;
}
