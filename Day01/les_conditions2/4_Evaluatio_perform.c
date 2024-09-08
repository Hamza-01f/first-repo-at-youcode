#include <stdio.h>

int main(){
    int Score_Perform;
    int Anciennet;
    int Recompen_Re;


    printf("\nEntrez Le Score de performance (de 0 à 100): ");
    scanf("%d",&Score_Perform);

    printf("Entrez L'ancienneté (en années): ");
    scanf("%d",&Anciennet);

    printf("Entrez Le Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus) : ");
    scanf("%d",&Recompen_Re);

    if(Score_Perform < 50 ){
        printf("Insuffisante;\n");
        return 0;
    }
    if(Recompen_Re == 2){
       if(Score_Perform >= 90 && Anciennet >= 5 ){
        Score_Perform = 0.20 * Score_Perform ;//bonus de 20 %
        printf("Excellente :\n");
       }else if(Score_Perform >= 75 && Anciennet >= 3){
        Score_Perform = 0.20 * Score_Perform ;
        printf("Bonne:\n");
       }else{
        Score_Perform = 0.20 * Score_Perform ;
        printf("Satisfaisante:\n");
       }
    }else if(Recompen_Re){
    if(Score_Perform >= 90 && Anciennet >= 5 ){
        Score_Perform = 0.10 * Score_Perform ;//bonus de 10%
        printf("Excellente :\n");
       }else if(Score_Perform >= 75 && Anciennet >= 3){
        Score_Perform = 0.10 * Score_Perform ;
        printf("Bonne:\n");
       }else{
        Score_Perform = 0.10 * Score_Perform ;
        printf("Satisfaisante:\n");
       }
    }else{//pas de bonus ici 
        if(Score_Perform >= 90 && Anciennet >= 5 ){
        printf("Excellente :\n");
       }else if(Score_Perform >= 75 && Anciennet >= 3){
        printf("Bonne:\n");
       }else{
        printf("Satisfaisante:\n");
       }
    }

    return 0;
}