#include <stdio.h>

int main(void) {
   int a , b ;
   printf("entrez la taille de tableau : ");
   scanf("%d",&a);
   printf("Entrez le facteur de multiplication : ");
   scanf("%d",&b);
   int T[a];
   for (int i = 0 ; i < a ; i++){
       printf("Enterez la valeur %d : ",i+1);
       scanf("%d",&T[i]);
   }
   for(int i = 0 ; i < a ; i++){
       T[i] = (T[i]*b);
   }
   for(int i = 0 ; i < a ; i++ ){
       printf("%d ,\n",T[i]);
   }
    return 0;
}