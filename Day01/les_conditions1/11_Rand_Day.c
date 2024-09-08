#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 

    char jours[7][10] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    
    int rand_val = 7;

    int choo_val = rand() % rand_val;

    printf("La valeur choisie aléatoirement est : %s\n", jours[choo_val]);

    return 0;
}
