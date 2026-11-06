#include <stdio.h>

#include "fouille.h"
#include "tri.h"



int main(void) {

    // int tab[]={12, 34, 67, 89, 102, 150, 220, 235, 320};
    // int position = fouille_binaire(tab, 9, 13);
    //
    // printf("Position obtenue: %d\n", position);

    int mon_tab[] = {56, 12, 28, 67, 3, 45, 101, 18, 12, 1, 205};
    int mon_tab2[] = {56, 12, 28, 67, 3, 45, 101, 18, 12, 1, 205};
    int mon_tab3[] = {56, 12, 28, 67, 3, 45, 101, 18, 12, 1, 205};


    printf("Original: ");
    afficher_tab(mon_tab, 11);
    printf("Tri insertion: ");
    tri_insertion(mon_tab, 11);
    afficher_tab(mon_tab, 11);

    printf("Tri selection: ");
    tri_selection(mon_tab2, 11);
    afficher_tab(mon_tab2, 11);

    printf("Tri bulles: ");
    tri_selection(mon_tab3, 11);
    afficher_tab(mon_tab3, 11);

    return 0;
}
