#include <stdio.h>


int main(){
   
   int valeur;
   int dev;
   int mod;

   printf("Entrez une valeur pour la inversee : ");
   scanf("%d",&valeur);
   printf("la valeur %d inversee est : ",valeur);
   dev = valeur;
   do{
        mod = dev % 10;
        dev = dev / 10;
        printf("%d",mod);
    }while(dev != 0);

   return 0;
}