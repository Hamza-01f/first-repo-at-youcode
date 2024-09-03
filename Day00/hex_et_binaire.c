#include <stdio>

int main() {
    int nombre;

   
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Afficher la valeur en hexadécimal
    printf("En hexadécimal : %X\n", nombre);

    // Afficher la valeur en binaire
    printf("En binaire : %d%d%d%d%d%d%d%d\n",
           (nombre & 0x80) >> 7,
           (nombre & 0x40) >> 6,
           (nombre & 0x20) >> 5,
           (nombre & 0x10) >> 4,
           (nombre & 0x08) >> 3,
           (nombre & 0x04) >> 2,
           (nombre & 0x02) >> 1,
           (nombre & 0x01));

    return 0;
}