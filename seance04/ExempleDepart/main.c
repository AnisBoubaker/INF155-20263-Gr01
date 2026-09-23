#include <stdio.h>

//Varioable globale, éviter comme la peste!!
int une_var_globale;


float saisie_note(void) {
    float note;

    printf("Entrez la note : ");
    scanf("%f", &note);

    while (note < 0 || note > 100) {
        printf("Note invalide. Recommencez : ");
        scanf("%f", &note);
    }

    return note;
}

int afficher_reussite_echec(float note_etudiante) {
    int x;

    if (note_etudiante >= 60) {
        printf("Resultat : Reussite\n");
        return 1;
    }
    //else {
    printf("Resultat : Echec\n");
    return 0;
    //}
}


int main() {
    int nbEtudiants;
    int i;
    float note;
    float somme = 0;
    int nbReussites = 0;

    printf("Nombre d'etudiants : ");
    scanf("%d", &nbEtudiants);

    for (i = 1; i <= nbEtudiants; i++) {

        printf("\nEtudiant %d\n", i);

        //printf("La note saisie est: %f\n", saisie_note());
        note = saisie_note();

        somme = somme + note;
        //int x;
        // x = afficher_reussite_echec(note);
        // Interdit car la fonction ne retourne rien (void)

        nbReussites += afficher_reussite_echec(note);

        if (note >= 90) {
            printf("Mention : Excellent\n");
        }
        else if (note >= 80) {
            printf("Mention : Tres bien\n");
        }
        else if (note >= 70) {
            printf("Mention : Bien\n");
        }
        else if (note >= 60) {
            printf("Mention : Passable\n");
        }
        else {
            printf("Mention : Aucune\n");
        }
    }

    printf("\n--- Resultats du groupe ---\n");
    printf("Moyenne : %.1f\n", somme / nbEtudiants);
    printf("Reussites : %d\n", nbReussites);
    printf("Echecs : %d\n", nbEtudiants - nbReussites);

    return 0;
}