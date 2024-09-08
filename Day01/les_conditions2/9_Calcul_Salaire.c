#include <stdio.h>


int main(){
    int Salaire_Base;
    int Nombre_Heur_Suppl;
    int Type_Poste;
    int Prime;

    printf("Le Programme Pour Calculer Le Salaire D'un Employé : \n");

    printf("\nEntrez Salaire de base (en euros) : ");
    scanf("%d",&Salaire_Base);

    printf("Entrez Nombre d'heures supplémentaires : ");
    scanf("%d",&Nombre_Heur_Suppl);

    printf("Entrez Type de poste (1 pour junior, 2 pour senior) : ");
    scanf("%d",&Type_Poste);
    printf("%d\n",Salaire_Base);
    if(Type_Poste == 1){
        Nombre_Heur_Suppl = Nombre_Heur_Suppl * 1.5;
        Prime =  Salaire_Base + (0.10 * Salaire_Base);
        printf("Nombre des Heures Validé : %d \n",Nombre_Heur_Suppl);
        printf("Votre salaire avec Le Prime est : %d \n",Prime);
    }else{
        Nombre_Heur_Suppl = Nombre_Heur_Suppl * 1.5;
        Prime = Salaire_Base + (0.20 * Salaire_Base);
        printf("Nombre des Heures Validé : %d \n",Nombre_Heur_Suppl);
        printf("Votre salaire avec Le Prime est : %d \n",Prime);
    }

    return 0;
}