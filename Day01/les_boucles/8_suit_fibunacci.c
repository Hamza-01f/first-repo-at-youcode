#include <stdio.h>

int main(){
    int n , n1 , n2 , valeur;
    n1 = 0;
    n2 = 1;
    printf("Entrer un valeur : ");
    scanf("%d,",&n);
    for( int i = 1 ; i <= n ; i++ ){
        printf("%d,",n1);
        valeur = n1 + n2 ;
        n1 = n2;
        n2 = valeur;
    }

}