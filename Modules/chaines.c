#include "chaines.h"

//Déclaration des prototypes des fonctions privées
void bidon(void);


void bidon(void) {
    retirer_retour_ligne("Bidon\n");
}

void retirer_retour_ligne(char* chaine) {
    int pos_fin = 0;

    while(chaine[pos_fin]!='\0'){
        pos_fin++;
    }

    if(pos_fin>0 && chaine[pos_fin-1]=='\n'){
        chaine[pos_fin-1] = '\0';
    }
}

int compter_occurrences(const char chaine[], char caractere){
    int compteur =0;
    for(int i=0; chaine[i]!='\0'; i++){
        if(chaine[i]==caractere){
            compteur++;
        }
    }
    return compteur;
}

void remplacer_caractere(char* chaine, char ancien, char nouveau) {
    for (int i=0; chaine[i]!='\0'; i++) {
        if (chaine[i]== ancien) {
            chaine[i] = nouveau;
        }
    }
}