#include <stdio.h>
int pair_impair(int a){
    if(a % 2 == 0)
    return 1;
    else
    return 0;
}

int main(){
    int Nom;
    printf("Entrez une valeur : ");
    scanf("%d",&Nom);
    int ret;
    ret = pair_impair(Nom);
    (ret == 1 ) ? printf("la valeur %d est pair : ",Nom) : printf("la valeur %d est impaire : ",Nom);
 return 0;   
}