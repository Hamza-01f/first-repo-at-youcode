#include <stdio.h>

int main(){

    int N;
    printf("Entrez une valeur : ");
    scanf("%d",&N);

    int s = 0 ;
    for(int i = 0 ; i <= N ; i++){
        s = s + i;
    }

    printf("la somme des N premiers nombres naturels est : %d ",s);

    return 0;

}