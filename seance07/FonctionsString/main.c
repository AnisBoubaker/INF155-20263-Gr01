#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_CHAINE 100

int main(void) {

    char nom[TAILLE_MAX_CHAINE];

    printf("Saisir votre nom: ");
    //scanf("%s", nom); //Ne pas utiliser avec %s car arrete la lecture à l'espace!
    fgets(nom, TAILLE_MAX_CHAINE, stdin);
    // int i =0;
    // while (nom[i]!='\0') {
    //     i++;
    // }
    // nom[i-1] = '\0';
    nom[strlen(nom)-1] = '\0';

    printf("Bonjour %s\n", nom);


    char nom2[TAILLE_MAX_CHAINE];

    //On ne fait jamais nom2 = nom; car ce sont des tableaux!
    strcpy(nom2, nom);
    printf("La copie du nom : %s\n", nom2);

    strcpy(nom2 , "Jean Charles");

    printf("La nouvelle valeur de nom2: %s\n", nom2);

    char prenom[TAILLE_MAX_CHAINE];
    printf("Saisir votre prenom: ");
    fgets(prenom, TAILLE_MAX_CHAINE, stdin);
    prenom[strlen(prenom)-1]= '\0'; //Enlever le retour à la ligne inutile

    //printf("Votre nom complet: %s %s\n", prenom, nom);

    char nom_complet[TAILLE_MAX_CHAINE];
    strcpy(nom_complet, prenom);
    strcat(nom_complet, " ");
    strcat(nom_complet, nom);
    printf("Le nom complet: %s\n", nom_complet);

    char grosse_chaine[TAILLE_MAX_CHAINE];
    sprintf(grosse_chaine, "Le nom au complet contient: %s %s\n", prenom, nom);
    printf("%s\n", grosse_chaine);



    return 0;
}
