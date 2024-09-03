#include <stdio.h>

int main(void) {
   int a;
   printf("entrez la taille de tableau : ");
   scanf("%d",&a);
   int T[a];
   for (int i = 0 ; i < a ; i++){
       printf("enterez la valeur %d : ",i+1);
       scanf("%d",&T[i]);
   }
   int s = 0;
   for(int i = 0 ; i < a ; i++ ){
       s = s + T[i];
   }
   printf("la somme de tableau T est : %d \n",s);
    return 0;
}