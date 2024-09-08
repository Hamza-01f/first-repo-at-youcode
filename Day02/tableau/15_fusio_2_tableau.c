#include <stdio.h>

int main(){
     int tail_T1;
     int tail_T2;

     printf("Entrez la taille de tableau T1 : ");
     scanf("%d",&tail_T1);

     int T1[tail_T1];//declarer la promiere tableau
     printf("Saisir les valeurs de promiére tableau : \n");
     for(int i = 0 ; i < tail_T1 ; i++ ){
        printf("Entrez T1[%d] = ",i+1);
        scanf("%d",&T1[i]);
     }
     
     printf("Entrez la taille de tableau T2 : ");
     scanf("%d",&tail_T2);

     int T2[tail_T2];//declarer la deuxieme tableau

     printf("Saisir les valeurs de la deuxiéme tableau : \n");
     for(int i = 0 ; i < tail_T2 ; i++ ){
        printf("Entrez T2 [%d] = ",i+1);
        scanf("%d",&T2[i]);
     }
  
     int tab_Fusi[tail_T1+tail_T2];//declarer fusionée tableau

     for(int j = 0 ; j < tail_T1 ; j++ ){
          tab_Fusi[j] = T1[j];//remplier fusionée tableau par T1
     } 

     for(int j = tail_T1 ; j < tail_T1+tail_T2 ; j++){
          tab_Fusi[j] = T2[j - tail_T1];//remplir fusionée tableau par T2
     }

     printf("les deux tableau aprés les fusione : \n");
     for(int i = 0 ; i < tail_T1 + tail_T2 ; i++){
        printf("%d ,",tab_Fusi[i]);
     }


     return 0;
}