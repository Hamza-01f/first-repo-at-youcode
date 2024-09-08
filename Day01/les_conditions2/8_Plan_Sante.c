#include <stdio.h>


int main(){
    int Age;
    int Histoi_Medical;
    int Couverture;

    printf("Le Programme Pour Déterminer Le Plan De Santé : \n");

    printf("\nEntrez l'Âge : ");
    scanf("%d",&Age);

    printf("Entrez L'historique médical (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur) : ");
    scanf("%d",&Histoi_Medical);

    printf("Entrez Le Type de couverture (1 pour de base, 2 pour étendue) ");
    scanf("%d",&Couverture);

    if(Couverture){
        printf("Votre Plan est Plan de base : \n");
    }else{
        if(Histoi_Medical == 2){
            printf("Votre plan est Plan d'étendue : \n");
            printf("Vous Avez Une Couverture Supplémentaire : \n");
        }
    }
    return 0;
}