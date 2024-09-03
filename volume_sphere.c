#include <stdio.h>
#include <math.h>
#define T 3.14

int main(void) {
   int ray;
   
   printf("Entrez le rayon de  sphére : ");
   scanf("%d",&ray);
   
   int vol = (4/3) * T * pow(ray,2);
   
   printf("le volume de sphére est : %d ",vol);
    return 0;
}