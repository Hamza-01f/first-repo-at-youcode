#include <stdio.h>

int main(){
  int Nom;
  printf("Entrez une entier : ");
  scanf("%d",&Nom);
  for(int i = 1 ; i <= Nom ; i++ ){
    if(i % 2 != 0)
    printf("%d,",i);
  }
  return 0;
}