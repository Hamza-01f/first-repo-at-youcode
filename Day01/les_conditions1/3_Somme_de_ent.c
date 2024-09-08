#include <stdio.h>

int main()
{
 int vl1 , vl2 , S ;
 printf("Entrer la promiére valeur :");
 scanf("%d",&vl1);
 printf("Entrer la deuxiéme valeur :");
 scanf("%d",&vl2);

 if ( vl1 == vl2 )
  {
    S = (vl1 + vl2) * 3 ;
    printf("la somme avec triple est %d :",S);
  }else{
    S = vl1 + vl2 ;
    printf("la somme est %d :",S);
  }

 return 0;
}
