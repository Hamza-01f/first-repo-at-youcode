#include <stdio.h>

typedef struct 
{
    char nom[20];
    char p_nom[20];
    int note[5];
}represente;

int main(){
   
   represente nome;
   represente pr_nm;
   represente notes;

   printf("Entrez le nome de l'étudiant : ");
   scanf("%s",nome.nom);

   printf("Entrez le prénom de l'étudiant : ");
   scanf("%s",pr_nm.p_nom);

   printf("Entrez les notes de l'étudiant : \n");
   
   int i;
   for( i = 0 ; i < 5 ; i++ ){
      printf("Entrez la note %d : ",i+1);
      scanf("%d",&notes.note[i]);
   }

   printf("le nome de l'étudiant est : %s \n",nome.nom);
   printf("le prénome de l'étudiant est : %s ",pr_nm.p_nom);

   printf("\nafficher les notes de l'étudiant :\n");

   for(int i = 0 ; i < 5 ; i++ ){
      printf("la note %d de l'étudiant est : %d \n",i+1,notes.note[i]);
   }


}