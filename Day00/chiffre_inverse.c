#include <stdio.h>

int main() {
    int nombre, chiffre1, chiffre2, chiffre3, chiffre4;

    printf("Entrez un nombre entier à 4 chiffres : ");
    scanf("%d", &nombre);

    chiffre1 = nombre % 10;          
    chiffre2 = (nombre / 10) % 10;   
    chiffre3 = (nombre / 100) % 10;   
    chiffre4 = (nombre / 1000) % 10; 

    // Afficher le nombre dans l'ordre inverse
    printf("L'inverse du nombre est : %d%d%d%d\n", chiffre1, chiffre2, chiffre3, chiffre4);

    return 0;
}
