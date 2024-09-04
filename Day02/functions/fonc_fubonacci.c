#include <stdio.h>

int fibuncacci(int a ){
   int b = 0;
   int c = 1;
   int result;
   for(int i = 3 ; i <= a ; i++ ){
      result = b + c ;
      b = c ;
      c = result;
   }
   return result;
}

int main(){
    int val1;
    printf("Entrez la valeur : ");
    scanf("%d",&val1);

    printf("le n-ième terme de la suite de Fibonacci de valeur %d est : %d ",val1,fibuncacci(val1));
}