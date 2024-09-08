#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int moyenne_geometrique;

    printf("Entrez le 1er nombre: ");
    scanf("%d", &a);

    printf("Entrez le 2ème nombre: ");
    scanf("%d", &b);

    printf("Entrez le 3ème nombre: ");
    scanf("%d", &c);

    moyenne_geometrique = pow(a * b * c, 1.0/3.0);

    printf("La moyenne géométrique est: %d\n", moyenne_geometrique);

    return 0;
}