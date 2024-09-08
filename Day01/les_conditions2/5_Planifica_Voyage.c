#include <stdio.h>

int main(){
    int Budget;
    int Destination;
    int Nom_Personne;

    
    printf("Programme Pour Planifier Un Voyage  : \n");

    printf("\nEntrez Le Budget (en euros) : ");
    scanf("%d",&Budget);

    printf("Entrez La Destination (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d",&Destination);

    printf("Entrez Le Nombre de personnes ");
    scanf("%d",&Nom_Personne);

    if(Budget >= 1000 ){
        if(Nom_Personne > 2){
          printf("Voyage haut de gamme : \n");
          printf("Le Destinations Recommandées est Plage: \n");
        }else{
            printf("Voyage haut de gamme : \n");
        }
    }else if(Budget >= 500 && Budget <= 1000 ){
        if(Nom_Personne <= 2 ){
            printf("Voyage Moyen : \n");
            printf("Le Destination Recommandées est Montagne : \n");
        }else{
            printf("Voyage Moyen : \n");
        }
    }else{
        printf("Le Destination Recommandées est La Ville : \n");
    }
   
   return 0;
}