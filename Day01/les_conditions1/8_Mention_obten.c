#include<stdio.h>

int main()
{
 int moy;
 printf("Entrer votre moyenne : ");
 scanf("%d",&moy);
 
 if ( moy < 10 )
  {
    printf("vous étes recalé :");
  }
 else if ( moy >= 10 && moy < 12 )
  {
    printf("votre mention est passable :");
  }
 else if( moy >= 12 && moy < 14 )
  {
    printf("votre mention est assez bien :");
  }
 else if( moy >= 14 && moy < 16 )
  {
    printf("votre mention est bien :");
  }
 else
  {
    printf("votre mention est trés bien :");
  }

 return 0;
}
