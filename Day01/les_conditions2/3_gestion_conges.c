#include <stdio.h>

int main(){
    int Jour_Accorde;
    int Jour_Utilise;
    int Stat_Employ;
    int Jour_Restant;

    printf("Programme Pour Déterminer Les Jours De Congé Restant  : \n");

    printf("\nEntrez Le Nombre total de jours de congés accordés : ");
    scanf("%d",&Jour_Accorde);

    printf("Entrez Le Nombre De Jours De Congés Utilisés: ");
    scanf("%d",&Jour_Utilise);

    printf("Entrez Le Statut De L'employé (0 pour temps partiel, 1 pour temps plein : ");
    scanf("%d",&Stat_Employ);
    
    if(Jour_Utilise > Jour_Accorde){
           printf("Alert , les jours utilisés dépassent les jours accordés,\n");
           return 0;
    }
    if(Stat_Employ){
           Jour_Restant = Jour_Accorde - Jour_Utilise ;
           printf("Les Jours De Congé Restant Sont : %d\n",Jour_Restant);
    }else{
           Jour_Restant = (Jour_Accorde /2) - Jour_Utilise ;
           printf("Les Jours De Congé Restant Sont : %d\n",Jour_Restant);
    }

    return 0;
}