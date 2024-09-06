#include <stdio.h>

int main(){
    int val;

    printf("Entrer une  valeur : ");
    scanf("%d",&val);

    if(val % 2 == 0 )
    printf("la valeur %d est paire :\n",val);
    else
    printf("la valeur %d est impaire :\n",val);
}