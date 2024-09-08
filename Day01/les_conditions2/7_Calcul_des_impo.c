#include <stdio.h>


int main(){
    int Revenue;
    int Status;
    int Deductions;

    printf("Le Programme Pour Calculer Les impôts à Payer : \n");
    
    printf("\nEntrez Le Revenu annuel (en euros): ");
    scanf("%d",&Revenue);

    printf("Entrez Le Statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille) : ");
    scanf("%d",&Status);

    if(Status){
        if(Revenue <= 20000){
         Deductions = Revenue * 0.05 - 1000;
         printf(" Votre impôts à payer est : %d \n",Deductions);
        }else if(Revenue > 20000 &&& Revenue <= 50000){
         Deductions = Revenue * 0.10 - 1000;
         printf(" Votre impôts à payer est : %d \n",Deductions);
        }else{
         Deductions = Revenue * 0.20 - 1000;
         printf(" Votre impôts à payer est : %d \n",Deductions);
        }
    }else if(Status == 2){
          if(Revenue <= 20000){
         Deductions = Revenue * 0.05 - 2000;
         printf(" Votre impôts à payer est : %d \n",Deductions);
        }else if(Revenue > 20000 &&& Revenue <= 50000){
         Deductions = Revenue * 0.10 - 2000;
         printf(" Votre impôts à payer est : %d \n",Deductions);
        }else{
         Deductions = Revenue * 0.20 - 2000;
         printf(" Votre impôts à payer est : %d \n",Deductions);
        }
    }else{
         if(Revenue <= 20000){
         Deductions = Revenue * 0.05 - 3000;
         printf(" Votre impôts à payer est : %d \n",Deductions);
        }else if(Revenue > 20000 &&& Revenue <= 50000){
         Deductions = Revenue * 0.10 - 3000;
         printf(" Votre impôts à payer est : %d \n",Deductions);
        }else{
         Deductions = Revenue * 0.20 - 3000;
         printf(" Votre impôts à payer est : %d \n",Deductions);
        }
    }
    return 0;
}