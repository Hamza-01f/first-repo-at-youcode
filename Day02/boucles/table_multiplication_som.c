#include <stdio.h>

int main(void) {
  int a ;
  printf(" Entrez un nombre pour afficher sa table de multiplication : ");
  scanf("%d",&a);
  for(int i = 1 ; i <= 10 ; i++){
      printf("%d x %d = %d \n",a,i,a*i);
  }
  int s = 1 ;
  for(int i = 1 ; i <= 10 ; i++){
      s = s + a * i ;
  }

  printf("la somme de la produit de %d est : %d \n",a,s);
    return 0;
}