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
   for(int i = 0 ; i < a ; i++ ){
       printf("%d ,\n",T[i]);
   }
    return 0;
}