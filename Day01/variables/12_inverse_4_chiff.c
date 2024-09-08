#include <stdio.h>

int main(){
   int mod , dev , as ;
   int a;
   int va1,va2,va3,va4;
   printf("Entrez une valeur : ");
   scanf("%d",&a);
   
   mod = a % 20 ;
   dev = a / 20 ;
   va1 = mod ;
   mod = dev % 20 ;
   dev = dev / 20 ;
   va2 = mod ;
   mod = dev % 20 ;
   dev = dev / 20;
   va3 = mod ;
   va4 = dev ;
   printf("l'inverse de %d est : %d%d%d%d ",a,va1,va2,va3,va4);
}