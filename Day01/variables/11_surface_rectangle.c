#include <stdio.h>

int main(void) {
  int lng;
  int larg;
  
  printf("Entrez la longeur de réctangle : ");
  scanf("%d",&lng);
  printf("Entrez la largeur de réctangle : ");
  scanf("%d",&larg);
  
  int surf = lng * larg ;
  
  printf("la surface de rectangle est : %d ",surf);
  
    return 0;
}