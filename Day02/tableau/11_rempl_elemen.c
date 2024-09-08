#include <stdio.h>

int main(){
     int tail;
     int el_Nou;
     int el_Remp;

     printf("Entrez la taille de votre tabeau : ");
     scanf("%d",&tail);

     int T1[tail];

     for(int i = 0 ; i < tail ; i++ ){
        printf("Entrez la valeur de T1[%d] = ",i+1);
        scanf("%d",&T1[i]);
     }

     printf("Entrez l'élement à remplacer : ");
     scanf("%d",&el_Remp);

     printf("Entrez la nouvelle valeur : ");
     scanf("%d",&el_Nou);
    
     //compare l'élements de tableau avec la nouvelle valeur
     for(int j = 0 ; j < tail ; j++ ){
         if(T1[j] == el_Remp)
             T1[j] = el_Nou;
     }
    
     printf("le tableau aprés la modifier par nouvelle valeur : \n");

     for(int i = 0 ; i < tail ; i++ ){
        printf("T1[%d] = %d\n",i+1,T1[i]);
     }

     return 0;
}