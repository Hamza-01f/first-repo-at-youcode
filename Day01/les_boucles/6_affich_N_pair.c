#include <stdio.h>

int main(){

    int Numb ;

    printf("Entrez Une Valeur : ");
    scanf("%d",&Numb);

    printf("les %d premiers nombres pairs : \n",Numb);
    int count = 0;

    for(int i = 1 ; i <= Numb*3 ; i++ ){
         if(i %2 == 0 ){
         printf("%d _ ",i);
         count++;
         }
         if(count == Numb)
           break;
    }

  return 0;
}