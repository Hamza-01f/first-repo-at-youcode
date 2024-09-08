#include <stdio.h>


int main(){
   int valeur;
   int dev;
   int count = 0;

   printf("Entrez une valeur pour calculer ses chiffres : ");
   scanf("%d",&valeur);
   dev = valeur;
   do{
        dev = dev / 10;
        count++;
    }while(dev != 0);

    printf("la valeur %d contient %d chiffres : \n",valeur,count);
   return 0;
}