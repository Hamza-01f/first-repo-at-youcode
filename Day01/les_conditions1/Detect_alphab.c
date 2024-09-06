#include <stdio.h>

int main()
{
 char al ;
 int at ;
 printf("Entrer une caractére :");
 scanf("%c",&al);

 at = al ;
 if ( at >= 65 && at <= 90 || at >= 97 && at <= 122 )
  {
      if(at >= 65 && at <= 90 )
          printf("le caractére %c est alphabet et aussi majuscule :",al);
      else
          printf("le caractére %c est alphabet et aussi minuscule :",al);
  
   }else{
        printf("le caractère saisi n'est pas un alphabet :");
   }
   
 return 0;
}
