#include <stdio.h>

int main()
{
 char va;
 printf("Entrer un caractére :");
 scanf("%c",&va);

 switch(va)
 {
  case 'a' : 
          printf("la caractére %c est voyelle :",va);
          break;
  case 'e' :
          printf("la caractére %c est voyelle :",va);
          break;
  case 'i' :
          printf("la caractére %c est voyelle :",va);
          break;
  case 'o' :
          printf("la caractére %c est voyelle :",va);
          break;
  case 'u' :
          printf("la caractére %c est voyelle :",va);
          break;
  case 'y' :
          printf("la caractére %c est voyelle :",va);
          break;
  default  :
          printf("la caractére %c est pas voyelle :",va);
          break;
 }

 return 0;
}
