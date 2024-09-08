#include <stdio.h>

int main(){

    int Numb ;

    printf("Entrez Une Valeur Pour Afficher Sa Factorielle : ");
    scanf("%d",&Numb);

    int Factori = 1 ;
    for(int i = 1 ; i <= Numb ; i++ ){
         Factori = Factori * i ;
    }

    printf("le factorielle de valeur %d est : %d \n",Numb,Factori);

  return 0;
}