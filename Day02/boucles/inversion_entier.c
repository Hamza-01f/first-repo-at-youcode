#include <stdio.h>

int main(){
    int Nom;
    int rev;
    printf("Entrez une valeur : ");
    scanf("%d",&Nom);
    rev = 0;

   while(Nom !=0)

   {

   rev=rev*10+Nom%10;

   Nom=Nom/10;
   }
  printf("%d,",rev);
    return 0;
}