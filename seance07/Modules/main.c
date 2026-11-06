#include <stdio.h>
#include <string.h>
#include "chaines.h"

int main(void) {
    char chaine[100];
    strncpy(chaine , "Bonjour le monde!", 100);
    remplacer_caractere(chaine, ' ', '_');
    printf("%s\n", chaine);
    return 0;
}


