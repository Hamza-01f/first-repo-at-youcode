#include <stdio.h>

int main()
{
      int a;
      printf("Entrez la taille de tableau : ");
      scanf("%d",&a);
      int T[a];
      for(int i = 0 ; i < a ; i++){
          printf("Entrer la valeur de T[%d] =  ",i+1);
          scanf("%d",&T[i]);
      }
      int s = 0 ;
      for(int j = 0 ; j < a ; j++ ){
          s = s + T[j] ; 
      }

      int Moy = s / a ;
      printf("la moyenne de tableau est : %d ",Moy);
}