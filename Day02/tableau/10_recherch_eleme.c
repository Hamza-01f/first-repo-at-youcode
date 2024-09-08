#include <stdio.h>

int main(){
     int tail;
     int el_rech;
     int check = 0;

     printf("Entrez la taille de votre tabeau : ");
     scanf("%d",&tail);

     int T1[tail];

     for(int i = 0 ; i < tail ; i++ ){
        printf("Entrez la valeur de T1[%d] = ",i+1);
        scanf("%d",&T1[i]);
     }

     printf("Entrez l'élement à rechercher : ");
     scanf("%d",&el_rech);

     for(int j = 0 ; j < tail ; j++ ){
         if(T1[j] == el_rech)
             check = 1;
     }

     // check si l'élément exist ou bien non
     (check) ? printf("l'élement %d présent dans le tableau T :",el_rech) : printf("l'élement %d ne pas présent dans le tableau T :",el_rech);
    return 0;
}