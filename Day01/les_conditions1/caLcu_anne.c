#include <stdio.h>

int main()
{
 char tr;
 int ry;
 unsigned int ca;

 printf("--------------bienvenue----------------------------\n");

 printf("#cliquez sur 'm' pour transférer l'année choisie en mois :#\n");
 printf("#cliquez sur 'j' pour transférer l'année choisie en jours :#\n");
 printf("#cliquez sur 'h' pour transférer l'année choisie en heures :#\n");
 printf("#cliquez sur 'n' pour transférer l'année choisie en minutes :#\n");
 printf("Entrer votre choix : ");
 scanf("%c",&tr);
 
 printf("Choisi une année qui pas bissextile pour le transférer : ");
 scanf("%d",&ry);
 
 int s = 366;

 if( ry % 4 == 0)
  {
    switch(tr)
           {
           case 'm' :
                    ca = (s / 10) / 3 ;
                    printf("l'année %d que vous avez choisie contient de %d mois :",ry,ca);
                    break;
           case 'j' :
                    ca = s;
                    printf("l'année %d que vous avez choisie contient de %d jeurs :",ry,ca);
                    break;
           case 'h' :
                    ca = s * 24;
                    printf("l'année %d que vous avez choisie contient de %d heures :",ry,ca);
                    break;
           case 'n' :
                    ca = s * 24 * 60 ;
                    printf("l'année %d que vous avez choisie contient de %d minutes :",ry,ca);
                    break;
           default  :
                    printf("invalid caractére");
                    break;
           }
  }else{
   /*  switch(tr)
           {
           case 'm' :
                    ca = (s / 10) / 3 ;
                    printf("l'année %d que vous avez choisie contient de %d mois :",ry,ca);
                    break;
           case 'j' :
                    ca = s-1;
                    printf("l'année %d que vous avez choisie contient de %d jeurs :",ry,ca);
                    break;
           case 'h' :
                    ca = (s-1) * 24;
                    printf("l'année %d que vous avez choisie contient de %d heures :",ry,ca);
                    break;
           case 'n' :
                    ca = (s-1) * 24 * 60 ;
                    printf("l'année %d que vous avez choisie contient de %d minutes :",ry,ca);
                    break;
           default  :
                    printf("invalid caractére");
                    break;
           }
         */
        printf("l'année que vous avez choisie est bissextel:\n");
        }
 
 return 0;
}
