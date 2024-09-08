#include <stdio.h>

int main(void) {
    int val1;
    int val2;
    int val3;
    
    printf("entrer la valeur 1: ");
    scanf("%d",&val1);
    printf("entrer la valeur 2 : ");
    scanf("%d",&val2);
    printf("entrer la valeur 3 : ");
    scanf("%d",&val3);
    
    int moy = (val1 * 2) + (val2 * 3) + (val3 * 5);
    int m = moy / 10;
    printf("la moyenne pondération est : %d ",m);
    
    return 0;
}