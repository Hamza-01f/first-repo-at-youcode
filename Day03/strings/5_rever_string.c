#include <stdio.h>
#include <string.h>

int main(){
   char str1[50];
   char str2[50];

   printf("Entrez l'original string : ");
   scanf("%s",str1);
   int length = strlen(str1);
   int i;
    for ( i = 0; i < length; i++) {
        str2[i] = str1[length - 1 - i];
    }
    
   printf("l'original string est : %s\n",str1);
   printf("le string inversée est : %s",str2);

   return 0;
}