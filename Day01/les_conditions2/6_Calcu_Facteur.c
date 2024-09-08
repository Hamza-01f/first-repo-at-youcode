#include <stdio.h>

int main(){
    float Consommation;
    int Type_Etulisateur;
    int Type_Contrat;

   printf("Programmr Pour Calculer La Facture D'électricité : \n");

   printf("\nEntrez La Consommation d'électricité (en kWh): ");
   scanf("%f",&Consommation);

   printf("Entrez Le Type d'utilisateur (1 pour résidentiel, 2 pour commercial): ");
   scanf("%d",&Type_Etulisateur);

   printf("Entrez Le Type de contrat (0 pour standard, 1 pour réduit) : ");
   scanf("%d",&Type_Contrat);

   if(Type_Etulisateur){//verifie le type d'utilisateur
        if(Type_Contrat){//verifie le type de contrat
            if(Consommation > 500 ){//verifie le consommation
               Consommation = Consommation * 0.15 + Consommation * 0.10 ;
               printf("la consommation dépasse 500 kWh alors Votre Tarif est : %.2f €\n",Consommation);
            }else{
               Consommation = Consommation * 0.15 ;
               printf("Votre Tarif est : %.2f €\n",Consommation);
            }
        }else{
           if(Consommation > 500 ){
               Consommation = Consommation * 0.20 + Consommation * 0.10 ;
               printf("la consommation dépasse 500 kWh alors Votre Tarif est : %.2f €\n",Consommation);
            }else{
               Consommation = Consommation * 0.20 ;
               printf("Votre Tarif est : %.2f €\n",Consommation);
            } 
        }
   }else{
       if(Type_Contrat){
            if(Consommation > 500 ){
               Consommation = Consommation * 0.25 + Consommation * 0.10 ;
               printf("la consommation dépasse 500 kWh alors Votre Tarif est : %.2f €\n",Consommation);
            }else{
               Consommation = Consommation * 0.25 ;
               printf("Votre Tarif est : %.2f €\n",Consommation);
            }
        }else{
           if(Consommation > 500 ){
               Consommation = Consommation * 0.30 + Consommation * 0.10 ;
               printf("la consommation dépasse 500 kWh alors Votre Tarif est : %.2f €\n",Consommation);
            }else{
               Consommation = Consommation * 0.30 ;
               printf("Votre Tarif est : %.2f €\n",Consommation);
            } 
        }
   }
   return 0;
}