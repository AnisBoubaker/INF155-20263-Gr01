#ifndef CHAINES_H
#define CHAINES_H

//Prototypes des fonctions
/*
 * Retire le \n terminal d'une chaine de caractères
 */
void retirer_retour_ligne(char* chaine);

int compter_occurrences(const char chaine[], char caractere);
void remplacer_caractere(char* chaine, char ancien, char nouveau);

#endif