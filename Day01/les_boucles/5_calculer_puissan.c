#include <stdio.h>

int main(){

    int base ;
    int exposant ;

    printf("Entrez La Base : ");
    scanf("%d",&base);

    printf("Entrer L'exposant : ");
    scanf("%d",&exposant);
    
    int assist = base ;
    for(int i = 1 ; i < exposant ; i++ ){
         base = base * assist;
    }

    printf("la valeur %d a la puissance de %d est : %d \n",exposant,assist,base);

  return 0;
}