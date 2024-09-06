#include <stdio.h>

#define  Moins {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembere", "Octobre", "Novombre", "Decembre"}

int main()
{
 int da , mo , yea ;
 const char *Mo[] = Moins;
 printf("Entrer une date en format de ( mm/dd/yyyy ) :");
 scanf("%d %d %d",&da,&mo,&yea);

 printf("%02d-%s-%d", da, Mo[mo - 1], yea);

 return 0;
}
