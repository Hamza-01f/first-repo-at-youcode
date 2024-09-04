#include <stdio.h>

int main(){

    int a ;
    printf("Entrer la taille : ");
    scanf("%d",&a);

    int T[a];

    for(int j = 0 ; j < a ; j++ ){
        printf("Entrez la valeur T[%d] = ",j+1);
        scanf("%d",&T[j]);
    }
    for( int i = 0 ; i < a ; i++ )
    {
        if( T[i] % 2 != 0)
        printf("%d,",T[i]);
    }
}