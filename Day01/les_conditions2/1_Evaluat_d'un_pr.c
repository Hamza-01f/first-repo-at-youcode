#include <stdio.h>


int main(){
    int Rev_annl;
    int scor_Cred;
    int Dur_pret;

    printf("le programme pour validé l'éligibilite : \n");
    printf("Entrez la Revenu annuel : ");
    scanf("%d",&Rev_annl);

    printf("Entrez Le Score de Crédit : ");
    scanf("%d",&scor_Cred);

    printf("Entrez la Duree du Prét : ");
    scanf("%d",&Dur_pret);

    if(Rev_annl >= 30000 ){
       if((scor_Cred >= 700) && (Dur_pret <= 10))
        printf("Eligible : \n ");
       else
        printf("Eligible avec conditions : \n");
    }else{
        printf("Non éligible : \n");
    }

   return 0;
}