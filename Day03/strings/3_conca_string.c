#include <stdio.h>
#include <string.h>

int main()
{
  char str1[50],str2[50];
  int i,j=0;
  printf("Entrez string 1 : ");
  gets(str1);
  printf("Entrez string 2: ");
  gets(str2);
  for(i=strlen(str1);str2[j]!='\0';i++) 
  {
     str1[i]=str2[j];
     j++;
  }
  str1[i]='\0';
  printf("le string 1 est 2 apres les concatenante: ");
  puts(str1);
  return 0;
}