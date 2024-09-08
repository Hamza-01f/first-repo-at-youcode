#include <stdio.h>


int main(){
    int age_condu;
    int typ_de_voit;
    int Nom_accide;
    int Pri_base;

    printf("le programme pour calculer la prime d'assurance d'une voiture : \n");

    printf("Entrez l'age de conducteur (en années) : ");
    scanf("%d",&age_condu);

    printf("Entrez Type de voiture (1 pour sportive , 2 pour utilitaire , 3 pour familiale): ");
    scanf("%d",&typ_de_voit);

    printf("Entrez Nombre d'accidents au cours des 5 derniéres années : ");
    scanf("%d",&Nom_accide);

    printf("Entrez la Prime De Base :");
    scanf("%d",&Pri_base);

    if(Nom_accide > 1 ){
     if(age_condu < 25 ){
       if(typ_de_voit == 1 ){
         Pri_base = Pri_base * 1.5 + Pri_base * 2 + (0.30 * Pri_base);
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else if(typ_de_voit == 2 ){
        Pri_base = Pri_base * 1.2 + Pri_base * 1.5 + (0.30 * Pri_base);
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else{
        Pri_base = Pri_base * 1.5 + Pri_base * 1.1 + (0.30 * Pri_base);
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       
       }else if(age_condu >= 25 && age_condu <= 65){
       if(typ_de_voit == 1 ){
         Pri_base = Pri_base * 1.5 + Pri_base * 2 + (0.30 * Pri_base);
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else if(typ_de_voit == 2 ){
        Pri_base = Pri_base * 1.2 + Pri_base * 1.5 + (0.30 * Pri_base);
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else{
        Pri_base = Pri_base * 1.5 + Pri_base * 1.1 + (0.30 * Pri_base);
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       
       }else if(age_condu >= 25 && age_condu > 65){
        if(typ_de_voit == 1 ){
         Pri_base = Pri_base * 1.5 + Pri_base * 2 + (0.30 * Pri_base);
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else if(typ_de_voit == 2 ){
        Pri_base = Pri_base * 1.2 + Pri_base * 1.5 + (0.30 * Pri_base);
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else{
        Pri_base = Pri_base * 1.5 + Pri_base * 1.1 + (0.30 * Pri_base);
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
     }
    }else{
     if(age_condu < 25 ){
       if(typ_de_voit == 1 ){
         Pri_base = Pri_base * 1.5 + Pri_base * 2 ;
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else if(typ_de_voit == 2 ){
        Pri_base = Pri_base * 1.2 + Pri_base * 1.5 ;
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else{
        Pri_base = Pri_base * 1.5 + Pri_base * 1.1 ;
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       
       }else if(age_condu >= 25 && age_condu <= 65){
       if(typ_de_voit == 1 ){
         Pri_base = Pri_base * 1.5 + Pri_base * 2 ;
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else if(typ_de_voit == 2 ){
        Pri_base = Pri_base * 1.2 + Pri_base * 1.5 ;
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else{
        Pri_base = Pri_base * 1.5 + Pri_base * 1.1 ;
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       
       }else if(age_condu >= 25 && age_condu > 65){
        if(typ_de_voit == 1 ){
         Pri_base = Pri_base * 1.5 + Pri_base * 2 ;
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else if(typ_de_voit == 2 ){
        Pri_base = Pri_base * 1.2 + Pri_base * 1.5 ;
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
       else{
        Pri_base = Pri_base * 1.5 + Pri_base * 1.1 ;
         printf("l'assurance de cette voiture est %d :\n",Pri_base);
       }
      }
     }
    

   return 0;
}