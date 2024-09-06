#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    int xp, yp;
    printf("Entrez les coordonnées de la première extrémité du segment (x1 y1) : ");
    scanf("%d %d", &x1, &y1);

    printf("Entrez les coordonnées de la deuxième extrémité du segment (x2 y2) : ");
    scanf("%d %d", &x2, &y2);
    printf("Entrez les coordonnées du point (xp yp) : ");
    scanf("%d %d", &xp, &yp);

    printf("Segment : [(%d, %d) -> (%d, %d)]\n", x1, y1, x2, y2);
    printf("Point : (%d, %d)\n", xp, yp);

    return 0;
}
