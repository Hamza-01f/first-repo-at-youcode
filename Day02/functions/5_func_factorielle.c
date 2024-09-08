#include <stdio.h>

 int factori( int a ){
       int s = 1;
       for(int i = 1 ; i <= a ; i++ ){
           s = s * i ;
       }
       return s;
   }

int main(){
   int val;
   printf("Entrer une valeur : ");
   scanf("%d",&val);
  
   printf("la factorielle de %d est : %d",val,factori(val));

   return 0;
}