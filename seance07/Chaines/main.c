#include <stdio.h>

int main(void) {
    //char bonjour[] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
    char bonjour[] = "Bonjour";

    char *le_monde = " le Monde!";


    //bonjour = "Allo"; //Pas permis! On n'affecte pas un tableau dans un tableau!
    bonjour[0]='A';
    bonjour[1]='l';
    bonjour[2]='l';
    bonjour[3]='o';
    bonjour[4]='\0';

    printf("%s\n", bonjour);

    printf("%s\n", le_monde);

    le_monde = "  tout le monde!";
    printf("%s\n", le_monde);

    le_monde[0] = 'a';

    printf("%s\n", le_monde);

    return 0;
}
