#include <stdio.h>

int main(void) {
  int a ;
  printf(" Entrez un nombre affiche sa table de multiplication : ");
  scanf("%d",&a);
  for(int i = 10 ; i > 0 ; i--){
      printf("%d x %d = %d \n",a,i,a*i);
  }
    return 0;
}