#include <stdio.h>

int fib(int n ){
   if(n < 2 )
   return n;
   else
   return fib(n-1) + fib(n-2);
}

int main(){
    int val1;
    printf("Entrez la valeur : ");
    scanf("%d",&val1);
    printf("le suit fibunacci de valeur : %d ",val1);
    for(int i = 0 ; i < val1 ; i++){
    printf("%d ,",fib(val1));
    }
}