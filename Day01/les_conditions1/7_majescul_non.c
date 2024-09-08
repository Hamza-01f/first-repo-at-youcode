#include <stdio.h>

int main()
{
 char c;
 int t;

 printf("Entrer une valeur pour la vérifier : ");
 scanf("%c",&c);

 t = c;

 printf("%s",( t >= 65 && t <= 90 ) ? "la valeur saisie est majuscule:" : "la valeur saisie est pas majuscule :");
 return 0;
}
