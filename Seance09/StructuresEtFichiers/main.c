#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_NOM 50

typedef struct etudiant {
    int identifiant;
    char nom[TAILLE_MAX_NOM];
    char prenom[TAILLE_MAX_NOM];
    double tp1;
    double tp2;
    double intra;
    double final;
} Etudiant;

//void afficher_etudiant(Etudiant etudiant);
void afficher_etudiant(const Etudiant *etudiant);

int main(void) {

    Etudiant e1;

    e1.identifiant = 1;
    strcpy(e1.prenom,  "Julie");
    strcpy(e1.nom,  "Villeneuve");
    e1.tp1 = 87;
    e1.tp2 = 90;
    e1.intra = 77;
    e1.final = 90;

    // printf("Nom complet: %s %s\n", e1.prenom, e1.nom);
    // printf("Notes: [TP1]: %.2lf [TP2]: %.2lf [INTRA]: %.2lf [FINAL]: %.2lf\n", e1.tp1,
    //     e1.tp2, e1.intra, e1.final);
    afficher_etudiant(&e1);

    printf("Identifiant de l'etudiant-e: %d\n", e1.identifiant);

    Etudiant e2;

    e2 = e1;

    afficher_etudiant(&e2);


    return 0;
}


void afficher_etudiant(const Etudiant *etudiant) {
    //On déréférence etudiant puis on accede au champs nom
    printf("Nom complet: %s %s\n", (*etudiant).prenom, (*etudiant).nom);
    //Notation alternative plus pratique avec la ->
    printf("Notes: [TP1]: %.2lf [TP2]: %.2lf [INTRA]: %.2lf [FINAL]: %.2lf\n",
        etudiant->tp1, etudiant->tp2, etudiant->intra, etudiant->final);

    //PAs permis car l'étudiant reçu est const
    //etudiant->identifiant = 100;
}

// void afficher_etudiant(Etudiant etudiant) {
//     printf("Nom complet: %s %s\n", etudiant.prenom, etudiant.nom);
//     printf("Notes: [TP1]: %.2lf [TP2]: %.2lf [INTRA]: %.2lf [FINAL]: %.2lf\n", etudiant.tp1,
//         etudiant.tp2, etudiant.intra, etudiant.final);
//     etudiant.identifiant = 100;
// }