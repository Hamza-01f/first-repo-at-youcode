#include <stdio.h>

int main(){
    int bas,ex;
    int pow = 0 ;
    printf("Entrez une base positive : ");
    scanf("%d",&bas);
    printf("Entrez une exposant positive : ");
    scanf("%d",&ex);
    if(bas < 0 || ex < 0)
       printf("la valeur entré pas validé : \n");
    else{
       int s = 1 ;
       while(s < ex ){
           pow = pow + bas * bas ;
           s++;
       }
    }
    printf("la puissance de la base %d avec l'exposant %d est : %d ",bas,ex,pow);
}