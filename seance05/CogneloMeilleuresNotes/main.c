#include <stdio.h>
#include <stdlib.h>

int main(void){
    int notes[] = {70, 89, 72, 65, 92, 77, 81, 78};
    int nb_bonnes_notes = 0;
    int meilleure_note=notes[0];
    int pire_note = notes[0];
    int indice_meilleure=0;
    int indice_pire=0;

    for(int i=0; i<8; i++){
        if(notes[i]>80){
            printf("La note %d est superieure à 80.\n", notes[i]);
            nb_bonnes_notes++;
        }

        // if(notes[i]>meilleure_note){
        //   meilleure_note = notes[i];
        // }

        // if(notes[i]<pire_note){
        //   pire_note = notes[i];
        // }

        if(notes[i]>notes[indice_meilleure]){
            indice_meilleure = i;
        }

        if(notes[i]<notes[indice_pire]){
            indice_pire = i;
        }


    }
    printf("Il y a en tout %d bonne notes.\n", nb_bonnes_notes);
    printf("La meilleure note: %d\n", notes[indice_meilleure]);
    printf("La pire note: %d\n", notes[indice_pire]);



    return EXIT_SUCCESS;
}