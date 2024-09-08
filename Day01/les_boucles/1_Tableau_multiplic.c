#include <stdio.h>

int main(){

    int Numb ;

    printf("Entrez une Valeur : ");
    scanf("%d",&Numb);

    for(int i = 1 ; i <= 10 ; i++ ){
        printf("%d x %d = %d .\n",Numb,i,Numb*i);
    }

  return 0;
}