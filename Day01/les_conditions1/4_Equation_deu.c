#include <stdio.h>
#include <math.h>

int main()
{ 

 float a , b , c , delta , x1 , x2 ;
 printf("Entrer la valeur de a ; ");
 scanf("%f",&a);
 printf("Entrer la valeur de b ; ");
 scanf("%f",&b);
 printf("Entrer la valeur de c ; ");
 scanf("%f",&c);

 delta = pow( -b , 2 ) - ( 4 * a * c ); // calculer la valeur de dalta par la formule (-b²)-(4xaxc)

 if ( delta < 0 )
  {

   printf("l'equation a aucun solution :");

  }else if ( delta == 0 ){

    x1 = (-b) / (2 * a) ;
   printf("la solution de cette equation est %.2f :",x1);

  }else{

    x1 = ((-b) - (sqrt( delta ))) / (2 * a );
    x2 = ((-b) + (sqrt( delta ))) / ( 2 * a );
   printf("la solution de cette equation est %.2f et %.2f :",x1,x2);

  }
  
 return 0;
}
