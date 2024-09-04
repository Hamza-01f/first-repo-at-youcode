#include <stdio.h>

int main(){
    int Nom;
    printf("Entrez un nombre positif : ");
    scanf("%d",&Nom);

    for(int i = 1 ; i <= Nom ; i++ ){
        if(Nom % i == 0 )
        printf("%d,",i);
    }
}