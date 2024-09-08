#include <stdio.h>

int somme(int a , int b){
   if(a < b )
    return a;
    else
    return b;
}

int main(){
    int val1,val2;
    int c;
    printf("Entrez la promiere valeur : ");
    scanf("%d",&val1);
    printf("Entrez la deuxieme valeur : ");
    scanf("%d",&val2);

    printf("le minimum valeu entre %d et %d est : %d ",val1,val2,somme(val1,val2));

    return 0;
}