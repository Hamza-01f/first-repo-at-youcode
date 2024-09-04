#include <stdio.h>
#include <math.h>

int main(){
  int a , b , c ;
  int moy_ge;
  printf("Entrez la valeur de a : ");
  scanf("%d",&a);
  printf("Entrez la valeur de b : ");
  scanf("%d",&b);
  printf("Entrez la valeur de c : ");
  scanf("%d",&c);
  int m = 0.33;
  int n = (a*b*c);
  moy_ge = pow(n,m);

  printf("la moyenne geometrique de a et b et c est : %d ",moy_ge);
}