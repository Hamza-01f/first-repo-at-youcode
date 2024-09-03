#include <stdio.h>

int main(void) {
    int temp;
    
    printf("Entrer la température pour afficher l'état de l'eau : ");
    scanf("%d",&temp);
    if(temp < 0 )
      printf("l'eau est solide :");
    else if(temp >= 0 && temp < 100 )
      printf("l'eau est liquid :");
    else
      printf("l'eau est Gaz :");

    return 0;
}