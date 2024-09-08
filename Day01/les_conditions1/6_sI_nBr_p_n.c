#include <stdio.h>


int main()
{
 int Nr;
 printf("Entrer un nombre pour le vérifier : ");
 scanf("%d",&Nr);

 if( Nr > 0 )
   printf("le nombre %d est positive :",Nr);
 else if( Nr == 0 )
   printf("le nombre %d est null :",Nr);
 else
   printf("le nombre %d est negative :",Nr);

 return 0;
}
