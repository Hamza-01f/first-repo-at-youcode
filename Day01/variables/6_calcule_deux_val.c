#include <stdio.h>

int main(void) {
    int a , b;
    int sum , su , mult , divi;
    
    printf("Entrer deux valeurs pour la calculer est afficher le résulatats : \n");
    printf("Entrer la valeur de a : ");
    scanf("%d",&a);
    printf("Entrer la valeur de b : ");
    scanf("%d",&b);
    
    sum = a + b ;
    su = a - b ;
    mult = a / b ;
    divi = a * b ;
    
    printf("a + b = %d :\n",sum);
    printf("a - b = %d : \n",su);
    printf("a / b = %d : \n",mult);
    printf("a * b = %d : ",divi);
    
    return 0;
}