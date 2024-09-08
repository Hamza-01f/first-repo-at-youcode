#include <stdio.h>

int main() {
    int x1, y1, x2, y2;  
    int xp, yp;          

    printf("Entrez x1 et y1 : ");
    scanf("%d %d", &x1, &y1);

    printf("Entrez x2 et y2 : ");
    scanf("%d %d", &x2, &y2);

    printf("Entrez xp et yp  : ");
    scanf("%d %d", &xp, &yp);

    printf("Segment : [( %d , %d ) -> ( %d , %d )]\n", x1, y1, x2, y2);
    printf("Point : ( %d , %d )\n", xp, yp);

    return 0; 
}
