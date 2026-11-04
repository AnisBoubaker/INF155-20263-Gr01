//
// Created by Anis Boubaker on 2026-11-04.
//

#include "fouille.h"

int position_article(const int articles[], int taille, int numero){
    for(int i=0; i<taille; i++){
        if(articles[i]==numero){
            return i;
        }
    }
    return -1;
}

int fouille_binaire(const int valeurs[], int nombre, int cible)
{
    int debut = 0, fin = nombre;

    while (debut < fin) {
        int milieu = debut + (fin - debut) / 2;

        if (valeurs[milieu] == cible) {
            return milieu;
        }

        if (valeurs[milieu] < cible) {
            debut = milieu + 1;
        } else {
            fin = milieu;
        }
    }

    return -1;
}
